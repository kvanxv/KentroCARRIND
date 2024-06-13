
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
      "T__0", "T__1", "T__2", "MUL", "DIV", "ADD", "SUB", "INT", "FLOAT", 
      "NEWLINE", "WS", "POW"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'*'", "'/'", "'+'", "'-'", "", "", "", "", 
      "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "MUL", "DIV", "ADD", "SUB", "INT", "FLOAT", "NEWLINE", 
      "WS", "POW"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,12,76,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,3,7,41,8,7,1,7,4,7,44,8,7,11,7,12,
  	7,45,1,8,3,8,49,8,8,1,8,5,8,52,8,8,10,8,12,8,55,9,8,1,8,1,8,4,8,59,8,
  	8,11,8,12,8,60,1,9,3,9,64,8,9,1,9,1,9,1,10,4,10,69,8,10,11,10,12,10,70,
  	1,10,1,10,1,11,1,11,0,0,12,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,1,0,2,1,0,48,57,2,0,9,9,32,32,82,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,1,25,1,0,
  	0,0,3,27,1,0,0,0,5,29,1,0,0,0,7,31,1,0,0,0,9,33,1,0,0,0,11,35,1,0,0,0,
  	13,37,1,0,0,0,15,40,1,0,0,0,17,48,1,0,0,0,19,63,1,0,0,0,21,68,1,0,0,0,
  	23,74,1,0,0,0,25,26,5,61,0,0,26,2,1,0,0,0,27,28,5,40,0,0,28,4,1,0,0,0,
  	29,30,5,41,0,0,30,6,1,0,0,0,31,32,5,42,0,0,32,8,1,0,0,0,33,34,5,47,0,
  	0,34,10,1,0,0,0,35,36,5,43,0,0,36,12,1,0,0,0,37,38,5,45,0,0,38,14,1,0,
  	0,0,39,41,5,45,0,0,40,39,1,0,0,0,40,41,1,0,0,0,41,43,1,0,0,0,42,44,7,
  	0,0,0,43,42,1,0,0,0,44,45,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,16,1,
  	0,0,0,47,49,5,45,0,0,48,47,1,0,0,0,48,49,1,0,0,0,49,53,1,0,0,0,50,52,
  	7,0,0,0,51,50,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,56,
  	1,0,0,0,55,53,1,0,0,0,56,58,5,46,0,0,57,59,7,0,0,0,58,57,1,0,0,0,59,60,
  	1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,18,1,0,0,0,62,64,5,13,0,0,63,62,
  	1,0,0,0,63,64,1,0,0,0,64,65,1,0,0,0,65,66,5,10,0,0,66,20,1,0,0,0,67,69,
  	7,1,0,0,68,67,1,0,0,0,69,70,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,71,72,
  	1,0,0,0,72,73,6,10,0,0,73,22,1,0,0,0,74,75,5,94,0,0,75,24,1,0,0,0,8,0,
  	40,45,48,53,60,63,70,1,6,0,0
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
