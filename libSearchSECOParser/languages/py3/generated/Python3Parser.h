
// Generated from Python3.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  Python3Parser : public antlr4::Parser {
public:
  enum {
    STRING = 1, NUMBER = 2, INTEGER = 3, DEF = 4, RETURN = 5, RAISE = 6, 
    FROM = 7, IMPORT = 8, AS = 9, GLOBAL = 10, NONLOCAL = 11, ASSERT = 12, 
    IF = 13, ELIF = 14, ELSE = 15, WHILE = 16, FOR = 17, IN = 18, TRY = 19, 
    FINALLY = 20, WITH = 21, EXCEPT = 22, LAMBDA = 23, OR = 24, AND = 25, 
    NOT = 26, IS = 27, NONE = 28, TRUE = 29, FALSE = 30, CLASS = 31, YIELD = 32, 
    DEL = 33, PASS = 34, CONTINUE = 35, BREAK = 36, ASYNC = 37, AWAIT = 38, 
    NEWLINE = 39, NAME = 40, STRING_LITERAL = 41, BYTES_LITERAL = 42, DECIMAL_INTEGER = 43, 
    OCT_INTEGER = 44, HEX_INTEGER = 45, BIN_INTEGER = 46, FLOAT_NUMBER = 47, 
    IMAG_NUMBER = 48, DOT = 49, ELLIPSIS = 50, STAR = 51, OPEN_PAREN = 52, 
    CLOSE_PAREN = 53, COMMA = 54, COLON = 55, SEMI_COLON = 56, POWER = 57, 
    ASSIGN = 58, OPEN_BRACK = 59, CLOSE_BRACK = 60, OR_OP = 61, XOR = 62, 
    AND_OP = 63, LEFT_SHIFT = 64, RIGHT_SHIFT = 65, ADD = 66, MINUS = 67, 
    DIV = 68, MOD = 69, IDIV = 70, NOT_OP = 71, OPEN_BRACE = 72, CLOSE_BRACE = 73, 
    LESS_THAN = 74, GREATER_THAN = 75, EQUALS = 76, GT_EQ = 77, LT_EQ = 78, 
    NOT_EQ_1 = 79, NOT_EQ_2 = 80, AT = 81, ARROW = 82, ADD_ASSIGN = 83, 
    SUB_ASSIGN = 84, MULT_ASSIGN = 85, AT_ASSIGN = 86, DIV_ASSIGN = 87, 
    MOD_ASSIGN = 88, AND_ASSIGN = 89, OR_ASSIGN = 90, XOR_ASSIGN = 91, LEFT_SHIFT_ASSIGN = 92, 
    RIGHT_SHIFT_ASSIGN = 93, POWER_ASSIGN = 94, IDIV_ASSIGN = 95, SKIP_ = 96, 
    UNKNOWN_CHAR = 97, INDENT = 98, DEDENT = 99
  };

  enum {
    RuleSingle_input = 0, RuleFile_input = 1, RuleEval_input = 2, RuleDecorator = 3, 
    RuleDecorators = 4, RuleDecorated = 5, RuleAsync_funcdef = 6, RuleFuncdef = 7, 
    RuleFuncbody = 8, RuleParameters = 9, RuleTypedargslist = 10, RuleTfpdef = 11, 
    RuleVarargslist = 12, RuleVfpdef = 13, RuleStmt = 14, RuleSimple_stmt = 15, 
    RuleSmall_stmt = 16, RuleExpr_stmt = 17, RuleExpr_stmt_single = 18, 
    RuleExpr_stmt_multi = 19, RuleAnnassign = 20, RuleTestlist_star_expr = 21, 
    RuleAugassign = 22, RuleDel_stmt = 23, RulePass_stmt = 24, RuleFlow_stmt = 25, 
    RuleBreak_stmt = 26, RuleContinue_stmt = 27, RuleReturn_stmt = 28, RuleYield_stmt = 29, 
    RuleRaise_stmt = 30, RuleImport_stmt = 31, RuleImport_name = 32, RuleImport_from = 33, 
    RuleImport_as_name = 34, RuleDotted_as_name = 35, RuleImport_as_names = 36, 
    RuleDotted_as_names = 37, RuleDotted_name = 38, RuleGlobal_stmt = 39, 
    RuleNonlocal_stmt = 40, RuleAssert_stmt = 41, RuleCompound_stmt = 42, 
    RuleAsync_stmt = 43, RuleIf_stmt = 44, RuleWhile_stmt = 45, RuleFor_stmt = 46, 
    RuleTry_stmt = 47, RuleWith_stmt = 48, RuleWith_item = 49, RuleExcept_clause = 50, 
    RuleSuite = 51, RuleTest = 52, RuleTest_nocond = 53, RuleLambdef = 54, 
    RuleLambdef_nocond = 55, RuleOr_test = 56, RuleAnd_test = 57, RuleNot_test = 58, 
    RuleComparison = 59, RuleComp_op = 60, RuleStar_expr = 61, RuleExpr = 62, 
    RuleXor_expr = 63, RuleAnd_expr = 64, RuleShift_expr = 65, RuleArith_expr = 66, 
    RuleTerm = 67, RuleFactor = 68, RulePower = 69, RuleAtom_expr = 70, 
    RuleFunccall = 71, RuleAtom = 72, RuleString = 73, RuleName = 74, RuleFunccallname = 75, 
    RuleTestlist_comp = 76, RuleTrailer = 77, RuleSubscriptlist = 78, RuleSubscript = 79, 
    RuleSliceop = 80, RuleExprlist = 81, RuleTestlist = 82, RuleDictorsetmaker = 83, 
    RuleClassdef = 84, RuleArglist = 85, RuleArgument = 86, RuleComp_iter = 87, 
    RuleComp_for = 88, RuleComp_if = 89, RuleEncoding_decl = 90, RuleYield_expr = 91, 
    RuleYield_arg = 92
  };

  explicit Python3Parser(antlr4::TokenStream *input);
  ~Python3Parser();
  void clearCache();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Single_inputContext;
  class File_inputContext;
  class Eval_inputContext;
  class DecoratorContext;
  class DecoratorsContext;
  class DecoratedContext;
  class Async_funcdefContext;
  class FuncdefContext;
  class FuncbodyContext;
  class ParametersContext;
  class TypedargslistContext;
  class TfpdefContext;
  class VarargslistContext;
  class VfpdefContext;
  class StmtContext;
  class Simple_stmtContext;
  class Small_stmtContext;
  class Expr_stmtContext;
  class Expr_stmt_singleContext;
  class Expr_stmt_multiContext;
  class AnnassignContext;
  class Testlist_star_exprContext;
  class AugassignContext;
  class Del_stmtContext;
  class Pass_stmtContext;
  class Flow_stmtContext;
  class Break_stmtContext;
  class Continue_stmtContext;
  class Return_stmtContext;
  class Yield_stmtContext;
  class Raise_stmtContext;
  class Import_stmtContext;
  class Import_nameContext;
  class Import_fromContext;
  class Import_as_nameContext;
  class Dotted_as_nameContext;
  class Import_as_namesContext;
  class Dotted_as_namesContext;
  class Dotted_nameContext;
  class Global_stmtContext;
  class Nonlocal_stmtContext;
  class Assert_stmtContext;
  class Compound_stmtContext;
  class Async_stmtContext;
  class If_stmtContext;
  class While_stmtContext;
  class For_stmtContext;
  class Try_stmtContext;
  class With_stmtContext;
  class With_itemContext;
  class Except_clauseContext;
  class SuiteContext;
  class TestContext;
  class Test_nocondContext;
  class LambdefContext;
  class Lambdef_nocondContext;
  class Or_testContext;
  class And_testContext;
  class Not_testContext;
  class ComparisonContext;
  class Comp_opContext;
  class Star_exprContext;
  class ExprContext;
  class Xor_exprContext;
  class And_exprContext;
  class Shift_exprContext;
  class Arith_exprContext;
  class TermContext;
  class FactorContext;
  class PowerContext;
  class Atom_exprContext;
  class FunccallContext;
  class AtomContext;
  class StringContext;
  class NameContext;
  class FunccallnameContext;
  class Testlist_compContext;
  class TrailerContext;
  class SubscriptlistContext;
  class SubscriptContext;
  class SliceopContext;
  class ExprlistContext;
  class TestlistContext;
  class DictorsetmakerContext;
  class ClassdefContext;
  class ArglistContext;
  class ArgumentContext;
  class Comp_iterContext;
  class Comp_forContext;
  class Comp_ifContext;
  class Encoding_declContext;
  class Yield_exprContext;
  class Yield_argContext; 

  class  Single_inputContext : public antlr4::ParserRuleContext {
  public:
    Single_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEWLINE();
    Simple_stmtContext *simple_stmt();
    Compound_stmtContext *compound_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_inputContext* single_input();

  class  File_inputContext : public antlr4::ParserRuleContext {
  public:
    File_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_inputContext* file_input();

  class  Eval_inputContext : public antlr4::ParserRuleContext {
  public:
    Eval_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TestlistContext *testlist();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Eval_inputContext* eval_input();

  class  DecoratorContext : public antlr4::ParserRuleContext {
  public:
    DecoratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    Dotted_nameContext *dotted_name();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ArglistContext *arglist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorContext* decorator();

  class  DecoratorsContext : public antlr4::ParserRuleContext {
  public:
    DecoratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecoratorContext *> decorator();
    DecoratorContext* decorator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorsContext* decorators();

  class  DecoratedContext : public antlr4::ParserRuleContext {
  public:
    DecoratedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecoratorsContext *decorators();
    ClassdefContext *classdef();
    FuncdefContext *funcdef();
    Async_funcdefContext *async_funcdef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratedContext* decorated();

  class  Async_funcdefContext : public antlr4::ParserRuleContext {
  public:
    Async_funcdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASYNC();
    FuncdefContext *funcdef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Async_funcdefContext* async_funcdef();

  class  FuncdefContext : public antlr4::ParserRuleContext {
  public:
    FuncdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    NameContext *name();
    ParametersContext *parameters();
    antlr4::tree::TerminalNode *COLON();
    FuncbodyContext *funcbody();
    antlr4::tree::TerminalNode *ARROW();
    TestContext *test();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncdefContext* funcdef();

  class  FuncbodyContext : public antlr4::ParserRuleContext {
  public:
    FuncbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SuiteContext *suite();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncbodyContext* funcbody();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    TypedargslistContext *typedargslist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

  class  TypedargslistContext : public antlr4::ParserRuleContext {
  public:
    TypedargslistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TfpdefContext *> tfpdef();
    TfpdefContext* tfpdef(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *POWER();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedargslistContext* typedargslist();

  class  TfpdefContext : public antlr4::ParserRuleContext {
  public:
    TfpdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *COLON();
    TestContext *test();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TfpdefContext* tfpdef();

  class  VarargslistContext : public antlr4::ParserRuleContext {
  public:
    VarargslistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VfpdefContext *> vfpdef();
    VfpdefContext* vfpdef(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *POWER();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarargslistContext* varargslist();

  class  VfpdefContext : public antlr4::ParserRuleContext {
  public:
    VfpdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VfpdefContext* vfpdef();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_stmtContext *simple_stmt();
    Compound_stmtContext *compound_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Simple_stmtContext : public antlr4::ParserRuleContext {
  public:
    Simple_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Small_stmtContext *> small_stmt();
    Small_stmtContext* small_stmt(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<antlr4::tree::TerminalNode *> SEMI_COLON();
    antlr4::tree::TerminalNode* SEMI_COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_stmtContext* simple_stmt();

  class  Small_stmtContext : public antlr4::ParserRuleContext {
  public:
    Small_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_stmtContext *expr_stmt();
    Del_stmtContext *del_stmt();
    Pass_stmtContext *pass_stmt();
    Flow_stmtContext *flow_stmt();
    Import_stmtContext *import_stmt();
    Global_stmtContext *global_stmt();
    Nonlocal_stmtContext *nonlocal_stmt();
    Assert_stmtContext *assert_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Small_stmtContext* small_stmt();

  class  Expr_stmtContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_stmt_singleContext *expr_stmt_single();
    Expr_stmt_multiContext *expr_stmt_multi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_stmtContext* expr_stmt();

  class  Expr_stmt_singleContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmt_singleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Testlist_star_exprContext *testlist_star_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_stmt_singleContext* expr_stmt_single();

  class  Expr_stmt_multiContext : public antlr4::ParserRuleContext {
  public:
    Expr_stmt_multiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Testlist_star_exprContext *> testlist_star_expr();
    Testlist_star_exprContext* testlist_star_expr(size_t i);
    AnnassignContext *annassign();
    AugassignContext *augassign();
    std::vector<Yield_exprContext *> yield_expr();
    Yield_exprContext* yield_expr(size_t i);
    TestlistContext *testlist();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_stmt_multiContext* expr_stmt_multi();

  class  AnnassignContext : public antlr4::ParserRuleContext {
  public:
    AnnassignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnassignContext* annassign();

  class  Testlist_star_exprContext : public antlr4::ParserRuleContext {
  public:
    Testlist_star_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<Star_exprContext *> star_expr();
    Star_exprContext* star_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Testlist_star_exprContext* testlist_star_expr();

  class  AugassignContext : public antlr4::ParserRuleContext {
  public:
    AugassignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *MULT_ASSIGN();
    antlr4::tree::TerminalNode *AT_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *AND_ASSIGN();
    antlr4::tree::TerminalNode *OR_ASSIGN();
    antlr4::tree::TerminalNode *XOR_ASSIGN();
    antlr4::tree::TerminalNode *LEFT_SHIFT_ASSIGN();
    antlr4::tree::TerminalNode *RIGHT_SHIFT_ASSIGN();
    antlr4::tree::TerminalNode *POWER_ASSIGN();
    antlr4::tree::TerminalNode *IDIV_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AugassignContext* augassign();

  class  Del_stmtContext : public antlr4::ParserRuleContext {
  public:
    Del_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEL();
    ExprlistContext *exprlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Del_stmtContext* del_stmt();

  class  Pass_stmtContext : public antlr4::ParserRuleContext {
  public:
    Pass_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_stmtContext* pass_stmt();

  class  Flow_stmtContext : public antlr4::ParserRuleContext {
  public:
    Flow_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Break_stmtContext *break_stmt();
    Continue_stmtContext *continue_stmt();
    Return_stmtContext *return_stmt();
    Raise_stmtContext *raise_stmt();
    Yield_stmtContext *yield_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flow_stmtContext* flow_stmt();

  class  Break_stmtContext : public antlr4::ParserRuleContext {
  public:
    Break_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_stmtContext* break_stmt();

  class  Continue_stmtContext : public antlr4::ParserRuleContext {
  public:
    Continue_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continue_stmtContext* continue_stmt();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    TestlistContext *testlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  Yield_stmtContext : public antlr4::ParserRuleContext {
  public:
    Yield_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Yield_exprContext *yield_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Yield_stmtContext* yield_stmt();

  class  Raise_stmtContext : public antlr4::ParserRuleContext {
  public:
    Raise_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAISE();
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    antlr4::tree::TerminalNode *FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Raise_stmtContext* raise_stmt();

  class  Import_stmtContext : public antlr4::ParserRuleContext {
  public:
    Import_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Import_nameContext *import_name();
    Import_fromContext *import_from();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_stmtContext* import_stmt();

  class  Import_nameContext : public antlr4::ParserRuleContext {
  public:
    Import_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    Dotted_as_namesContext *dotted_as_names();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_nameContext* import_name();

  class  Import_fromContext : public antlr4::ParserRuleContext {
  public:
    Import_fromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IMPORT();
    Dotted_nameContext *dotted_name();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    Import_as_namesContext *import_as_names();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELLIPSIS();
    antlr4::tree::TerminalNode* ELLIPSIS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_fromContext* import_from();

  class  Import_as_nameContext : public antlr4::ParserRuleContext {
  public:
    Import_as_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_as_nameContext* import_as_name();

  class  Dotted_as_nameContext : public antlr4::ParserRuleContext {
  public:
    Dotted_as_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dotted_nameContext *dotted_name();
    antlr4::tree::TerminalNode *AS();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dotted_as_nameContext* dotted_as_name();

  class  Import_as_namesContext : public antlr4::ParserRuleContext {
  public:
    Import_as_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Import_as_nameContext *> import_as_name();
    Import_as_nameContext* import_as_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_as_namesContext* import_as_names();

  class  Dotted_as_namesContext : public antlr4::ParserRuleContext {
  public:
    Dotted_as_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dotted_as_nameContext *> dotted_as_name();
    Dotted_as_nameContext* dotted_as_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dotted_as_namesContext* dotted_as_names();

  class  Dotted_nameContext : public antlr4::ParserRuleContext {
  public:
    Dotted_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dotted_nameContext* dotted_name();

  class  Global_stmtContext : public antlr4::ParserRuleContext {
  public:
    Global_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_stmtContext* global_stmt();

  class  Nonlocal_stmtContext : public antlr4::ParserRuleContext {
  public:
    Nonlocal_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NONLOCAL();
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonlocal_stmtContext* nonlocal_stmt();

  class  Assert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assert_stmtContext* assert_stmt();

  class  Compound_stmtContext : public antlr4::ParserRuleContext {
  public:
    Compound_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_stmtContext *if_stmt();
    While_stmtContext *while_stmt();
    For_stmtContext *for_stmt();
    Try_stmtContext *try_stmt();
    With_stmtContext *with_stmt();
    FuncdefContext *funcdef();
    ClassdefContext *classdef();
    DecoratedContext *decorated();
    Async_stmtContext *async_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_stmtContext* compound_stmt();

  class  Async_stmtContext : public antlr4::ParserRuleContext {
  public:
    Async_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASYNC();
    FuncdefContext *funcdef();
    With_stmtContext *with_stmt();
    For_stmtContext *for_stmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Async_stmtContext* async_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<SuiteContext *> suite();
    SuiteContext* suite(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELIF();
    antlr4::tree::TerminalNode* ELIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    TestContext *test();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<SuiteContext *> suite();
    SuiteContext* suite(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  For_stmtContext : public antlr4::ParserRuleContext {
  public:
    For_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    ExprlistContext *exprlist();
    antlr4::tree::TerminalNode *IN();
    TestlistContext *testlist();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<SuiteContext *> suite();
    SuiteContext* suite(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_stmtContext* for_stmt();

  class  Try_stmtContext : public antlr4::ParserRuleContext {
  public:
    Try_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<SuiteContext *> suite();
    SuiteContext* suite(size_t i);
    antlr4::tree::TerminalNode *FINALLY();
    std::vector<Except_clauseContext *> except_clause();
    Except_clauseContext* except_clause(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Try_stmtContext* try_stmt();

  class  With_stmtContext : public antlr4::ParserRuleContext {
  public:
    With_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<With_itemContext *> with_item();
    With_itemContext* with_item(size_t i);
    antlr4::tree::TerminalNode *COLON();
    SuiteContext *suite();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_stmtContext* with_stmt();

  class  With_itemContext : public antlr4::ParserRuleContext {
  public:
    With_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TestContext *test();
    antlr4::tree::TerminalNode *AS();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_itemContext* with_item();

  class  Except_clauseContext : public antlr4::ParserRuleContext {
  public:
    Except_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPT();
    TestContext *test();
    antlr4::tree::TerminalNode *AS();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Except_clauseContext* except_clause();

  class  SuiteContext : public antlr4::ParserRuleContext {
  public:
    SuiteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_stmtContext *simple_stmt();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *DEDENT();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SuiteContext* suite();

  class  TestContext : public antlr4::ParserRuleContext {
  public:
    TestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Or_testContext *> or_test();
    Or_testContext* or_test(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ELSE();
    TestContext *test();
    LambdefContext *lambdef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TestContext* test();

  class  Test_nocondContext : public antlr4::ParserRuleContext {
  public:
    Test_nocondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_testContext *or_test();
    Lambdef_nocondContext *lambdef_nocond();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Test_nocondContext* test_nocond();

  class  LambdefContext : public antlr4::ParserRuleContext {
  public:
    LambdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LAMBDA();
    antlr4::tree::TerminalNode *COLON();
    TestContext *test();
    VarargslistContext *varargslist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdefContext* lambdef();

  class  Lambdef_nocondContext : public antlr4::ParserRuleContext {
  public:
    Lambdef_nocondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LAMBDA();
    antlr4::tree::TerminalNode *COLON();
    Test_nocondContext *test_nocond();
    VarargslistContext *varargslist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lambdef_nocondContext* lambdef_nocond();

  class  Or_testContext : public antlr4::ParserRuleContext {
  public:
    Or_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_testContext *> and_test();
    And_testContext* and_test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_testContext* or_test();

  class  And_testContext : public antlr4::ParserRuleContext {
  public:
    And_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Not_testContext *> not_test();
    Not_testContext* not_test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_testContext* and_test();

  class  Not_testContext : public antlr4::ParserRuleContext {
  public:
    Not_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    Not_testContext *not_test();
    ComparisonContext *comparison();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not_testContext* not_test();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<Comp_opContext *> comp_op();
    Comp_opContext* comp_op(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonContext* comparison();

  class  Comp_opContext : public antlr4::ParserRuleContext {
  public:
    Comp_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *GT_EQ();
    antlr4::tree::TerminalNode *LT_EQ();
    antlr4::tree::TerminalNode *NOT_EQ_1();
    antlr4::tree::TerminalNode *NOT_EQ_2();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *IS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comp_opContext* comp_op();

  class  Star_exprContext : public antlr4::ParserRuleContext {
  public:
    Star_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Star_exprContext* star_expr();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Xor_exprContext *> xor_expr();
    Xor_exprContext* xor_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR_OP();
    antlr4::tree::TerminalNode* OR_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  Xor_exprContext : public antlr4::ParserRuleContext {
  public:
    Xor_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_exprContext *> and_expr();
    And_exprContext* and_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> XOR();
    antlr4::tree::TerminalNode* XOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xor_exprContext* xor_expr();

  class  And_exprContext : public antlr4::ParserRuleContext {
  public:
    And_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Shift_exprContext *> shift_expr();
    Shift_exprContext* shift_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND_OP();
    antlr4::tree::TerminalNode* AND_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_exprContext* and_expr();

  class  Shift_exprContext : public antlr4::ParserRuleContext {
  public:
    Shift_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Arith_exprContext *> arith_expr();
    Arith_exprContext* arith_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT_SHIFT();
    antlr4::tree::TerminalNode* LEFT_SHIFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_SHIFT();
    antlr4::tree::TerminalNode* RIGHT_SHIFT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shift_exprContext* shift_expr();

  class  Arith_exprContext : public antlr4::ParserRuleContext {
  public:
    Arith_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arith_exprContext* arith_expr();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDIV();
    antlr4::tree::TerminalNode* IDIV(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT_OP();
    PowerContext *power();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  PowerContext : public antlr4::ParserRuleContext {
  public:
    PowerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atom_exprContext *atom_expr();
    antlr4::tree::TerminalNode *POWER();
    FactorContext *factor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PowerContext* power();

  class  Atom_exprContext : public antlr4::ParserRuleContext {
  public:
    Atom_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunccallContext *funccall();
    AtomContext *atom();
    antlr4::tree::TerminalNode *AWAIT();
    std::vector<TrailerContext *> trailer();
    TrailerContext* trailer(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atom_exprContext* atom_expr();

  class  FunccallContext : public antlr4::ParserRuleContext {
  public:
    FunccallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunccallnameContext *funccallname();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ArglistContext *arglist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunccallContext* funccall();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *OPEN_BRACK();
    antlr4::tree::TerminalNode *CLOSE_BRACK();
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    NameContext *name();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ELLIPSIS();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    Yield_exprContext *yield_expr();
    Testlist_compContext *testlist_comp();
    DictorsetmakerContext *dictorsetmaker();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  FunccallnameContext : public antlr4::ParserRuleContext {
  public:
    FunccallnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunccallnameContext* funccallname();

  class  Testlist_compContext : public antlr4::ParserRuleContext {
  public:
    Testlist_compContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<Star_exprContext *> star_expr();
    Star_exprContext* star_expr(size_t i);
    Comp_forContext *comp_for();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Testlist_compContext* testlist_comp();

  class  TrailerContext : public antlr4::ParserRuleContext {
  public:
    TrailerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    FunccallContext *funccall();
    antlr4::tree::TerminalNode *OPEN_BRACK();
    SubscriptlistContext *subscriptlist();
    antlr4::tree::TerminalNode *CLOSE_BRACK();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailerContext* trailer();

  class  SubscriptlistContext : public antlr4::ParserRuleContext {
  public:
    SubscriptlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubscriptContext *> subscript();
    SubscriptContext* subscript(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubscriptlistContext* subscriptlist();

  class  SubscriptContext : public antlr4::ParserRuleContext {
  public:
    SubscriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    antlr4::tree::TerminalNode *COLON();
    SliceopContext *sliceop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubscriptContext* subscript();

  class  SliceopContext : public antlr4::ParserRuleContext {
  public:
    SliceopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    TestContext *test();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SliceopContext* sliceop();

  class  ExprlistContext : public antlr4::ParserRuleContext {
  public:
    ExprlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<Star_exprContext *> star_expr();
    Star_exprContext* star_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprlistContext* exprlist();

  class  TestlistContext : public antlr4::ParserRuleContext {
  public:
    TestlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TestlistContext* testlist();

  class  DictorsetmakerContext : public antlr4::ParserRuleContext {
  public:
    DictorsetmakerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POWER();
    antlr4::tree::TerminalNode* POWER(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Comp_forContext *comp_for();
    std::vector<Star_exprContext *> star_expr();
    Star_exprContext* star_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DictorsetmakerContext* dictorsetmaker();

  class  ClassdefContext : public antlr4::ParserRuleContext {
  public:
    ClassdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    NameContext *name();
    antlr4::tree::TerminalNode *COLON();
    SuiteContext *suite();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ArglistContext *arglist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassdefContext* classdef();

  class  ArglistContext : public antlr4::ParserRuleContext {
  public:
    ArglistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArglistContext* arglist();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *STAR();
    Comp_forContext *comp_for();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  Comp_iterContext : public antlr4::ParserRuleContext {
  public:
    Comp_iterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comp_forContext *comp_for();
    Comp_ifContext *comp_if();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comp_iterContext* comp_iter();

  class  Comp_forContext : public antlr4::ParserRuleContext {
  public:
    Comp_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    ExprlistContext *exprlist();
    antlr4::tree::TerminalNode *IN();
    Or_testContext *or_test();
    antlr4::tree::TerminalNode *ASYNC();
    Comp_iterContext *comp_iter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comp_forContext* comp_for();

  class  Comp_ifContext : public antlr4::ParserRuleContext {
  public:
    Comp_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    Test_nocondContext *test_nocond();
    Comp_iterContext *comp_iter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comp_ifContext* comp_if();

  class  Encoding_declContext : public antlr4::ParserRuleContext {
  public:
    Encoding_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Encoding_declContext* encoding_decl();

  class  Yield_exprContext : public antlr4::ParserRuleContext {
  public:
    Yield_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YIELD();
    Yield_argContext *yield_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Yield_exprContext* yield_expr();

  class  Yield_argContext : public antlr4::ParserRuleContext {
  public:
    Yield_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TestContext *test();
    TestlistContext *testlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Yield_argContext* yield_arg();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

