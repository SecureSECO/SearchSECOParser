#include "XmlParser.h"
#include "AbstractSyntaxToHashable.h"
#include <iostream>

XmlParser::XmlParser(StringStream* stringStream)
{
	ParseXML(stringStream);
}

void XmlParser::ParseXML(StringStream* stringStream)
{
	tree = new Node("xml", nullptr);
	// The first tag will always be the <?xml> tag, which we want to ignore
	GetNextTag(stringStream);


	Node* current = tree;
	while (!stringStream->Stop())
	{
		TagData tagData = GetNextTag(stringStream);
		current->AddNode(new Node(tagData.textBefore));

		if (tagData.tag[0] == '/')
		{
			// Closing tag, so we go a tag back in our tree
			if (current->GetTag()._Equal("function"))
			{
				// TODO: call the we abstraction + hash function.
				std::string s = AbstractSyntaxToHashable::getHashable(*current);
				std::cout << s;
			}
			current = current->GetPrevious();
		}
		else if (tagData.tag.substr(0, 7)._Equal("comment"))
		{
			// If we see a comment, we want to skip everything in it
			GetNextTag(stringStream);
		}
		else
		{
			// New tag, so we add it and set it as our new current tag
			Node* n = new Node(tagData.tag, current);
			current->AddNode(n);
			n->SetContents(tagData.textInTag);
			current = n;
		}
	}
}

TagData XmlParser::GetNextTag(StringStream* stringStream)
{
	// Getting the text before the next tag
	std::string textBefore;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		if (next == '<')
		{
			break;
		}
		textBefore += next;
	}
	// Getting the actual tag, but without all the stuff behind it
	std::string tag;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		// it for some reason sometimes puts a space after the <, so we just ignore it
		//if (tag.length() == 0 && next == ' ') { continue; }
		if (next == ' ')
		{
			break;
		}
		if (next == '>')
		{
			return TagData(tag, "", textBefore);
		}
		tag += next;
	}
	// Getting the stuff behind the tag thats still in the <>
	std::string textInTag;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		if (next == '>')
		{
			break;
		}
		textInTag += next;
	}
	return TagData(tag, textInTag, textBefore);
}
