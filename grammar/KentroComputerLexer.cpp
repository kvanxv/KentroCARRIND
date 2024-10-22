
// Generated from KentroComputer.g4 by ANTLR 4.13.1


#include "KentroComputerLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct KentroComputerLexerStaticData final {
  KentroComputerLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KentroComputerLexerStaticData(const KentroComputerLexerStaticData&) = delete;
  KentroComputerLexerStaticData(KentroComputerLexerStaticData&&) = delete;
  KentroComputerLexerStaticData& operator=(const KentroComputerLexerStaticData&) = delete;
  KentroComputerLexerStaticData& operator=(KentroComputerLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag kentrocomputerlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
KentroComputerLexerStaticData *kentrocomputerlexerLexerStaticData = nullptr;

void kentrocomputerlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (kentrocomputerlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(kentrocomputerlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KentroComputerLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "MUL", "DIV", "ADD", "SUB", "INT", "FLOAT", "NEWLINE", 
      "WS", "POW"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,11,72,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,3,6,37,8,6,1,6,4,6,40,8,6,11,6,12,6,41,1,7,3,7,45,8,
  	7,1,7,5,7,48,8,7,10,7,12,7,51,9,7,1,7,1,7,4,7,55,8,7,11,7,12,7,56,1,8,
  	3,8,60,8,8,1,8,1,8,1,9,4,9,65,8,9,11,9,12,9,66,1,9,1,9,1,10,1,10,0,0,
  	11,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,1,0,2,1,0,48,57,
  	2,0,9,9,32,32,78,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,
  	1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,
  	0,0,0,21,1,0,0,0,1,23,1,0,0,0,3,25,1,0,0,0,5,27,1,0,0,0,7,29,1,0,0,0,
  	9,31,1,0,0,0,11,33,1,0,0,0,13,36,1,0,0,0,15,44,1,0,0,0,17,59,1,0,0,0,
  	19,64,1,0,0,0,21,70,1,0,0,0,23,24,5,40,0,0,24,2,1,0,0,0,25,26,5,41,0,
  	0,26,4,1,0,0,0,27,28,5,42,0,0,28,6,1,0,0,0,29,30,5,47,0,0,30,8,1,0,0,
  	0,31,32,5,43,0,0,32,10,1,0,0,0,33,34,5,45,0,0,34,12,1,0,0,0,35,37,5,45,
  	0,0,36,35,1,0,0,0,36,37,1,0,0,0,37,39,1,0,0,0,38,40,7,0,0,0,39,38,1,0,
  	0,0,40,41,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,14,1,0,0,0,43,45,5,45,
  	0,0,44,43,1,0,0,0,44,45,1,0,0,0,45,49,1,0,0,0,46,48,7,0,0,0,47,46,1,0,
  	0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,52,1,0,0,0,51,49,1,0,
  	0,0,52,54,5,46,0,0,53,55,7,0,0,0,54,53,1,0,0,0,55,56,1,0,0,0,56,54,1,
  	0,0,0,56,57,1,0,0,0,57,16,1,0,0,0,58,60,5,13,0,0,59,58,1,0,0,0,59,60,
  	1,0,0,0,60,61,1,0,0,0,61,62,5,10,0,0,62,18,1,0,0,0,63,65,7,1,0,0,64,63,
  	1,0,0,0,65,66,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,68,1,0,0,0,68,69,
  	6,9,0,0,69,20,1,0,0,0,70,71,5,94,0,0,71,22,1,0,0,0,8,0,36,41,44,49,56,
  	59,66,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  kentrocomputerlexerLexerStaticData = staticData.release();
}

}

KentroComputerLexer::KentroComputerLexer(CharStream *input) : Lexer(input) {
  KentroComputerLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *kentrocomputerlexerLexerStaticData->atn, kentrocomputerlexerLexerStaticData->decisionToDFA, kentrocomputerlexerLexerStaticData->sharedContextCache);
}

KentroComputerLexer::~KentroComputerLexer() {
  delete _interpreter;
}

std::string KentroComputerLexer::getGrammarFileName() const {
  return "KentroComputer.g4";
}

const std::vector<std::string>& KentroComputerLexer::getRuleNames() const {
  return kentrocomputerlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& KentroComputerLexer::getChannelNames() const {
  return kentrocomputerlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& KentroComputerLexer::getModeNames() const {
  return kentrocomputerlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& KentroComputerLexer::getVocabulary() const {
  return kentrocomputerlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView KentroComputerLexer::getSerializedATN() const {
  return kentrocomputerlexerLexerStaticData->serializedATN;
}

const atn::ATN& KentroComputerLexer::getATN() const {
  return *kentrocomputerlexerLexerStaticData->atn;
}




void KentroComputerLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  kentrocomputerlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(kentrocomputerlexerLexerOnceFlag, kentrocomputerlexerLexerInitialize);
#endif
}
