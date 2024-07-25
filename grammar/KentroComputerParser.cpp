
// Generated from KentroComputer.g4 by ANTLR 4.13.1


#include "KentroComputerVisitor.h"

#include "KentroComputerParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct KentroComputerParserStaticData final {
  KentroComputerParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KentroComputerParserStaticData(const KentroComputerParserStaticData&) = delete;
  KentroComputerParserStaticData(KentroComputerParserStaticData&&) = delete;
  KentroComputerParserStaticData& operator=(const KentroComputerParserStaticData&) = delete;
  KentroComputerParserStaticData& operator=(KentroComputerParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag kentrocomputerParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
KentroComputerParserStaticData *kentrocomputerParserStaticData = nullptr;

void kentrocomputerParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (kentrocomputerParserStaticData != nullptr) {
    return;
  }
#else
  assert(kentrocomputerParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KentroComputerParserStaticData>(
    std::vector<std::string>{
      "prog", "stat", "expr", "number"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'*'", "'/'", "'+'", "'-'", "", "", "", "", "'^'"
    },
    std::vector<std::string>{
      "", "", "", "MUL", "DIV", "ADD", "SUB", "INT", "FLOAT", "NEWLINE", 
      "WS", "POW"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,11,56,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,4,0,10,8,0,11,0,12,0,11,
  	1,1,1,1,1,1,1,1,3,1,18,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,3,2,33,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,5,2,49,8,2,10,2,12,2,52,9,2,1,3,1,3,1,3,0,1,4,4,0,2,4,6,0,4,1,
  	1,9,9,1,0,3,4,1,0,5,6,1,0,7,8,60,0,9,1,0,0,0,2,17,1,0,0,0,4,32,1,0,0,
  	0,6,53,1,0,0,0,8,10,3,2,1,0,9,8,1,0,0,0,10,11,1,0,0,0,11,9,1,0,0,0,11,
  	12,1,0,0,0,12,1,1,0,0,0,13,14,3,4,2,0,14,15,7,0,0,0,15,18,1,0,0,0,16,
  	18,5,9,0,0,17,13,1,0,0,0,17,16,1,0,0,0,18,3,1,0,0,0,19,20,6,2,-1,0,20,
  	21,3,6,3,0,21,22,5,1,0,0,22,23,3,4,2,0,23,24,5,2,0,0,24,33,1,0,0,0,25,
  	26,5,1,0,0,26,27,3,4,2,0,27,28,5,2,0,0,28,33,1,0,0,0,29,30,5,6,0,0,30,
  	33,3,4,2,5,31,33,3,6,3,0,32,19,1,0,0,0,32,25,1,0,0,0,32,29,1,0,0,0,32,
  	31,1,0,0,0,33,50,1,0,0,0,34,35,10,4,0,0,35,36,5,11,0,0,36,49,3,4,2,5,
  	37,38,10,3,0,0,38,39,7,1,0,0,39,49,3,4,2,4,40,41,10,2,0,0,41,42,7,2,0,
  	0,42,49,3,4,2,3,43,44,10,8,0,0,44,45,5,1,0,0,45,46,3,4,2,0,46,47,5,2,
  	0,0,47,49,1,0,0,0,48,34,1,0,0,0,48,37,1,0,0,0,48,40,1,0,0,0,48,43,1,0,
  	0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,5,1,0,0,0,52,50,1,0,
  	0,0,53,54,7,3,0,0,54,7,1,0,0,0,5,11,17,32,48,50
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  kentrocomputerParserStaticData = staticData.release();
}

}

KentroComputerParser::KentroComputerParser(TokenStream *input) : KentroComputerParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

KentroComputerParser::KentroComputerParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  KentroComputerParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *kentrocomputerParserStaticData->atn, kentrocomputerParserStaticData->decisionToDFA, kentrocomputerParserStaticData->sharedContextCache, options);
}

KentroComputerParser::~KentroComputerParser() {
  delete _interpreter;
}

const atn::ATN& KentroComputerParser::getATN() const {
  return *kentrocomputerParserStaticData->atn;
}

std::string KentroComputerParser::getGrammarFileName() const {
  return "KentroComputer.g4";
}

const std::vector<std::string>& KentroComputerParser::getRuleNames() const {
  return kentrocomputerParserStaticData->ruleNames;
}

const dfa::Vocabulary& KentroComputerParser::getVocabulary() const {
  return kentrocomputerParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView KentroComputerParser::getSerializedATN() const {
  return kentrocomputerParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

KentroComputerParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KentroComputerParser::StatContext *> KentroComputerParser::ProgContext::stat() {
  return getRuleContexts<KentroComputerParser::StatContext>();
}

KentroComputerParser::StatContext* KentroComputerParser::ProgContext::stat(size_t i) {
  return getRuleContext<KentroComputerParser::StatContext>(i);
}


size_t KentroComputerParser::ProgContext::getRuleIndex() const {
  return KentroComputerParser::RuleProg;
}


std::any KentroComputerParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

KentroComputerParser::ProgContext* KentroComputerParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, KentroComputerParser::RuleProg);
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
    setState(9); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      stat();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 962) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

KentroComputerParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KentroComputerParser::StatContext::getRuleIndex() const {
  return KentroComputerParser::RuleStat;
}

void KentroComputerParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* KentroComputerParser::BlankContext::NEWLINE() {
  return getToken(KentroComputerParser::NEWLINE, 0);
}

KentroComputerParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

KentroComputerParser::ExprContext* KentroComputerParser::PrintExprContext::expr() {
  return getRuleContext<KentroComputerParser::ExprContext>(0);
}

tree::TerminalNode* KentroComputerParser::PrintExprContext::NEWLINE() {
  return getToken(KentroComputerParser::NEWLINE, 0);
}

tree::TerminalNode* KentroComputerParser::PrintExprContext::EOF() {
  return getToken(KentroComputerParser::EOF, 0);
}

KentroComputerParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
KentroComputerParser::StatContext* KentroComputerParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, KentroComputerParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KentroComputerParser::T__0:
      case KentroComputerParser::SUB:
      case KentroComputerParser::INT:
      case KentroComputerParser::FLOAT: {
        _localctx = _tracker.createInstance<KentroComputerParser::PrintExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(13);
        expr(0);
        setState(14);
        _la = _input->LA(1);
        if (!(_la == KentroComputerParser::EOF

        || _la == KentroComputerParser::NEWLINE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case KentroComputerParser::NEWLINE: {
        _localctx = _tracker.createInstance<KentroComputerParser::BlankContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(16);
        match(KentroComputerParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

KentroComputerParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KentroComputerParser::ExprContext::getRuleIndex() const {
  return KentroComputerParser::RuleExpr;
}

void KentroComputerParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdImplicitMultiplyContext ------------------------------------------------------------------

KentroComputerParser::NumberContext* KentroComputerParser::IdImplicitMultiplyContext::number() {
  return getRuleContext<KentroComputerParser::NumberContext>(0);
}

KentroComputerParser::ExprContext* KentroComputerParser::IdImplicitMultiplyContext::expr() {
  return getRuleContext<KentroComputerParser::ExprContext>(0);
}

KentroComputerParser::IdImplicitMultiplyContext::IdImplicitMultiplyContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::IdImplicitMultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitIdImplicitMultiply(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

KentroComputerParser::ExprContext* KentroComputerParser::ParensContext::expr() {
  return getRuleContext<KentroComputerParser::ExprContext>(0);
}

KentroComputerParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<KentroComputerParser::ExprContext *> KentroComputerParser::MulDivContext::expr() {
  return getRuleContexts<KentroComputerParser::ExprContext>();
}

KentroComputerParser::ExprContext* KentroComputerParser::MulDivContext::expr(size_t i) {
  return getRuleContext<KentroComputerParser::ExprContext>(i);
}

tree::TerminalNode* KentroComputerParser::MulDivContext::MUL() {
  return getToken(KentroComputerParser::MUL, 0);
}

tree::TerminalNode* KentroComputerParser::MulDivContext::DIV() {
  return getToken(KentroComputerParser::DIV, 0);
}

KentroComputerParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<KentroComputerParser::ExprContext *> KentroComputerParser::AddSubContext::expr() {
  return getRuleContexts<KentroComputerParser::ExprContext>();
}

KentroComputerParser::ExprContext* KentroComputerParser::AddSubContext::expr(size_t i) {
  return getRuleContext<KentroComputerParser::ExprContext>(i);
}

tree::TerminalNode* KentroComputerParser::AddSubContext::ADD() {
  return getToken(KentroComputerParser::ADD, 0);
}

tree::TerminalNode* KentroComputerParser::AddSubContext::SUB() {
  return getToken(KentroComputerParser::SUB, 0);
}

KentroComputerParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomicContext ------------------------------------------------------------------

KentroComputerParser::NumberContext* KentroComputerParser::AtomicContext::number() {
  return getRuleContext<KentroComputerParser::NumberContext>(0);
}

KentroComputerParser::AtomicContext::AtomicContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::AtomicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitAtomic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusContext ------------------------------------------------------------------

tree::TerminalNode* KentroComputerParser::UnaryMinusContext::SUB() {
  return getToken(KentroComputerParser::SUB, 0);
}

KentroComputerParser::ExprContext* KentroComputerParser::UnaryMinusContext::expr() {
  return getRuleContext<KentroComputerParser::ExprContext>(0);
}

KentroComputerParser::UnaryMinusContext::UnaryMinusContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::UnaryMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitUnaryMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ImplicitMultiplyContext ------------------------------------------------------------------

std::vector<KentroComputerParser::ExprContext *> KentroComputerParser::ImplicitMultiplyContext::expr() {
  return getRuleContexts<KentroComputerParser::ExprContext>();
}

KentroComputerParser::ExprContext* KentroComputerParser::ImplicitMultiplyContext::expr(size_t i) {
  return getRuleContext<KentroComputerParser::ExprContext>(i);
}

KentroComputerParser::ImplicitMultiplyContext::ImplicitMultiplyContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::ImplicitMultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitImplicitMultiply(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerContext ------------------------------------------------------------------

std::vector<KentroComputerParser::ExprContext *> KentroComputerParser::PowerContext::expr() {
  return getRuleContexts<KentroComputerParser::ExprContext>();
}

KentroComputerParser::ExprContext* KentroComputerParser::PowerContext::expr(size_t i) {
  return getRuleContext<KentroComputerParser::ExprContext>(i);
}

tree::TerminalNode* KentroComputerParser::PowerContext::POW() {
  return getToken(KentroComputerParser::POW, 0);
}

KentroComputerParser::PowerContext::PowerContext(ExprContext *ctx) { copyFrom(ctx); }


std::any KentroComputerParser::PowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitPower(this);
  else
    return visitor->visitChildren(this);
}

KentroComputerParser::ExprContext* KentroComputerParser::expr() {
   return expr(0);
}

KentroComputerParser::ExprContext* KentroComputerParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KentroComputerParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  KentroComputerParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, KentroComputerParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(32);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<IdImplicitMultiplyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(20);
      number();
      setState(21);
      match(KentroComputerParser::T__0);
      setState(22);
      expr(0);
      setState(23);
      match(KentroComputerParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(25);
      match(KentroComputerParser::T__0);
      setState(26);
      expr(0);
      setState(27);
      match(KentroComputerParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<UnaryMinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(29);
      match(KentroComputerParser::SUB);
      setState(30);
      expr(5);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<AtomicContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(31);
      number();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(50);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(48);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(34);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(35);
          match(KentroComputerParser::POW);
          setState(36);
          expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(37);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(38);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == KentroComputerParser::MUL

          || _la == KentroComputerParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(39);
          expr(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(40);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(41);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == KentroComputerParser::ADD

          || _la == KentroComputerParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(42);
          expr(3);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ImplicitMultiplyContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(43);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(44);
          match(KentroComputerParser::T__0);
          setState(45);
          expr(0);
          setState(46);
          match(KentroComputerParser::T__1);
          break;
        }

        default:
          break;
        } 
      }
      setState(52);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

KentroComputerParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KentroComputerParser::NumberContext::INT() {
  return getToken(KentroComputerParser::INT, 0);
}

tree::TerminalNode* KentroComputerParser::NumberContext::FLOAT() {
  return getToken(KentroComputerParser::FLOAT, 0);
}


size_t KentroComputerParser::NumberContext::getRuleIndex() const {
  return KentroComputerParser::RuleNumber;
}


std::any KentroComputerParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KentroComputerVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

KentroComputerParser::NumberContext* KentroComputerParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 6, KentroComputerParser::RuleNumber);
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
    setState(53);
    _la = _input->LA(1);
    if (!(_la == KentroComputerParser::INT

    || _la == KentroComputerParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool KentroComputerParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KentroComputerParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

void KentroComputerParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  kentrocomputerParserInitialize();
#else
  ::antlr4::internal::call_once(kentrocomputerParserOnceFlag, kentrocomputerParserInitialize);
#endif
}
