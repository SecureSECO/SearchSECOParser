/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
� Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

//#define ANTLR4CPP_STATIC

#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"

#include "antlrParser.h"
#include "languages/cpp/generated/CPP14Lexer.h"
#include "languages/cpp/generated/CPP14Parser.h"
#include "languages/cpp/CPP14ParserListenerCustom.h"


std::vector<HashData> antlrParsing::parseFile(std::string filepath)
{
    std::vector<HashData> meths;
    std::ifstream* file = new std::ifstream(filepath);

    if (file->is_open())
    {

        antlr4::ANTLRInputStream* input = new antlr4::ANTLRInputStream(*file);

        // Lexing:
        CPP14Lexer* lexer = new CPP14Lexer(input); // CLexer was generated by previous step
        //lexer->removeErrorListeners();
        antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(lexer);
        tokens->fill();


        /*for (auto token : tokens->getTokens()) {
            std::cout << token->toString() << std::endl;
        }*/

        // Parsing:
        CPP14Parser* parser = new CPP14Parser(tokens); // CParser was generated by previous step
        //parser->removeErrorListeners();
        antlr4::TokenStreamRewriter* rewriter = new antlr4::TokenStreamRewriter(tokens);
        CustomCPP14Listener* extractor = new CustomCPP14Listener(parser, rewriter); // Custom listener class

        //parser->addParseListener(extractor);
        
        antlr4::tree::ParseTree* tree = parser->translationUnit();
        
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(extractor, tree);

        meths = extractor->output;

        /*for (HashData s : meths)
        {
            std::cout << s.hash << std::endl << std::endl;
        }*/

        std::cout << tree->toStringTree(parser, true) << std::endl;
        file->close();
    }
	return meths;
}
