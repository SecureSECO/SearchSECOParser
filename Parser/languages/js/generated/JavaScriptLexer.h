
#include "JavaScriptLexerBase.h"
#include "JavaScriptParserBase.h"
// Enable this macro definition when compiled to a static library
// #define ANTLR4CPP_STATIC

// TODO: add some include


// Generated from JavaScriptLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  JavaScriptLexer : public JavaScriptLexerBase {
public:
  enum {
    HashBangLine = 1, MultiLineComment = 2, SingleLineComment = 3, RegularExpressionLiteral = 4, 
    OpenBracket = 5, CloseBracket = 6, OpenParen = 7, CloseParen = 8, OpenBrace = 9, 
    CloseBrace = 10, SemiColon = 11, Comma = 12, Assign = 13, QuestionMark = 14, 
    Colon = 15, Ellipsis = 16, Dot = 17, PlusPlus = 18, MinusMinus = 19, 
    Plus = 20, Minus = 21, BitNot = 22, Not = 23, Multiply = 24, Divide = 25, 
    Modulus = 26, Power = 27, NullCoalesce = 28, Hashtag = 29, RightShiftArithmetic = 30, 
    LeftShiftArithmetic = 31, RightShiftLogical = 32, LessThan = 33, MoreThan = 34, 
    LessThanEquals = 35, GreaterThanEquals = 36, Equals_ = 37, NotEquals = 38, 
    IdentityEquals = 39, IdentityNotEquals = 40, BitAnd = 41, BitXOr = 42, 
    BitOr = 43, And = 44, Or = 45, MultiplyAssign = 46, DivideAssign = 47, 
    ModulusAssign = 48, PlusAssign = 49, MinusAssign = 50, LeftShiftArithmeticAssign = 51, 
    RightShiftArithmeticAssign = 52, RightShiftLogicalAssign = 53, BitAndAssign = 54, 
    BitXorAssign = 55, BitOrAssign = 56, PowerAssign = 57, ARROW = 58, NullLiteral = 59, 
    BooleanLiteral = 60, DecimalLiteral = 61, HexIntegerLiteral = 62, OctalIntegerLiteral = 63, 
    OctalIntegerLiteral2 = 64, BinaryIntegerLiteral = 65, BigHexIntegerLiteral = 66, 
    BigOctalIntegerLiteral = 67, BigBinaryIntegerLiteral = 68, BigDecimalIntegerLiteral = 69, 
    Break = 70, Do = 71, Instanceof = 72, Typeof = 73, Case = 74, Else = 75, 
    New = 76, Var = 77, Catch = 78, Finally = 79, Return = 80, Void = 81, 
    Continue = 82, For = 83, Switch = 84, While = 85, Debugger = 86, Function_ = 87, 
    This = 88, With = 89, Default = 90, If = 91, Throw = 92, Delete = 93, 
    In = 94, Try = 95, As = 96, From = 97, Class = 98, Enum = 99, Extends = 100, 
    Super = 101, Const = 102, Export = 103, Import = 104, Async = 105, Await = 106, 
    Implements = 107, StrictLet = 108, NonStrictLet = 109, Private = 110, 
    Public = 111, Interface = 112, Package = 113, Protected = 114, Static = 115, 
    Yield = 116, Identifier = 117, StringLiteral = 118, TemplateStringLiteral = 119, 
    WhiteSpaces = 120, LineTerminator = 121, HtmlComment = 122, CDataComment = 123, 
    UnexpectedCharacter = 124
  };

  enum {
    ERROR = 2
  };

  explicit JavaScriptLexer(antlr4::CharStream *input);
  ~JavaScriptLexer();
  void clearCache();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void MultiLineCommentAction(antlr4::RuleContext *context, size_t actionIndex);
  void SingleLineCommentAction(antlr4::RuleContext *context, size_t actionIndex);
  void OpenBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void CloseBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void StringLiteralAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool HashBangLineSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RegularExpressionLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OctalIntegerLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ImplementsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StrictLetSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NonStrictLetSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PrivateSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PublicSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool InterfaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PackageSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ProtectedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StaticSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool YieldSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

