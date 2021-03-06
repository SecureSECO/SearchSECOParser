/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/

#include <iostream>
#include <algorithm>
#include <thread>
#include <filesystem>

#include "loguru/loguru.hpp"

#include "Logger.h"
#include "Parser.h"
#include "StringStream.h"
#include "SrcMLCaller.h"
#include "XmlParser.h"
#include "AntlrParser.h"

extern std::atomic<bool> stopped;

std::vector<HashData> Parser::parse(std::string path, int numberThreads)
{
	loguru::set_thread_name("parser");
	
	Logger::logInfo("Starting Parser", __FILE__, __LINE__);

	auto dirIter = std::filesystem::recursive_directory_iterator(path);
	int filesCount = std::count_if(begin(dirIter), end(dirIter),
		[](auto &entry) { return entry.is_regular_file() && entry.path().string().find(".git") == std::string::npos; });
	Logger::logInfo(("Parsing " + std::to_string(filesCount) + " files").c_str(), __FILE__, __LINE__);

	Logger::logDebug("Sending files to srcML", __FILE__, __LINE__);
	std::thread *srcmlThread = {};
	StringStream *stream = SrcMLCaller::startSrcML(path.c_str(), srcmlThread, numberThreads);

	Logger::logDebug("Received stream from srcML", __FILE__, __LINE__);

	Logger::logDebug("Sending stream to Xml Parser", __FILE__, __LINE__);

	// Give XmlParser the path with / instead of \ for finding files.
	std::replace(path.begin(), path.end(), '\\', '/');
	XmlParser xmlParser = XmlParser(path, filesCount);

	std::vector<HashData> hashes = xmlParser.parseXML(stream);

	if (errno != 0 || stopped){
		// If an error occured, discard parsed data and return.
		Logger::logDebug("An error occured in the srcML parser. Returning empty.", __FILE__, __LINE__);
		if (srcmlThread != nullptr && srcmlThread->joinable())
		{
			srcmlThread->join();
		}
		return std::vector<HashData>();
	}

	Logger::logDebug("Hashes received from Parser, returning", __FILE__, __LINE__);
	
	std::string log = "SrcML parsing finished, number of methods found: " + std::to_string(hashes.size());
	Logger::logDebug(log.c_str(), __FILE__, __LINE__);


	AntlrParsing pser;

	Logger::logDebug("Starting custom parser ", __FILE__, __LINE__);

	std::vector<HashData> hashes2 = pser.parseDir(path, numberThreads, filesCount);

	log = "Custom parser parsing finished, number of methods found: " + std::to_string(hashes2.size());
	Logger::logDebug(log.c_str(), __FILE__, __LINE__);


	hashes.insert(hashes.end(), hashes2.begin(), hashes2.end());

	log = "Parsing finished, total number of methods found: " + std::to_string(hashes.size());
	Logger::logInfo(log.c_str(), __FILE__, __LINE__);

	return hashes;
}

