/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "pch.h"
#include "StringStreamMock.h"
#include "XmlParser.h"

TEST(GetNextTagTests, BasicInput)
{
	StringStreamMock* ssm = new StringStreamMock("dataBefore<Tag extra arguments>");
	XmlParser xmlParser = XmlParser("_");
	TagData out = xmlParser.getNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "extra arguments");
	EXPECT_EQ(out.textBefore, "dataBefore");

	delete ssm;
	ssm = new StringStreamMock("dataBefore<Tag>");
	out = xmlParser.getNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "");
	EXPECT_EQ(out.textBefore, "dataBefore");
	delete ssm;
}

TEST(GetNextTagTests, IncompleteInput)
{
	StringStreamMock* ssm = new StringStreamMock("dataBefore<Tag");
	XmlParser xmlParser = XmlParser("_");
	TagData out = xmlParser.getNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "");
	EXPECT_EQ(out.textBefore, "dataBefore");
	delete ssm;
}

TEST(GetNextTagTests, RemoveWhiteSpace)
{
	StringStreamMock* ssm = new StringStreamMock("d a t a B e f o r e		\r\n<Tag A R G S>");
	XmlParser xmlParser = XmlParser("_");
	TagData out = xmlParser.getNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "A R G S");
	EXPECT_EQ(out.textBefore, "dataBefore");
	delete ssm;
}

TEST(ParseXMLTests, SimpleFile)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<?xml version="1.0" encoding="UTF - 8" standalone="yes"?><function><name>int</name></function>)");
	Node* xml = new Node(unknown_tag, nullptr);
	Node* type = new Node(TagMap::getTag("function"), xml);
	Node* name = new Node(TagMap::getTag("name"), type);
	xml->addNode(type);
	type->addNode(name);
	name->addNode(new Node("int", TagMap::getTag("name"), name));
	XmlParser xmlParser = XmlParser("_");
	xmlParser.parseXML(ssm, false);
	
	EXPECT_TRUE(xmlParser.getTree()->equal(xml));
}

TEST(ParseXMLTests, SimpleFile2)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<?xml version="1.0" encoding="UTF - 8" standalone="yes"?><comment>SomeTextHere</comment><unit filename="hi"><function someArgs><type>int</type></function><function someArgs><type>int</type></function></unit>)");
	Node* xml = new Node(unknown_tag, nullptr);
	Node* function = new Node(TagMap::getTag("function"), nullptr);
	function->setContents("someArgs");
	Node* type = new Node(TagMap::getTag("type"), function);
	xml->addNode(function);
	xml->addNode(function);
	function->addNode(type);
	type->addNode(new Node("int", TagMap::getTag("type"), type));
	XmlParser xmlParser = XmlParser("_");
	xmlParser.parseXML(ssm, false);

	EXPECT_TRUE(xmlParser.getTree()->equal(xml));
}

TEST(ParseXMLTests, NoXML)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<type><name>int</name></type>)");
	XmlParser xmlParser = XmlParser("_");
	xmlParser.parseXML(ssm, false);

	EXPECT_EQ(xmlParser.getTree(), nullptr);
}

TEST(ParseXMLTests, WrongClosingTags)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<?xml><function><type><name>int</type></name></function>)");
	XmlParser xmlParser = XmlParser("_");
	xmlParser.parseXML(ssm, false);
	Node* type = new Node(unknown_tag, nullptr);

	EXPECT_TRUE(xmlParser.getTree()->equal(type));
}
