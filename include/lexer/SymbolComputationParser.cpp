
// Generated from SymbolComputation.g4 by ANTLR 4.13.1


#include "SymbolComputationVisitor.h"

#include "SymbolComputationParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SymbolComputationParserStaticData final {
  SymbolComputationParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SymbolComputationParserStaticData(const SymbolComputationParserStaticData&) = delete;
  SymbolComputationParserStaticData(SymbolComputationParserStaticData&&) = delete;
  SymbolComputationParserStaticData& operator=(const SymbolComputationParserStaticData&) = delete;
  SymbolComputationParserStaticData& operator=(SymbolComputationParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag symbolcomputationParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SymbolComputationParserStaticData *symbolcomputationParserStaticData = nullptr;

void symbolcomputationParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (symbolcomputationParserStaticData != nullptr) {
    return;
  }
#else
  assert(symbolcomputationParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SymbolComputationParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "polynomialExpr", "mulExpr", "termComponent", 
      "coefficient", "parensPolynomialExpr", "number", "variable", "exponent"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'*'", "", "", "", "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "MUL_OP", "ADD_OP", "INT", "VAR", "EXP", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,9,74,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,1,1,1,1,1,3,1,27,8,1,1,2,1,2,1,2,5,
  	2,32,8,2,10,2,12,2,35,9,2,1,3,1,3,1,3,5,3,40,8,3,10,3,12,3,43,9,3,1,4,
  	1,4,1,4,3,4,48,8,4,1,4,1,4,3,4,52,8,4,1,4,1,4,3,4,56,8,4,1,5,3,5,59,8,
  	5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,0,0,10,0,2,
  	4,6,8,10,12,14,16,18,0,0,72,0,20,1,0,0,0,2,23,1,0,0,0,4,28,1,0,0,0,6,
  	36,1,0,0,0,8,55,1,0,0,0,10,58,1,0,0,0,12,62,1,0,0,0,14,66,1,0,0,0,16,
  	68,1,0,0,0,18,70,1,0,0,0,20,21,3,2,1,0,21,22,5,0,0,1,22,1,1,0,0,0,23,
  	26,3,4,2,0,24,25,5,1,0,0,25,27,3,4,2,0,26,24,1,0,0,0,26,27,1,0,0,0,27,
  	3,1,0,0,0,28,33,3,6,3,0,29,30,5,5,0,0,30,32,3,6,3,0,31,29,1,0,0,0,32,
  	35,1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,5,1,0,0,0,35,33,1,0,0,0,36,
  	41,3,8,4,0,37,38,5,4,0,0,38,40,3,8,4,0,39,37,1,0,0,0,40,43,1,0,0,0,41,
  	39,1,0,0,0,41,42,1,0,0,0,42,7,1,0,0,0,43,41,1,0,0,0,44,45,3,10,5,0,45,
  	47,3,16,8,0,46,48,3,18,9,0,47,46,1,0,0,0,47,48,1,0,0,0,48,56,1,0,0,0,
  	49,51,3,16,8,0,50,52,3,18,9,0,51,50,1,0,0,0,51,52,1,0,0,0,52,56,1,0,0,
  	0,53,56,3,10,5,0,54,56,3,12,6,0,55,44,1,0,0,0,55,49,1,0,0,0,55,53,1,0,
  	0,0,55,54,1,0,0,0,56,9,1,0,0,0,57,59,5,5,0,0,58,57,1,0,0,0,58,59,1,0,
  	0,0,59,60,1,0,0,0,60,61,3,14,7,0,61,11,1,0,0,0,62,63,5,2,0,0,63,64,3,
  	4,2,0,64,65,5,3,0,0,65,13,1,0,0,0,66,67,5,6,0,0,67,15,1,0,0,0,68,69,5,
  	7,0,0,69,17,1,0,0,0,70,71,5,8,0,0,71,72,5,6,0,0,72,19,1,0,0,0,7,26,33,
  	41,47,51,55,58
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  symbolcomputationParserStaticData = staticData.release();
}

}

SymbolComputationParser::SymbolComputationParser(TokenStream *input) : SymbolComputationParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SymbolComputationParser::SymbolComputationParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SymbolComputationParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *symbolcomputationParserStaticData->atn, symbolcomputationParserStaticData->decisionToDFA, symbolcomputationParserStaticData->sharedContextCache, options);
}

SymbolComputationParser::~SymbolComputationParser() {
  delete _interpreter;
}

const atn::ATN& SymbolComputationParser::getATN() const {
  return *symbolcomputationParserStaticData->atn;
}

std::string SymbolComputationParser::getGrammarFileName() const {
  return "SymbolComputation.g4";
}

const std::vector<std::string>& SymbolComputationParser::getRuleNames() const {
  return symbolcomputationParserStaticData->ruleNames;
}

const dfa::Vocabulary& SymbolComputationParser::getVocabulary() const {
  return symbolcomputationParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SymbolComputationParser::getSerializedATN() const {
  return symbolcomputationParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

SymbolComputationParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SymbolComputationParser::StatementContext* SymbolComputationParser::ProgramContext::statement() {
  return getRuleContext<SymbolComputationParser::StatementContext>(0);
}

tree::TerminalNode* SymbolComputationParser::ProgramContext::EOF() {
  return getToken(SymbolComputationParser::EOF, 0);
}


size_t SymbolComputationParser::ProgramContext::getRuleIndex() const {
  return SymbolComputationParser::RuleProgram;
}


std::any SymbolComputationParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::ProgramContext* SymbolComputationParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, SymbolComputationParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    statement();
    setState(21);
    match(SymbolComputationParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SymbolComputationParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SymbolComputationParser::PolynomialExprContext *> SymbolComputationParser::StatementContext::polynomialExpr() {
  return getRuleContexts<SymbolComputationParser::PolynomialExprContext>();
}

SymbolComputationParser::PolynomialExprContext* SymbolComputationParser::StatementContext::polynomialExpr(size_t i) {
  return getRuleContext<SymbolComputationParser::PolynomialExprContext>(i);
}


size_t SymbolComputationParser::StatementContext::getRuleIndex() const {
  return SymbolComputationParser::RuleStatement;
}


std::any SymbolComputationParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::StatementContext* SymbolComputationParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SymbolComputationParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23);
    polynomialExpr();
    setState(26);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SymbolComputationParser::T__0) {
      setState(24);
      match(SymbolComputationParser::T__0);
      setState(25);
      polynomialExpr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolynomialExprContext ------------------------------------------------------------------

SymbolComputationParser::PolynomialExprContext::PolynomialExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SymbolComputationParser::MulExprContext *> SymbolComputationParser::PolynomialExprContext::mulExpr() {
  return getRuleContexts<SymbolComputationParser::MulExprContext>();
}

SymbolComputationParser::MulExprContext* SymbolComputationParser::PolynomialExprContext::mulExpr(size_t i) {
  return getRuleContext<SymbolComputationParser::MulExprContext>(i);
}

std::vector<tree::TerminalNode *> SymbolComputationParser::PolynomialExprContext::ADD_OP() {
  return getTokens(SymbolComputationParser::ADD_OP);
}

tree::TerminalNode* SymbolComputationParser::PolynomialExprContext::ADD_OP(size_t i) {
  return getToken(SymbolComputationParser::ADD_OP, i);
}


size_t SymbolComputationParser::PolynomialExprContext::getRuleIndex() const {
  return SymbolComputationParser::RulePolynomialExpr;
}


std::any SymbolComputationParser::PolynomialExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitPolynomialExpr(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::PolynomialExprContext* SymbolComputationParser::polynomialExpr() {
  PolynomialExprContext *_localctx = _tracker.createInstance<PolynomialExprContext>(_ctx, getState());
  enterRule(_localctx, 4, SymbolComputationParser::RulePolynomialExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    mulExpr();
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SymbolComputationParser::ADD_OP) {
      setState(29);
      match(SymbolComputationParser::ADD_OP);
      setState(30);
      mulExpr();
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExprContext ------------------------------------------------------------------

SymbolComputationParser::MulExprContext::MulExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SymbolComputationParser::TermComponentContext *> SymbolComputationParser::MulExprContext::termComponent() {
  return getRuleContexts<SymbolComputationParser::TermComponentContext>();
}

SymbolComputationParser::TermComponentContext* SymbolComputationParser::MulExprContext::termComponent(size_t i) {
  return getRuleContext<SymbolComputationParser::TermComponentContext>(i);
}

std::vector<tree::TerminalNode *> SymbolComputationParser::MulExprContext::MUL_OP() {
  return getTokens(SymbolComputationParser::MUL_OP);
}

tree::TerminalNode* SymbolComputationParser::MulExprContext::MUL_OP(size_t i) {
  return getToken(SymbolComputationParser::MUL_OP, i);
}


size_t SymbolComputationParser::MulExprContext::getRuleIndex() const {
  return SymbolComputationParser::RuleMulExpr;
}


std::any SymbolComputationParser::MulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitMulExpr(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::MulExprContext* SymbolComputationParser::mulExpr() {
  MulExprContext *_localctx = _tracker.createInstance<MulExprContext>(_ctx, getState());
  enterRule(_localctx, 6, SymbolComputationParser::RuleMulExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    termComponent();
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SymbolComputationParser::MUL_OP) {
      setState(37);
      match(SymbolComputationParser::MUL_OP);
      setState(38);
      termComponent();
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermComponentContext ------------------------------------------------------------------

SymbolComputationParser::TermComponentContext::TermComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SymbolComputationParser::CoefficientContext* SymbolComputationParser::TermComponentContext::coefficient() {
  return getRuleContext<SymbolComputationParser::CoefficientContext>(0);
}

SymbolComputationParser::VariableContext* SymbolComputationParser::TermComponentContext::variable() {
  return getRuleContext<SymbolComputationParser::VariableContext>(0);
}

SymbolComputationParser::ExponentContext* SymbolComputationParser::TermComponentContext::exponent() {
  return getRuleContext<SymbolComputationParser::ExponentContext>(0);
}

SymbolComputationParser::ParensPolynomialExprContext* SymbolComputationParser::TermComponentContext::parensPolynomialExpr() {
  return getRuleContext<SymbolComputationParser::ParensPolynomialExprContext>(0);
}


size_t SymbolComputationParser::TermComponentContext::getRuleIndex() const {
  return SymbolComputationParser::RuleTermComponent;
}


std::any SymbolComputationParser::TermComponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitTermComponent(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::TermComponentContext* SymbolComputationParser::termComponent() {
  TermComponentContext *_localctx = _tracker.createInstance<TermComponentContext>(_ctx, getState());
  enterRule(_localctx, 8, SymbolComputationParser::RuleTermComponent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      coefficient();
      setState(45);
      variable();
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SymbolComputationParser::EXP) {
        setState(46);
        exponent();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      variable();
      setState(51);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SymbolComputationParser::EXP) {
        setState(50);
        exponent();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(53);
      coefficient();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(54);
      parensPolynomialExpr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CoefficientContext ------------------------------------------------------------------

SymbolComputationParser::CoefficientContext::CoefficientContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SymbolComputationParser::NumberContext* SymbolComputationParser::CoefficientContext::number() {
  return getRuleContext<SymbolComputationParser::NumberContext>(0);
}

tree::TerminalNode* SymbolComputationParser::CoefficientContext::ADD_OP() {
  return getToken(SymbolComputationParser::ADD_OP, 0);
}


size_t SymbolComputationParser::CoefficientContext::getRuleIndex() const {
  return SymbolComputationParser::RuleCoefficient;
}


std::any SymbolComputationParser::CoefficientContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitCoefficient(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::CoefficientContext* SymbolComputationParser::coefficient() {
  CoefficientContext *_localctx = _tracker.createInstance<CoefficientContext>(_ctx, getState());
  enterRule(_localctx, 10, SymbolComputationParser::RuleCoefficient);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SymbolComputationParser::ADD_OP) {
      setState(57);
      match(SymbolComputationParser::ADD_OP);
    }
    setState(60);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParensPolynomialExprContext ------------------------------------------------------------------

SymbolComputationParser::ParensPolynomialExprContext::ParensPolynomialExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SymbolComputationParser::PolynomialExprContext* SymbolComputationParser::ParensPolynomialExprContext::polynomialExpr() {
  return getRuleContext<SymbolComputationParser::PolynomialExprContext>(0);
}


size_t SymbolComputationParser::ParensPolynomialExprContext::getRuleIndex() const {
  return SymbolComputationParser::RuleParensPolynomialExpr;
}


std::any SymbolComputationParser::ParensPolynomialExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitParensPolynomialExpr(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::ParensPolynomialExprContext* SymbolComputationParser::parensPolynomialExpr() {
  ParensPolynomialExprContext *_localctx = _tracker.createInstance<ParensPolynomialExprContext>(_ctx, getState());
  enterRule(_localctx, 12, SymbolComputationParser::RuleParensPolynomialExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(SymbolComputationParser::T__1);
    setState(63);
    polynomialExpr();
    setState(64);
    match(SymbolComputationParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SymbolComputationParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SymbolComputationParser::NumberContext::INT() {
  return getToken(SymbolComputationParser::INT, 0);
}


size_t SymbolComputationParser::NumberContext::getRuleIndex() const {
  return SymbolComputationParser::RuleNumber;
}


std::any SymbolComputationParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::NumberContext* SymbolComputationParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 14, SymbolComputationParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(SymbolComputationParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

SymbolComputationParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SymbolComputationParser::VariableContext::VAR() {
  return getToken(SymbolComputationParser::VAR, 0);
}


size_t SymbolComputationParser::VariableContext::getRuleIndex() const {
  return SymbolComputationParser::RuleVariable;
}


std::any SymbolComputationParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::VariableContext* SymbolComputationParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 16, SymbolComputationParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(SymbolComputationParser::VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExponentContext ------------------------------------------------------------------

SymbolComputationParser::ExponentContext::ExponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SymbolComputationParser::ExponentContext::EXP() {
  return getToken(SymbolComputationParser::EXP, 0);
}

tree::TerminalNode* SymbolComputationParser::ExponentContext::INT() {
  return getToken(SymbolComputationParser::INT, 0);
}


size_t SymbolComputationParser::ExponentContext::getRuleIndex() const {
  return SymbolComputationParser::RuleExponent;
}


std::any SymbolComputationParser::ExponentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SymbolComputationVisitor*>(visitor))
    return parserVisitor->visitExponent(this);
  else
    return visitor->visitChildren(this);
}

SymbolComputationParser::ExponentContext* SymbolComputationParser::exponent() {
  ExponentContext *_localctx = _tracker.createInstance<ExponentContext>(_ctx, getState());
  enterRule(_localctx, 18, SymbolComputationParser::RuleExponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(SymbolComputationParser::EXP);
    setState(71);
    match(SymbolComputationParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SymbolComputationParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  symbolcomputationParserInitialize();
#else
  ::antlr4::internal::call_once(symbolcomputationParserOnceFlag, symbolcomputationParserInitialize);
#endif
}
