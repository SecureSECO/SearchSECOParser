/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/
#pragma once

#include "antlr4-runtime.h"
#include "generated/Python3BaseListener.h"
#include "../../HashData.h"

#include <stack>
#include <map>

class CustomPython3Listener : public Python3BaseListener
{
public:
	/// <summary>
	/// Constructor.
	/// </summary>
	/// <param name="tsr">TokenStreamRewriter containing the tokens, for abstraction.</param>
	/// <param name="fileName">Filename, will be added to hashes.</param>
	CustomPython3Listener(antlr4::TokenStreamRewriter *tsr, std::string fileName);

	~CustomPython3Listener();

	/// <summary>
	/// Entering function definition, record starting line and start looking for function name.
	/// </summary>
	virtual void enterFuncdef(Python3Parser::FuncdefContext *ctx) override;
	/// <summary>
	/// Exiting function definition, collect data found concerning function and save if applicable.
	/// </summary>
	virtual void exitFuncdef(Python3Parser::FuncdefContext *ctx) override;

	/// <summary>
	/// Entering function body, start abstracting if necessary.
	/// </summary>
	virtual void enterFuncbody(Python3Parser::FuncbodyContext *ctx) override;
	/// <summary>
	/// Exiting function body, save abstracted body.
	/// </summary>
	virtual void exitFuncbody(Python3Parser::FuncbodyContext *ctx) override;

	/// <summary>
	/// Variable, could be function name or variable in body, handle both.
	/// </summary>
	virtual void enterName(Python3Parser::NameContext *ctx) override;

	/// <summary>
	/// Function call, abstract appropriately.
	/// </summary>
	virtual void enterFunccallname(Python3Parser::FunccallnameContext *ctx) override;

	/// <summary>
	/// Entering expression statement, content inside can be ignored.
	/// </summary>
	virtual void enterExpr_stmt_single(Python3Parser::Expr_stmt_singleContext *ctx) override;
	/// <summary>
	/// Exiting expression statement, content can no longer be ignored.
	/// </summary>
	virtual void exitExpr_stmt_single(Python3Parser::Expr_stmt_singleContext *ctx) override;

	/// <summary>
	/// String inside expression statement can be removed, this is effectively a comment.
	/// </summary>
	virtual void enterString(Python3Parser::StringContext *ctx) override;

	// Found methods.
	std::vector<HashData>* output;

private:
	// Initial TokenStreamRewriter given to the listener.
	antlr4::TokenStreamRewriter *baseTsr;

	// Stack of TokenStreamRewriter for nested functions.
	std::stack<antlr4::TokenStreamRewriter *> tsrs;

	// Stack of method starting lines for nested functions.
	std::stack<size_t> starts;

	// Stack of method names and bodies for nested functions.
	std::stack<std::string> functionNames, functionBodies;

	// End line of function.
	size_t stop;

	std::string fileName = "filenametest";

	// For keeping track of status in parse tree.
	bool inFunction = false, inSingleStatement = false;
};
