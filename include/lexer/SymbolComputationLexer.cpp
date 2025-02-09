
// Generated from SymbolComputation.g4 by ANTLR 4.13.1


#include "SymbolComputationLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SymbolComputationLexerStaticData final {
  SymbolComputationLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SymbolComputationLexerStaticData(const SymbolComputationLexerStaticData&) = delete;
  SymbolComputationLexerStaticData(SymbolComputationLexerStaticData&&) = delete;
  SymbolComputationLexerStaticData& operator=(const SymbolComputationLexerStaticData&) = delete;
  SymbolComputationLexerStaticData& operator=(SymbolComputationLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag symbolcomputationlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SymbolComputationLexerStaticData *symbolcomputationlexerLexerStaticData = nullptr;

void symbolcomputationlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (symbolcomputationlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(symbolcomputationlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SymbolComputationLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "MUL_OP", "ADD_OP", "INT", "VAR", "EXP", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'*'", "", "", "", "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "MUL_OP", "ADD_OP", "INT", "VAR", "EXP", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,48,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,2,8,7,8,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,4,5,31,8,
  	5,11,5,12,5,32,1,6,4,6,36,8,6,11,6,12,6,37,1,7,1,7,1,8,4,8,43,8,8,11,
  	8,12,8,44,1,8,1,8,0,0,9,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,1,0,4,
  	2,0,43,43,45,45,1,0,48,57,2,0,65,90,97,122,3,0,9,10,13,13,32,32,50,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,1,19,1,0,0,0,3,21,1,0,0,0,5,
  	23,1,0,0,0,7,25,1,0,0,0,9,27,1,0,0,0,11,30,1,0,0,0,13,35,1,0,0,0,15,39,
  	1,0,0,0,17,42,1,0,0,0,19,20,5,61,0,0,20,2,1,0,0,0,21,22,5,40,0,0,22,4,
  	1,0,0,0,23,24,5,41,0,0,24,6,1,0,0,0,25,26,5,42,0,0,26,8,1,0,0,0,27,28,
  	7,0,0,0,28,10,1,0,0,0,29,31,7,1,0,0,30,29,1,0,0,0,31,32,1,0,0,0,32,30,
  	1,0,0,0,32,33,1,0,0,0,33,12,1,0,0,0,34,36,7,2,0,0,35,34,1,0,0,0,36,37,
  	1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,14,1,0,0,0,39,40,5,94,0,0,40,16,
  	1,0,0,0,41,43,7,3,0,0,42,41,1,0,0,0,43,44,1,0,0,0,44,42,1,0,0,0,44,45,
  	1,0,0,0,45,46,1,0,0,0,46,47,6,8,0,0,47,18,1,0,0,0,4,0,32,37,44,1,6,0,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  symbolcomputationlexerLexerStaticData = staticData.release();
}

}

SymbolComputationLexer::SymbolComputationLexer(CharStream *input) : Lexer(input) {
  SymbolComputationLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *symbolcomputationlexerLexerStaticData->atn, symbolcomputationlexerLexerStaticData->decisionToDFA, symbolcomputationlexerLexerStaticData->sharedContextCache);
}

SymbolComputationLexer::~SymbolComputationLexer() {
  delete _interpreter;
}

std::string SymbolComputationLexer::getGrammarFileName() const {
  return "SymbolComputation.g4";
}

const std::vector<std::string>& SymbolComputationLexer::getRuleNames() const {
  return symbolcomputationlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SymbolComputationLexer::getChannelNames() const {
  return symbolcomputationlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SymbolComputationLexer::getModeNames() const {
  return symbolcomputationlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SymbolComputationLexer::getVocabulary() const {
  return symbolcomputationlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SymbolComputationLexer::getSerializedATN() const {
  return symbolcomputationlexerLexerStaticData->serializedATN;
}

const atn::ATN& SymbolComputationLexer::getATN() const {
  return *symbolcomputationlexerLexerStaticData->atn;
}




void SymbolComputationLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  symbolcomputationlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(symbolcomputationlexerLexerOnceFlag, symbolcomputationlexerLexerInitialize);
#endif
}
