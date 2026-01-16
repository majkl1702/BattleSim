
// Generated from ./BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.2


#include "BattleSimListener.h"
#include "BattleSimVisitor.h"

#include "BattleSimParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BattleSimParserStaticData final {
  BattleSimParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BattleSimParserStaticData(const BattleSimParserStaticData&) = delete;
  BattleSimParserStaticData(BattleSimParserStaticData&&) = delete;
  BattleSimParserStaticData& operator=(const BattleSimParserStaticData&) = delete;
  BattleSimParserStaticData& operator=(BattleSimParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag battlesimParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<BattleSimParserStaticData> battlesimParserStaticData = nullptr;

void battlesimParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (battlesimParserStaticData != nullptr) {
    return;
  }
#else
  assert(battlesimParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BattleSimParserStaticData>(
    std::vector<std::string>{
      "battleSim", "map", "teamDef", "unitDef", "unitStats", "unitLogicSequence", 
      "logicCommand", "moveCmd", "turnCmd", "turnLeftCmd", "turnRightCmd", 
      "turnOrientationCmd", "ifCondition", "whileCycle", "attackCmd", "attackAroundSelfCmd", 
      "attackInFrontCmd", "rangeAttackCmd", "skipCmd", "boolexp", "orExpr", 
      "andExpr", "notExpr", "primaryBool", "true", "false", "parenthesesBool", 
      "comparisonBool", "orientationEqualityCheck", "enemyNearbyCheck", 
      "blockCheck", "isFrontClearCheck", "isFrontBlockedCheck", "orientationCheck", 
      "facingNCheck", "facingWCheck", "facingECheck", "facingSCheck", "orientation", 
      "getNearbyEnemyOrientation", "getMyOrientation", "exp", "atomicExp", 
      "parenthesesExp"
    },
    std::vector<std::string>{
      "", "'TeamBlue'", "'{'", "'}'", "'TeamRed'", "'x'", "';'", "'unit'", 
      "'at'", "'('", "','", "')'", "'health:'", "'attack:'", "'MoveForward()'", 
      "'TurnLeft()'", "'TurnRight()'", "'Turn('", "'if'", "'then'", "'else'", 
      "'while'", "'do'", "'AttackAroundSelf()'", "'AttackInFront()'", "'RangeAttack('", 
      "'skip'", "'||'", "'&&'", "'!'", "'true'", "'false'", "'=='", "'!='", 
      "'IsEnemyNearby()'", "'IsFrontClear()'", "'IsFrontBlocked()'", "'FacingNorth()'", 
      "'FacingWest()'", "'FacingEast()'", "'FacingSouth()'", "'GetNearbyEnemyOrientation()'", 
      "'GetMyOrientation()'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "MATHSYMBOL", "COMPSYMBOL", "ORIENTATION", 
      "NAME", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,48,302,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,2,1,2,1,2,4,2,106,8,2,11,2,12,2,107,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,134,
  	8,5,10,5,12,5,137,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,147,8,6,1,7,
  	1,7,1,8,1,8,1,8,3,8,154,8,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,3,14,189,8,14,1,15,
  	1,15,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,20,
  	5,20,206,8,20,10,20,12,20,209,9,20,1,21,1,21,1,21,5,21,214,8,21,10,21,
  	12,21,217,9,21,1,22,1,22,1,22,3,22,222,8,22,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,3,23,232,8,23,1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,26,
  	1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,30,1,30,3,30,254,
  	8,30,1,31,1,31,1,32,1,32,1,33,1,33,1,33,1,33,3,33,264,8,33,1,34,1,34,
  	1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,38,3,38,277,8,38,1,39,1,39,
  	1,40,1,40,1,41,1,41,1,41,3,41,286,8,41,1,41,1,41,1,41,5,41,291,8,41,10,
  	41,12,41,294,9,41,1,42,1,42,1,43,1,43,1,43,1,43,1,43,0,1,82,44,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,
  	54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,0,1,1,0,32,33,286,
  	0,88,1,0,0,0,2,98,1,0,0,0,4,105,1,0,0,0,6,109,1,0,0,0,8,122,1,0,0,0,10,
  	129,1,0,0,0,12,146,1,0,0,0,14,148,1,0,0,0,16,153,1,0,0,0,18,155,1,0,0,
  	0,20,157,1,0,0,0,22,159,1,0,0,0,24,163,1,0,0,0,26,176,1,0,0,0,28,188,
  	1,0,0,0,30,190,1,0,0,0,32,192,1,0,0,0,34,194,1,0,0,0,36,198,1,0,0,0,38,
  	200,1,0,0,0,40,202,1,0,0,0,42,210,1,0,0,0,44,221,1,0,0,0,46,231,1,0,0,
  	0,48,233,1,0,0,0,50,235,1,0,0,0,52,237,1,0,0,0,54,241,1,0,0,0,56,245,
  	1,0,0,0,58,249,1,0,0,0,60,253,1,0,0,0,62,255,1,0,0,0,64,257,1,0,0,0,66,
  	263,1,0,0,0,68,265,1,0,0,0,70,267,1,0,0,0,72,269,1,0,0,0,74,271,1,0,0,
  	0,76,276,1,0,0,0,78,278,1,0,0,0,80,280,1,0,0,0,82,285,1,0,0,0,84,295,
  	1,0,0,0,86,297,1,0,0,0,88,89,3,2,1,0,89,90,5,1,0,0,90,91,5,2,0,0,91,92,
  	3,4,2,0,92,93,5,3,0,0,93,94,5,4,0,0,94,95,5,2,0,0,95,96,3,4,2,0,96,97,
  	5,3,0,0,97,1,1,0,0,0,98,99,5,47,0,0,99,100,5,5,0,0,100,101,5,47,0,0,101,
  	3,1,0,0,0,102,103,3,6,3,0,103,104,5,6,0,0,104,106,1,0,0,0,105,102,1,0,
  	0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,5,1,0,0,0,109,
  	110,5,7,0,0,110,111,5,46,0,0,111,112,5,8,0,0,112,113,5,9,0,0,113,114,
  	5,47,0,0,114,115,5,10,0,0,115,116,5,47,0,0,116,117,5,11,0,0,117,118,5,
  	2,0,0,118,119,3,8,4,0,119,120,3,10,5,0,120,121,5,3,0,0,121,7,1,0,0,0,
  	122,123,5,12,0,0,123,124,5,47,0,0,124,125,5,6,0,0,125,126,5,13,0,0,126,
  	127,5,47,0,0,127,128,5,6,0,0,128,9,1,0,0,0,129,135,5,2,0,0,130,131,3,
  	12,6,0,131,132,5,6,0,0,132,134,1,0,0,0,133,130,1,0,0,0,134,137,1,0,0,
  	0,135,133,1,0,0,0,135,136,1,0,0,0,136,138,1,0,0,0,137,135,1,0,0,0,138,
  	139,5,3,0,0,139,11,1,0,0,0,140,147,3,14,7,0,141,147,3,16,8,0,142,147,
  	3,24,12,0,143,147,3,26,13,0,144,147,3,28,14,0,145,147,3,36,18,0,146,140,
  	1,0,0,0,146,141,1,0,0,0,146,142,1,0,0,0,146,143,1,0,0,0,146,144,1,0,0,
  	0,146,145,1,0,0,0,147,13,1,0,0,0,148,149,5,14,0,0,149,15,1,0,0,0,150,
  	154,3,18,9,0,151,154,3,20,10,0,152,154,3,22,11,0,153,150,1,0,0,0,153,
  	151,1,0,0,0,153,152,1,0,0,0,154,17,1,0,0,0,155,156,5,15,0,0,156,19,1,
  	0,0,0,157,158,5,16,0,0,158,21,1,0,0,0,159,160,5,17,0,0,160,161,3,76,38,
  	0,161,162,5,11,0,0,162,23,1,0,0,0,163,164,5,18,0,0,164,165,5,9,0,0,165,
  	166,3,38,19,0,166,167,5,11,0,0,167,168,5,19,0,0,168,169,5,9,0,0,169,170,
  	3,10,5,0,170,171,5,11,0,0,171,172,5,20,0,0,172,173,5,9,0,0,173,174,3,
  	10,5,0,174,175,5,11,0,0,175,25,1,0,0,0,176,177,5,21,0,0,177,178,5,9,0,
  	0,178,179,3,38,19,0,179,180,5,11,0,0,180,181,5,22,0,0,181,182,5,9,0,0,
  	182,183,3,10,5,0,183,184,5,11,0,0,184,27,1,0,0,0,185,189,3,30,15,0,186,
  	189,3,32,16,0,187,189,3,34,17,0,188,185,1,0,0,0,188,186,1,0,0,0,188,187,
  	1,0,0,0,189,29,1,0,0,0,190,191,5,23,0,0,191,31,1,0,0,0,192,193,5,24,0,
  	0,193,33,1,0,0,0,194,195,5,25,0,0,195,196,3,82,41,0,196,197,5,11,0,0,
  	197,35,1,0,0,0,198,199,5,26,0,0,199,37,1,0,0,0,200,201,3,40,20,0,201,
  	39,1,0,0,0,202,207,3,42,21,0,203,204,5,27,0,0,204,206,3,42,21,0,205,203,
  	1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,41,1,0,0,
  	0,209,207,1,0,0,0,210,215,3,44,22,0,211,212,5,28,0,0,212,214,3,44,22,
  	0,213,211,1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,
  	43,1,0,0,0,217,215,1,0,0,0,218,219,5,29,0,0,219,222,3,44,22,0,220,222,
  	3,46,23,0,221,218,1,0,0,0,221,220,1,0,0,0,222,45,1,0,0,0,223,232,3,48,
  	24,0,224,232,3,50,25,0,225,232,3,52,26,0,226,232,3,54,27,0,227,232,3,
  	56,28,0,228,232,3,60,30,0,229,232,3,66,33,0,230,232,3,58,29,0,231,223,
  	1,0,0,0,231,224,1,0,0,0,231,225,1,0,0,0,231,226,1,0,0,0,231,227,1,0,0,
  	0,231,228,1,0,0,0,231,229,1,0,0,0,231,230,1,0,0,0,232,47,1,0,0,0,233,
  	234,5,30,0,0,234,49,1,0,0,0,235,236,5,31,0,0,236,51,1,0,0,0,237,238,5,
  	9,0,0,238,239,3,38,19,0,239,240,5,11,0,0,240,53,1,0,0,0,241,242,3,82,
  	41,0,242,243,5,44,0,0,243,244,3,82,41,0,244,55,1,0,0,0,245,246,3,76,38,
  	0,246,247,7,0,0,0,247,248,3,76,38,0,248,57,1,0,0,0,249,250,5,34,0,0,250,
  	59,1,0,0,0,251,254,3,62,31,0,252,254,3,64,32,0,253,251,1,0,0,0,253,252,
  	1,0,0,0,254,61,1,0,0,0,255,256,5,35,0,0,256,63,1,0,0,0,257,258,5,36,0,
  	0,258,65,1,0,0,0,259,264,3,68,34,0,260,264,3,70,35,0,261,264,3,72,36,
  	0,262,264,3,74,37,0,263,259,1,0,0,0,263,260,1,0,0,0,263,261,1,0,0,0,263,
  	262,1,0,0,0,264,67,1,0,0,0,265,266,5,37,0,0,266,69,1,0,0,0,267,268,5,
  	38,0,0,268,71,1,0,0,0,269,270,5,39,0,0,270,73,1,0,0,0,271,272,5,40,0,
  	0,272,75,1,0,0,0,273,277,5,45,0,0,274,277,3,78,39,0,275,277,3,80,40,0,
  	276,273,1,0,0,0,276,274,1,0,0,0,276,275,1,0,0,0,277,77,1,0,0,0,278,279,
  	5,41,0,0,279,79,1,0,0,0,280,281,5,42,0,0,281,81,1,0,0,0,282,283,6,41,
  	-1,0,283,286,3,84,42,0,284,286,3,86,43,0,285,282,1,0,0,0,285,284,1,0,
  	0,0,286,292,1,0,0,0,287,288,10,2,0,0,288,289,5,43,0,0,289,291,3,82,41,
  	3,290,287,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,292,293,1,0,0,0,293,
  	83,1,0,0,0,294,292,1,0,0,0,295,296,5,47,0,0,296,85,1,0,0,0,297,298,5,
  	9,0,0,298,299,3,82,41,0,299,300,5,11,0,0,300,87,1,0,0,0,14,107,135,146,
  	153,188,207,215,221,231,253,263,276,285,292
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  battlesimParserStaticData = std::move(staticData);
}

}

BattleSimParser::BattleSimParser(TokenStream *input) : BattleSimParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BattleSimParser::BattleSimParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BattleSimParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *battlesimParserStaticData->atn, battlesimParserStaticData->decisionToDFA, battlesimParserStaticData->sharedContextCache, options);
}

BattleSimParser::~BattleSimParser() {
  delete _interpreter;
}

const atn::ATN& BattleSimParser::getATN() const {
  return *battlesimParserStaticData->atn;
}

std::string BattleSimParser::getGrammarFileName() const {
  return "BattleSim.g4";
}

const std::vector<std::string>& BattleSimParser::getRuleNames() const {
  return battlesimParserStaticData->ruleNames;
}

const dfa::Vocabulary& BattleSimParser::getVocabulary() const {
  return battlesimParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BattleSimParser::getSerializedATN() const {
  return battlesimParserStaticData->serializedATN;
}


//----------------- BattleSimContext ------------------------------------------------------------------

BattleSimParser::BattleSimContext::BattleSimContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::MapContext* BattleSimParser::BattleSimContext::map() {
  return getRuleContext<BattleSimParser::MapContext>(0);
}

std::vector<BattleSimParser::TeamDefContext *> BattleSimParser::BattleSimContext::teamDef() {
  return getRuleContexts<BattleSimParser::TeamDefContext>();
}

BattleSimParser::TeamDefContext* BattleSimParser::BattleSimContext::teamDef(size_t i) {
  return getRuleContext<BattleSimParser::TeamDefContext>(i);
}


size_t BattleSimParser::BattleSimContext::getRuleIndex() const {
  return BattleSimParser::RuleBattleSim;
}

void BattleSimParser::BattleSimContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBattleSim(this);
}

void BattleSimParser::BattleSimContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBattleSim(this);
}


std::any BattleSimParser::BattleSimContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitBattleSim(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::BattleSimContext* BattleSimParser::battleSim() {
  BattleSimContext *_localctx = _tracker.createInstance<BattleSimContext>(_ctx, getState());
  enterRule(_localctx, 0, BattleSimParser::RuleBattleSim);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    map();
    setState(89);
    match(BattleSimParser::T__0);
    setState(90);
    match(BattleSimParser::T__1);
    setState(91);
    teamDef();
    setState(92);
    match(BattleSimParser::T__2);
    setState(93);
    match(BattleSimParser::T__3);
    setState(94);
    match(BattleSimParser::T__1);
    setState(95);
    teamDef();
    setState(96);
    match(BattleSimParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapContext ------------------------------------------------------------------

BattleSimParser::MapContext::MapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BattleSimParser::MapContext::NUMBER() {
  return getTokens(BattleSimParser::NUMBER);
}

tree::TerminalNode* BattleSimParser::MapContext::NUMBER(size_t i) {
  return getToken(BattleSimParser::NUMBER, i);
}


size_t BattleSimParser::MapContext::getRuleIndex() const {
  return BattleSimParser::RuleMap;
}

void BattleSimParser::MapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMap(this);
}

void BattleSimParser::MapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMap(this);
}


std::any BattleSimParser::MapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitMap(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::MapContext* BattleSimParser::map() {
  MapContext *_localctx = _tracker.createInstance<MapContext>(_ctx, getState());
  enterRule(_localctx, 2, BattleSimParser::RuleMap);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(BattleSimParser::NUMBER);
    setState(99);
    match(BattleSimParser::T__4);
    setState(100);
    match(BattleSimParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TeamDefContext ------------------------------------------------------------------

BattleSimParser::TeamDefContext::TeamDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BattleSimParser::UnitDefContext *> BattleSimParser::TeamDefContext::unitDef() {
  return getRuleContexts<BattleSimParser::UnitDefContext>();
}

BattleSimParser::UnitDefContext* BattleSimParser::TeamDefContext::unitDef(size_t i) {
  return getRuleContext<BattleSimParser::UnitDefContext>(i);
}


size_t BattleSimParser::TeamDefContext::getRuleIndex() const {
  return BattleSimParser::RuleTeamDef;
}

void BattleSimParser::TeamDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTeamDef(this);
}

void BattleSimParser::TeamDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTeamDef(this);
}


std::any BattleSimParser::TeamDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitTeamDef(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::TeamDefContext* BattleSimParser::teamDef() {
  TeamDefContext *_localctx = _tracker.createInstance<TeamDefContext>(_ctx, getState());
  enterRule(_localctx, 4, BattleSimParser::RuleTeamDef);
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
    setState(105); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(102);
      unitDef();
      setState(103);
      match(BattleSimParser::T__5);
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BattleSimParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitDefContext ------------------------------------------------------------------

BattleSimParser::UnitDefContext::UnitDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BattleSimParser::UnitDefContext::NAME() {
  return getToken(BattleSimParser::NAME, 0);
}

std::vector<tree::TerminalNode *> BattleSimParser::UnitDefContext::NUMBER() {
  return getTokens(BattleSimParser::NUMBER);
}

tree::TerminalNode* BattleSimParser::UnitDefContext::NUMBER(size_t i) {
  return getToken(BattleSimParser::NUMBER, i);
}

BattleSimParser::UnitStatsContext* BattleSimParser::UnitDefContext::unitStats() {
  return getRuleContext<BattleSimParser::UnitStatsContext>(0);
}

BattleSimParser::UnitLogicSequenceContext* BattleSimParser::UnitDefContext::unitLogicSequence() {
  return getRuleContext<BattleSimParser::UnitLogicSequenceContext>(0);
}


size_t BattleSimParser::UnitDefContext::getRuleIndex() const {
  return BattleSimParser::RuleUnitDef;
}

void BattleSimParser::UnitDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnitDef(this);
}

void BattleSimParser::UnitDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnitDef(this);
}


std::any BattleSimParser::UnitDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitUnitDef(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::UnitDefContext* BattleSimParser::unitDef() {
  UnitDefContext *_localctx = _tracker.createInstance<UnitDefContext>(_ctx, getState());
  enterRule(_localctx, 6, BattleSimParser::RuleUnitDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(BattleSimParser::T__6);
    setState(110);
    match(BattleSimParser::NAME);
    setState(111);
    match(BattleSimParser::T__7);
    setState(112);
    match(BattleSimParser::T__8);
    setState(113);
    match(BattleSimParser::NUMBER);
    setState(114);
    match(BattleSimParser::T__9);
    setState(115);
    match(BattleSimParser::NUMBER);
    setState(116);
    match(BattleSimParser::T__10);
    setState(117);
    match(BattleSimParser::T__1);
    setState(118);
    unitStats();
    setState(119);
    unitLogicSequence();
    setState(120);
    match(BattleSimParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitStatsContext ------------------------------------------------------------------

BattleSimParser::UnitStatsContext::UnitStatsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BattleSimParser::UnitStatsContext::NUMBER() {
  return getTokens(BattleSimParser::NUMBER);
}

tree::TerminalNode* BattleSimParser::UnitStatsContext::NUMBER(size_t i) {
  return getToken(BattleSimParser::NUMBER, i);
}


size_t BattleSimParser::UnitStatsContext::getRuleIndex() const {
  return BattleSimParser::RuleUnitStats;
}

void BattleSimParser::UnitStatsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnitStats(this);
}

void BattleSimParser::UnitStatsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnitStats(this);
}


std::any BattleSimParser::UnitStatsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitUnitStats(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::UnitStatsContext* BattleSimParser::unitStats() {
  UnitStatsContext *_localctx = _tracker.createInstance<UnitStatsContext>(_ctx, getState());
  enterRule(_localctx, 8, BattleSimParser::RuleUnitStats);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(BattleSimParser::T__11);
    setState(123);
    match(BattleSimParser::NUMBER);
    setState(124);
    match(BattleSimParser::T__5);
    setState(125);
    match(BattleSimParser::T__12);
    setState(126);
    match(BattleSimParser::NUMBER);
    setState(127);
    match(BattleSimParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitLogicSequenceContext ------------------------------------------------------------------

BattleSimParser::UnitLogicSequenceContext::UnitLogicSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BattleSimParser::LogicCommandContext *> BattleSimParser::UnitLogicSequenceContext::logicCommand() {
  return getRuleContexts<BattleSimParser::LogicCommandContext>();
}

BattleSimParser::LogicCommandContext* BattleSimParser::UnitLogicSequenceContext::logicCommand(size_t i) {
  return getRuleContext<BattleSimParser::LogicCommandContext>(i);
}


size_t BattleSimParser::UnitLogicSequenceContext::getRuleIndex() const {
  return BattleSimParser::RuleUnitLogicSequence;
}

void BattleSimParser::UnitLogicSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnitLogicSequence(this);
}

void BattleSimParser::UnitLogicSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnitLogicSequence(this);
}


std::any BattleSimParser::UnitLogicSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitUnitLogicSequence(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::UnitLogicSequenceContext* BattleSimParser::unitLogicSequence() {
  UnitLogicSequenceContext *_localctx = _tracker.createInstance<UnitLogicSequenceContext>(_ctx, getState());
  enterRule(_localctx, 10, BattleSimParser::RuleUnitLogicSequence);
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
    setState(129);
    match(BattleSimParser::T__1);
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 128434176) != 0)) {
      setState(130);
      logicCommand();
      setState(131);
      match(BattleSimParser::T__5);
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(138);
    match(BattleSimParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicCommandContext ------------------------------------------------------------------

BattleSimParser::LogicCommandContext::LogicCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::MoveCmdContext* BattleSimParser::LogicCommandContext::moveCmd() {
  return getRuleContext<BattleSimParser::MoveCmdContext>(0);
}

BattleSimParser::TurnCmdContext* BattleSimParser::LogicCommandContext::turnCmd() {
  return getRuleContext<BattleSimParser::TurnCmdContext>(0);
}

BattleSimParser::IfConditionContext* BattleSimParser::LogicCommandContext::ifCondition() {
  return getRuleContext<BattleSimParser::IfConditionContext>(0);
}

BattleSimParser::WhileCycleContext* BattleSimParser::LogicCommandContext::whileCycle() {
  return getRuleContext<BattleSimParser::WhileCycleContext>(0);
}

BattleSimParser::AttackCmdContext* BattleSimParser::LogicCommandContext::attackCmd() {
  return getRuleContext<BattleSimParser::AttackCmdContext>(0);
}

BattleSimParser::SkipCmdContext* BattleSimParser::LogicCommandContext::skipCmd() {
  return getRuleContext<BattleSimParser::SkipCmdContext>(0);
}


size_t BattleSimParser::LogicCommandContext::getRuleIndex() const {
  return BattleSimParser::RuleLogicCommand;
}

void BattleSimParser::LogicCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicCommand(this);
}

void BattleSimParser::LogicCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicCommand(this);
}


std::any BattleSimParser::LogicCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitLogicCommand(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::LogicCommandContext* BattleSimParser::logicCommand() {
  LogicCommandContext *_localctx = _tracker.createInstance<LogicCommandContext>(_ctx, getState());
  enterRule(_localctx, 12, BattleSimParser::RuleLogicCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(140);
        moveCmd();
        break;
      }

      case BattleSimParser::T__14:
      case BattleSimParser::T__15:
      case BattleSimParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(141);
        turnCmd();
        break;
      }

      case BattleSimParser::T__17: {
        enterOuterAlt(_localctx, 3);
        setState(142);
        ifCondition();
        break;
      }

      case BattleSimParser::T__20: {
        enterOuterAlt(_localctx, 4);
        setState(143);
        whileCycle();
        break;
      }

      case BattleSimParser::T__22:
      case BattleSimParser::T__23:
      case BattleSimParser::T__24: {
        enterOuterAlt(_localctx, 5);
        setState(144);
        attackCmd();
        break;
      }

      case BattleSimParser::T__25: {
        enterOuterAlt(_localctx, 6);
        setState(145);
        skipCmd();
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

//----------------- MoveCmdContext ------------------------------------------------------------------

BattleSimParser::MoveCmdContext::MoveCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::MoveCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleMoveCmd;
}

void BattleSimParser::MoveCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoveCmd(this);
}

void BattleSimParser::MoveCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoveCmd(this);
}


std::any BattleSimParser::MoveCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitMoveCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::MoveCmdContext* BattleSimParser::moveCmd() {
  MoveCmdContext *_localctx = _tracker.createInstance<MoveCmdContext>(_ctx, getState());
  enterRule(_localctx, 14, BattleSimParser::RuleMoveCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(BattleSimParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnCmdContext ------------------------------------------------------------------

BattleSimParser::TurnCmdContext::TurnCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::TurnLeftCmdContext* BattleSimParser::TurnCmdContext::turnLeftCmd() {
  return getRuleContext<BattleSimParser::TurnLeftCmdContext>(0);
}

BattleSimParser::TurnRightCmdContext* BattleSimParser::TurnCmdContext::turnRightCmd() {
  return getRuleContext<BattleSimParser::TurnRightCmdContext>(0);
}

BattleSimParser::TurnOrientationCmdContext* BattleSimParser::TurnCmdContext::turnOrientationCmd() {
  return getRuleContext<BattleSimParser::TurnOrientationCmdContext>(0);
}


size_t BattleSimParser::TurnCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleTurnCmd;
}

void BattleSimParser::TurnCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnCmd(this);
}

void BattleSimParser::TurnCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnCmd(this);
}


std::any BattleSimParser::TurnCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitTurnCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::TurnCmdContext* BattleSimParser::turnCmd() {
  TurnCmdContext *_localctx = _tracker.createInstance<TurnCmdContext>(_ctx, getState());
  enterRule(_localctx, 16, BattleSimParser::RuleTurnCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(153);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__14: {
        enterOuterAlt(_localctx, 1);
        setState(150);
        turnLeftCmd();
        break;
      }

      case BattleSimParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(151);
        turnRightCmd();
        break;
      }

      case BattleSimParser::T__16: {
        enterOuterAlt(_localctx, 3);
        setState(152);
        turnOrientationCmd();
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

//----------------- TurnLeftCmdContext ------------------------------------------------------------------

BattleSimParser::TurnLeftCmdContext::TurnLeftCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::TurnLeftCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleTurnLeftCmd;
}

void BattleSimParser::TurnLeftCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnLeftCmd(this);
}

void BattleSimParser::TurnLeftCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnLeftCmd(this);
}


std::any BattleSimParser::TurnLeftCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitTurnLeftCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::TurnLeftCmdContext* BattleSimParser::turnLeftCmd() {
  TurnLeftCmdContext *_localctx = _tracker.createInstance<TurnLeftCmdContext>(_ctx, getState());
  enterRule(_localctx, 18, BattleSimParser::RuleTurnLeftCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(BattleSimParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnRightCmdContext ------------------------------------------------------------------

BattleSimParser::TurnRightCmdContext::TurnRightCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::TurnRightCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleTurnRightCmd;
}

void BattleSimParser::TurnRightCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnRightCmd(this);
}

void BattleSimParser::TurnRightCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnRightCmd(this);
}


std::any BattleSimParser::TurnRightCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitTurnRightCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::TurnRightCmdContext* BattleSimParser::turnRightCmd() {
  TurnRightCmdContext *_localctx = _tracker.createInstance<TurnRightCmdContext>(_ctx, getState());
  enterRule(_localctx, 20, BattleSimParser::RuleTurnRightCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(BattleSimParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnOrientationCmdContext ------------------------------------------------------------------

BattleSimParser::TurnOrientationCmdContext::TurnOrientationCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::OrientationContext* BattleSimParser::TurnOrientationCmdContext::orientation() {
  return getRuleContext<BattleSimParser::OrientationContext>(0);
}


size_t BattleSimParser::TurnOrientationCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleTurnOrientationCmd;
}

void BattleSimParser::TurnOrientationCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnOrientationCmd(this);
}

void BattleSimParser::TurnOrientationCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnOrientationCmd(this);
}


std::any BattleSimParser::TurnOrientationCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitTurnOrientationCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::TurnOrientationCmdContext* BattleSimParser::turnOrientationCmd() {
  TurnOrientationCmdContext *_localctx = _tracker.createInstance<TurnOrientationCmdContext>(_ctx, getState());
  enterRule(_localctx, 22, BattleSimParser::RuleTurnOrientationCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(BattleSimParser::T__16);
    setState(160);
    orientation();
    setState(161);
    match(BattleSimParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfConditionContext ------------------------------------------------------------------

BattleSimParser::IfConditionContext::IfConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::BoolexpContext* BattleSimParser::IfConditionContext::boolexp() {
  return getRuleContext<BattleSimParser::BoolexpContext>(0);
}

std::vector<BattleSimParser::UnitLogicSequenceContext *> BattleSimParser::IfConditionContext::unitLogicSequence() {
  return getRuleContexts<BattleSimParser::UnitLogicSequenceContext>();
}

BattleSimParser::UnitLogicSequenceContext* BattleSimParser::IfConditionContext::unitLogicSequence(size_t i) {
  return getRuleContext<BattleSimParser::UnitLogicSequenceContext>(i);
}


size_t BattleSimParser::IfConditionContext::getRuleIndex() const {
  return BattleSimParser::RuleIfCondition;
}

void BattleSimParser::IfConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfCondition(this);
}

void BattleSimParser::IfConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfCondition(this);
}


std::any BattleSimParser::IfConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitIfCondition(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::IfConditionContext* BattleSimParser::ifCondition() {
  IfConditionContext *_localctx = _tracker.createInstance<IfConditionContext>(_ctx, getState());
  enterRule(_localctx, 24, BattleSimParser::RuleIfCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(BattleSimParser::T__17);
    setState(164);
    match(BattleSimParser::T__8);
    setState(165);
    boolexp();
    setState(166);
    match(BattleSimParser::T__10);
    setState(167);
    match(BattleSimParser::T__18);
    setState(168);
    match(BattleSimParser::T__8);
    setState(169);
    unitLogicSequence();
    setState(170);
    match(BattleSimParser::T__10);
    setState(171);
    match(BattleSimParser::T__19);
    setState(172);
    match(BattleSimParser::T__8);
    setState(173);
    unitLogicSequence();
    setState(174);
    match(BattleSimParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileCycleContext ------------------------------------------------------------------

BattleSimParser::WhileCycleContext::WhileCycleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::BoolexpContext* BattleSimParser::WhileCycleContext::boolexp() {
  return getRuleContext<BattleSimParser::BoolexpContext>(0);
}

BattleSimParser::UnitLogicSequenceContext* BattleSimParser::WhileCycleContext::unitLogicSequence() {
  return getRuleContext<BattleSimParser::UnitLogicSequenceContext>(0);
}


size_t BattleSimParser::WhileCycleContext::getRuleIndex() const {
  return BattleSimParser::RuleWhileCycle;
}

void BattleSimParser::WhileCycleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileCycle(this);
}

void BattleSimParser::WhileCycleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileCycle(this);
}


std::any BattleSimParser::WhileCycleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitWhileCycle(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::WhileCycleContext* BattleSimParser::whileCycle() {
  WhileCycleContext *_localctx = _tracker.createInstance<WhileCycleContext>(_ctx, getState());
  enterRule(_localctx, 26, BattleSimParser::RuleWhileCycle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(BattleSimParser::T__20);
    setState(177);
    match(BattleSimParser::T__8);
    setState(178);
    boolexp();
    setState(179);
    match(BattleSimParser::T__10);
    setState(180);
    match(BattleSimParser::T__21);
    setState(181);
    match(BattleSimParser::T__8);
    setState(182);
    unitLogicSequence();
    setState(183);
    match(BattleSimParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttackCmdContext ------------------------------------------------------------------

BattleSimParser::AttackCmdContext::AttackCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::AttackAroundSelfCmdContext* BattleSimParser::AttackCmdContext::attackAroundSelfCmd() {
  return getRuleContext<BattleSimParser::AttackAroundSelfCmdContext>(0);
}

BattleSimParser::AttackInFrontCmdContext* BattleSimParser::AttackCmdContext::attackInFrontCmd() {
  return getRuleContext<BattleSimParser::AttackInFrontCmdContext>(0);
}

BattleSimParser::RangeAttackCmdContext* BattleSimParser::AttackCmdContext::rangeAttackCmd() {
  return getRuleContext<BattleSimParser::RangeAttackCmdContext>(0);
}


size_t BattleSimParser::AttackCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleAttackCmd;
}

void BattleSimParser::AttackCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttackCmd(this);
}

void BattleSimParser::AttackCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttackCmd(this);
}


std::any BattleSimParser::AttackCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitAttackCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::AttackCmdContext* BattleSimParser::attackCmd() {
  AttackCmdContext *_localctx = _tracker.createInstance<AttackCmdContext>(_ctx, getState());
  enterRule(_localctx, 28, BattleSimParser::RuleAttackCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__22: {
        enterOuterAlt(_localctx, 1);
        setState(185);
        attackAroundSelfCmd();
        break;
      }

      case BattleSimParser::T__23: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        attackInFrontCmd();
        break;
      }

      case BattleSimParser::T__24: {
        enterOuterAlt(_localctx, 3);
        setState(187);
        rangeAttackCmd();
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

//----------------- AttackAroundSelfCmdContext ------------------------------------------------------------------

BattleSimParser::AttackAroundSelfCmdContext::AttackAroundSelfCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::AttackAroundSelfCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleAttackAroundSelfCmd;
}

void BattleSimParser::AttackAroundSelfCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttackAroundSelfCmd(this);
}

void BattleSimParser::AttackAroundSelfCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttackAroundSelfCmd(this);
}


std::any BattleSimParser::AttackAroundSelfCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitAttackAroundSelfCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::AttackAroundSelfCmdContext* BattleSimParser::attackAroundSelfCmd() {
  AttackAroundSelfCmdContext *_localctx = _tracker.createInstance<AttackAroundSelfCmdContext>(_ctx, getState());
  enterRule(_localctx, 30, BattleSimParser::RuleAttackAroundSelfCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(BattleSimParser::T__22);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttackInFrontCmdContext ------------------------------------------------------------------

BattleSimParser::AttackInFrontCmdContext::AttackInFrontCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::AttackInFrontCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleAttackInFrontCmd;
}

void BattleSimParser::AttackInFrontCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttackInFrontCmd(this);
}

void BattleSimParser::AttackInFrontCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttackInFrontCmd(this);
}


std::any BattleSimParser::AttackInFrontCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitAttackInFrontCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::AttackInFrontCmdContext* BattleSimParser::attackInFrontCmd() {
  AttackInFrontCmdContext *_localctx = _tracker.createInstance<AttackInFrontCmdContext>(_ctx, getState());
  enterRule(_localctx, 32, BattleSimParser::RuleAttackInFrontCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(BattleSimParser::T__23);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeAttackCmdContext ------------------------------------------------------------------

BattleSimParser::RangeAttackCmdContext::RangeAttackCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::ExpContext* BattleSimParser::RangeAttackCmdContext::exp() {
  return getRuleContext<BattleSimParser::ExpContext>(0);
}


size_t BattleSimParser::RangeAttackCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleRangeAttackCmd;
}

void BattleSimParser::RangeAttackCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeAttackCmd(this);
}

void BattleSimParser::RangeAttackCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeAttackCmd(this);
}


std::any BattleSimParser::RangeAttackCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitRangeAttackCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::RangeAttackCmdContext* BattleSimParser::rangeAttackCmd() {
  RangeAttackCmdContext *_localctx = _tracker.createInstance<RangeAttackCmdContext>(_ctx, getState());
  enterRule(_localctx, 34, BattleSimParser::RuleRangeAttackCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(BattleSimParser::T__24);
    setState(195);
    exp(0);
    setState(196);
    match(BattleSimParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SkipCmdContext ------------------------------------------------------------------

BattleSimParser::SkipCmdContext::SkipCmdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::SkipCmdContext::getRuleIndex() const {
  return BattleSimParser::RuleSkipCmd;
}

void BattleSimParser::SkipCmdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSkipCmd(this);
}

void BattleSimParser::SkipCmdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSkipCmd(this);
}


std::any BattleSimParser::SkipCmdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitSkipCmd(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::SkipCmdContext* BattleSimParser::skipCmd() {
  SkipCmdContext *_localctx = _tracker.createInstance<SkipCmdContext>(_ctx, getState());
  enterRule(_localctx, 36, BattleSimParser::RuleSkipCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(BattleSimParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolexpContext ------------------------------------------------------------------

BattleSimParser::BoolexpContext::BoolexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::OrExprContext* BattleSimParser::BoolexpContext::orExpr() {
  return getRuleContext<BattleSimParser::OrExprContext>(0);
}


size_t BattleSimParser::BoolexpContext::getRuleIndex() const {
  return BattleSimParser::RuleBoolexp;
}

void BattleSimParser::BoolexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolexp(this);
}

void BattleSimParser::BoolexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolexp(this);
}


std::any BattleSimParser::BoolexpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitBoolexp(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::BoolexpContext* BattleSimParser::boolexp() {
  BoolexpContext *_localctx = _tracker.createInstance<BoolexpContext>(_ctx, getState());
  enterRule(_localctx, 38, BattleSimParser::RuleBoolexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    orExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrExprContext ------------------------------------------------------------------

BattleSimParser::OrExprContext::OrExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BattleSimParser::AndExprContext *> BattleSimParser::OrExprContext::andExpr() {
  return getRuleContexts<BattleSimParser::AndExprContext>();
}

BattleSimParser::AndExprContext* BattleSimParser::OrExprContext::andExpr(size_t i) {
  return getRuleContext<BattleSimParser::AndExprContext>(i);
}


size_t BattleSimParser::OrExprContext::getRuleIndex() const {
  return BattleSimParser::RuleOrExpr;
}

void BattleSimParser::OrExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrExpr(this);
}

void BattleSimParser::OrExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrExpr(this);
}


std::any BattleSimParser::OrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitOrExpr(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::OrExprContext* BattleSimParser::orExpr() {
  OrExprContext *_localctx = _tracker.createInstance<OrExprContext>(_ctx, getState());
  enterRule(_localctx, 40, BattleSimParser::RuleOrExpr);
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
    setState(202);
    andExpr();
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BattleSimParser::T__26) {
      setState(203);
      match(BattleSimParser::T__26);
      setState(204);
      andExpr();
      setState(209);
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

//----------------- AndExprContext ------------------------------------------------------------------

BattleSimParser::AndExprContext::AndExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BattleSimParser::NotExprContext *> BattleSimParser::AndExprContext::notExpr() {
  return getRuleContexts<BattleSimParser::NotExprContext>();
}

BattleSimParser::NotExprContext* BattleSimParser::AndExprContext::notExpr(size_t i) {
  return getRuleContext<BattleSimParser::NotExprContext>(i);
}


size_t BattleSimParser::AndExprContext::getRuleIndex() const {
  return BattleSimParser::RuleAndExpr;
}

void BattleSimParser::AndExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpr(this);
}

void BattleSimParser::AndExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpr(this);
}


std::any BattleSimParser::AndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitAndExpr(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::AndExprContext* BattleSimParser::andExpr() {
  AndExprContext *_localctx = _tracker.createInstance<AndExprContext>(_ctx, getState());
  enterRule(_localctx, 42, BattleSimParser::RuleAndExpr);
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
    setState(210);
    notExpr();
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BattleSimParser::T__27) {
      setState(211);
      match(BattleSimParser::T__27);
      setState(212);
      notExpr();
      setState(217);
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

//----------------- NotExprContext ------------------------------------------------------------------

BattleSimParser::NotExprContext::NotExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::NotExprContext* BattleSimParser::NotExprContext::notExpr() {
  return getRuleContext<BattleSimParser::NotExprContext>(0);
}

BattleSimParser::PrimaryBoolContext* BattleSimParser::NotExprContext::primaryBool() {
  return getRuleContext<BattleSimParser::PrimaryBoolContext>(0);
}


size_t BattleSimParser::NotExprContext::getRuleIndex() const {
  return BattleSimParser::RuleNotExpr;
}

void BattleSimParser::NotExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpr(this);
}

void BattleSimParser::NotExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpr(this);
}


std::any BattleSimParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::NotExprContext* BattleSimParser::notExpr() {
  NotExprContext *_localctx = _tracker.createInstance<NotExprContext>(_ctx, getState());
  enterRule(_localctx, 44, BattleSimParser::RuleNotExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__28: {
        enterOuterAlt(_localctx, 1);
        setState(218);
        match(BattleSimParser::T__28);
        setState(219);
        notExpr();
        break;
      }

      case BattleSimParser::T__8:
      case BattleSimParser::T__29:
      case BattleSimParser::T__30:
      case BattleSimParser::T__33:
      case BattleSimParser::T__34:
      case BattleSimParser::T__35:
      case BattleSimParser::T__36:
      case BattleSimParser::T__37:
      case BattleSimParser::T__38:
      case BattleSimParser::T__39:
      case BattleSimParser::T__40:
      case BattleSimParser::T__41:
      case BattleSimParser::ORIENTATION:
      case BattleSimParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(220);
        primaryBool();
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

//----------------- PrimaryBoolContext ------------------------------------------------------------------

BattleSimParser::PrimaryBoolContext::PrimaryBoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::TrueContext* BattleSimParser::PrimaryBoolContext::true_() {
  return getRuleContext<BattleSimParser::TrueContext>(0);
}

BattleSimParser::FalseContext* BattleSimParser::PrimaryBoolContext::false_() {
  return getRuleContext<BattleSimParser::FalseContext>(0);
}

BattleSimParser::ParenthesesBoolContext* BattleSimParser::PrimaryBoolContext::parenthesesBool() {
  return getRuleContext<BattleSimParser::ParenthesesBoolContext>(0);
}

BattleSimParser::ComparisonBoolContext* BattleSimParser::PrimaryBoolContext::comparisonBool() {
  return getRuleContext<BattleSimParser::ComparisonBoolContext>(0);
}

BattleSimParser::OrientationEqualityCheckContext* BattleSimParser::PrimaryBoolContext::orientationEqualityCheck() {
  return getRuleContext<BattleSimParser::OrientationEqualityCheckContext>(0);
}

BattleSimParser::BlockCheckContext* BattleSimParser::PrimaryBoolContext::blockCheck() {
  return getRuleContext<BattleSimParser::BlockCheckContext>(0);
}

BattleSimParser::OrientationCheckContext* BattleSimParser::PrimaryBoolContext::orientationCheck() {
  return getRuleContext<BattleSimParser::OrientationCheckContext>(0);
}

BattleSimParser::EnemyNearbyCheckContext* BattleSimParser::PrimaryBoolContext::enemyNearbyCheck() {
  return getRuleContext<BattleSimParser::EnemyNearbyCheckContext>(0);
}


size_t BattleSimParser::PrimaryBoolContext::getRuleIndex() const {
  return BattleSimParser::RulePrimaryBool;
}

void BattleSimParser::PrimaryBoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryBool(this);
}

void BattleSimParser::PrimaryBoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryBool(this);
}


std::any BattleSimParser::PrimaryBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitPrimaryBool(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::PrimaryBoolContext* BattleSimParser::primaryBool() {
  PrimaryBoolContext *_localctx = _tracker.createInstance<PrimaryBoolContext>(_ctx, getState());
  enterRule(_localctx, 46, BattleSimParser::RulePrimaryBool);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(231);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(223);
      true_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(224);
      false_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(225);
      parenthesesBool();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(226);
      comparisonBool();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(227);
      orientationEqualityCheck();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(228);
      blockCheck();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(229);
      orientationCheck();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(230);
      enemyNearbyCheck();
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

//----------------- TrueContext ------------------------------------------------------------------

BattleSimParser::TrueContext::TrueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::TrueContext::getRuleIndex() const {
  return BattleSimParser::RuleTrue;
}

void BattleSimParser::TrueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrue(this);
}

void BattleSimParser::TrueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrue(this);
}


std::any BattleSimParser::TrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitTrue(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::TrueContext* BattleSimParser::true_() {
  TrueContext *_localctx = _tracker.createInstance<TrueContext>(_ctx, getState());
  enterRule(_localctx, 48, BattleSimParser::RuleTrue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(BattleSimParser::T__29);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FalseContext ------------------------------------------------------------------

BattleSimParser::FalseContext::FalseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::FalseContext::getRuleIndex() const {
  return BattleSimParser::RuleFalse;
}

void BattleSimParser::FalseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFalse(this);
}

void BattleSimParser::FalseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFalse(this);
}


std::any BattleSimParser::FalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitFalse(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::FalseContext* BattleSimParser::false_() {
  FalseContext *_localctx = _tracker.createInstance<FalseContext>(_ctx, getState());
  enterRule(_localctx, 50, BattleSimParser::RuleFalse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(BattleSimParser::T__30);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesesBoolContext ------------------------------------------------------------------

BattleSimParser::ParenthesesBoolContext::ParenthesesBoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::BoolexpContext* BattleSimParser::ParenthesesBoolContext::boolexp() {
  return getRuleContext<BattleSimParser::BoolexpContext>(0);
}


size_t BattleSimParser::ParenthesesBoolContext::getRuleIndex() const {
  return BattleSimParser::RuleParenthesesBool;
}

void BattleSimParser::ParenthesesBoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesesBool(this);
}

void BattleSimParser::ParenthesesBoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesesBool(this);
}


std::any BattleSimParser::ParenthesesBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitParenthesesBool(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::ParenthesesBoolContext* BattleSimParser::parenthesesBool() {
  ParenthesesBoolContext *_localctx = _tracker.createInstance<ParenthesesBoolContext>(_ctx, getState());
  enterRule(_localctx, 52, BattleSimParser::RuleParenthesesBool);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(BattleSimParser::T__8);
    setState(238);
    boolexp();
    setState(239);
    match(BattleSimParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonBoolContext ------------------------------------------------------------------

BattleSimParser::ComparisonBoolContext::ComparisonBoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BattleSimParser::ExpContext *> BattleSimParser::ComparisonBoolContext::exp() {
  return getRuleContexts<BattleSimParser::ExpContext>();
}

BattleSimParser::ExpContext* BattleSimParser::ComparisonBoolContext::exp(size_t i) {
  return getRuleContext<BattleSimParser::ExpContext>(i);
}

tree::TerminalNode* BattleSimParser::ComparisonBoolContext::COMPSYMBOL() {
  return getToken(BattleSimParser::COMPSYMBOL, 0);
}


size_t BattleSimParser::ComparisonBoolContext::getRuleIndex() const {
  return BattleSimParser::RuleComparisonBool;
}

void BattleSimParser::ComparisonBoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonBool(this);
}

void BattleSimParser::ComparisonBoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonBool(this);
}


std::any BattleSimParser::ComparisonBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitComparisonBool(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::ComparisonBoolContext* BattleSimParser::comparisonBool() {
  ComparisonBoolContext *_localctx = _tracker.createInstance<ComparisonBoolContext>(_ctx, getState());
  enterRule(_localctx, 54, BattleSimParser::RuleComparisonBool);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    exp(0);
    setState(242);
    match(BattleSimParser::COMPSYMBOL);
    setState(243);
    exp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrientationEqualityCheckContext ------------------------------------------------------------------

BattleSimParser::OrientationEqualityCheckContext::OrientationEqualityCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BattleSimParser::OrientationContext *> BattleSimParser::OrientationEqualityCheckContext::orientation() {
  return getRuleContexts<BattleSimParser::OrientationContext>();
}

BattleSimParser::OrientationContext* BattleSimParser::OrientationEqualityCheckContext::orientation(size_t i) {
  return getRuleContext<BattleSimParser::OrientationContext>(i);
}


size_t BattleSimParser::OrientationEqualityCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleOrientationEqualityCheck;
}

void BattleSimParser::OrientationEqualityCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrientationEqualityCheck(this);
}

void BattleSimParser::OrientationEqualityCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrientationEqualityCheck(this);
}


std::any BattleSimParser::OrientationEqualityCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitOrientationEqualityCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::OrientationEqualityCheckContext* BattleSimParser::orientationEqualityCheck() {
  OrientationEqualityCheckContext *_localctx = _tracker.createInstance<OrientationEqualityCheckContext>(_ctx, getState());
  enterRule(_localctx, 56, BattleSimParser::RuleOrientationEqualityCheck);
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
    setState(245);
    orientation();
    setState(246);
    _la = _input->LA(1);
    if (!(_la == BattleSimParser::T__31

    || _la == BattleSimParser::T__32)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(247);
    orientation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnemyNearbyCheckContext ------------------------------------------------------------------

BattleSimParser::EnemyNearbyCheckContext::EnemyNearbyCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::EnemyNearbyCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleEnemyNearbyCheck;
}

void BattleSimParser::EnemyNearbyCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnemyNearbyCheck(this);
}

void BattleSimParser::EnemyNearbyCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnemyNearbyCheck(this);
}


std::any BattleSimParser::EnemyNearbyCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitEnemyNearbyCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::EnemyNearbyCheckContext* BattleSimParser::enemyNearbyCheck() {
  EnemyNearbyCheckContext *_localctx = _tracker.createInstance<EnemyNearbyCheckContext>(_ctx, getState());
  enterRule(_localctx, 58, BattleSimParser::RuleEnemyNearbyCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(BattleSimParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockCheckContext ------------------------------------------------------------------

BattleSimParser::BlockCheckContext::BlockCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::IsFrontClearCheckContext* BattleSimParser::BlockCheckContext::isFrontClearCheck() {
  return getRuleContext<BattleSimParser::IsFrontClearCheckContext>(0);
}

BattleSimParser::IsFrontBlockedCheckContext* BattleSimParser::BlockCheckContext::isFrontBlockedCheck() {
  return getRuleContext<BattleSimParser::IsFrontBlockedCheckContext>(0);
}


size_t BattleSimParser::BlockCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleBlockCheck;
}

void BattleSimParser::BlockCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockCheck(this);
}

void BattleSimParser::BlockCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockCheck(this);
}


std::any BattleSimParser::BlockCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitBlockCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::BlockCheckContext* BattleSimParser::blockCheck() {
  BlockCheckContext *_localctx = _tracker.createInstance<BlockCheckContext>(_ctx, getState());
  enterRule(_localctx, 60, BattleSimParser::RuleBlockCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(253);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__34: {
        enterOuterAlt(_localctx, 1);
        setState(251);
        isFrontClearCheck();
        break;
      }

      case BattleSimParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(252);
        isFrontBlockedCheck();
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

//----------------- IsFrontClearCheckContext ------------------------------------------------------------------

BattleSimParser::IsFrontClearCheckContext::IsFrontClearCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::IsFrontClearCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleIsFrontClearCheck;
}

void BattleSimParser::IsFrontClearCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsFrontClearCheck(this);
}

void BattleSimParser::IsFrontClearCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsFrontClearCheck(this);
}


std::any BattleSimParser::IsFrontClearCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitIsFrontClearCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::IsFrontClearCheckContext* BattleSimParser::isFrontClearCheck() {
  IsFrontClearCheckContext *_localctx = _tracker.createInstance<IsFrontClearCheckContext>(_ctx, getState());
  enterRule(_localctx, 62, BattleSimParser::RuleIsFrontClearCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(BattleSimParser::T__34);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IsFrontBlockedCheckContext ------------------------------------------------------------------

BattleSimParser::IsFrontBlockedCheckContext::IsFrontBlockedCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::IsFrontBlockedCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleIsFrontBlockedCheck;
}

void BattleSimParser::IsFrontBlockedCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsFrontBlockedCheck(this);
}

void BattleSimParser::IsFrontBlockedCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsFrontBlockedCheck(this);
}


std::any BattleSimParser::IsFrontBlockedCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitIsFrontBlockedCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::IsFrontBlockedCheckContext* BattleSimParser::isFrontBlockedCheck() {
  IsFrontBlockedCheckContext *_localctx = _tracker.createInstance<IsFrontBlockedCheckContext>(_ctx, getState());
  enterRule(_localctx, 64, BattleSimParser::RuleIsFrontBlockedCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(BattleSimParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrientationCheckContext ------------------------------------------------------------------

BattleSimParser::OrientationCheckContext::OrientationCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::FacingNCheckContext* BattleSimParser::OrientationCheckContext::facingNCheck() {
  return getRuleContext<BattleSimParser::FacingNCheckContext>(0);
}

BattleSimParser::FacingWCheckContext* BattleSimParser::OrientationCheckContext::facingWCheck() {
  return getRuleContext<BattleSimParser::FacingWCheckContext>(0);
}

BattleSimParser::FacingECheckContext* BattleSimParser::OrientationCheckContext::facingECheck() {
  return getRuleContext<BattleSimParser::FacingECheckContext>(0);
}

BattleSimParser::FacingSCheckContext* BattleSimParser::OrientationCheckContext::facingSCheck() {
  return getRuleContext<BattleSimParser::FacingSCheckContext>(0);
}


size_t BattleSimParser::OrientationCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleOrientationCheck;
}

void BattleSimParser::OrientationCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrientationCheck(this);
}

void BattleSimParser::OrientationCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrientationCheck(this);
}


std::any BattleSimParser::OrientationCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitOrientationCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::OrientationCheckContext* BattleSimParser::orientationCheck() {
  OrientationCheckContext *_localctx = _tracker.createInstance<OrientationCheckContext>(_ctx, getState());
  enterRule(_localctx, 66, BattleSimParser::RuleOrientationCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__36: {
        enterOuterAlt(_localctx, 1);
        setState(259);
        facingNCheck();
        break;
      }

      case BattleSimParser::T__37: {
        enterOuterAlt(_localctx, 2);
        setState(260);
        facingWCheck();
        break;
      }

      case BattleSimParser::T__38: {
        enterOuterAlt(_localctx, 3);
        setState(261);
        facingECheck();
        break;
      }

      case BattleSimParser::T__39: {
        enterOuterAlt(_localctx, 4);
        setState(262);
        facingSCheck();
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

//----------------- FacingNCheckContext ------------------------------------------------------------------

BattleSimParser::FacingNCheckContext::FacingNCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::FacingNCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleFacingNCheck;
}

void BattleSimParser::FacingNCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFacingNCheck(this);
}

void BattleSimParser::FacingNCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFacingNCheck(this);
}


std::any BattleSimParser::FacingNCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitFacingNCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::FacingNCheckContext* BattleSimParser::facingNCheck() {
  FacingNCheckContext *_localctx = _tracker.createInstance<FacingNCheckContext>(_ctx, getState());
  enterRule(_localctx, 68, BattleSimParser::RuleFacingNCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(BattleSimParser::T__36);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FacingWCheckContext ------------------------------------------------------------------

BattleSimParser::FacingWCheckContext::FacingWCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::FacingWCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleFacingWCheck;
}

void BattleSimParser::FacingWCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFacingWCheck(this);
}

void BattleSimParser::FacingWCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFacingWCheck(this);
}


std::any BattleSimParser::FacingWCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitFacingWCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::FacingWCheckContext* BattleSimParser::facingWCheck() {
  FacingWCheckContext *_localctx = _tracker.createInstance<FacingWCheckContext>(_ctx, getState());
  enterRule(_localctx, 70, BattleSimParser::RuleFacingWCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(BattleSimParser::T__37);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FacingECheckContext ------------------------------------------------------------------

BattleSimParser::FacingECheckContext::FacingECheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::FacingECheckContext::getRuleIndex() const {
  return BattleSimParser::RuleFacingECheck;
}

void BattleSimParser::FacingECheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFacingECheck(this);
}

void BattleSimParser::FacingECheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFacingECheck(this);
}


std::any BattleSimParser::FacingECheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitFacingECheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::FacingECheckContext* BattleSimParser::facingECheck() {
  FacingECheckContext *_localctx = _tracker.createInstance<FacingECheckContext>(_ctx, getState());
  enterRule(_localctx, 72, BattleSimParser::RuleFacingECheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(BattleSimParser::T__38);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FacingSCheckContext ------------------------------------------------------------------

BattleSimParser::FacingSCheckContext::FacingSCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::FacingSCheckContext::getRuleIndex() const {
  return BattleSimParser::RuleFacingSCheck;
}

void BattleSimParser::FacingSCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFacingSCheck(this);
}

void BattleSimParser::FacingSCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFacingSCheck(this);
}


std::any BattleSimParser::FacingSCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitFacingSCheck(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::FacingSCheckContext* BattleSimParser::facingSCheck() {
  FacingSCheckContext *_localctx = _tracker.createInstance<FacingSCheckContext>(_ctx, getState());
  enterRule(_localctx, 74, BattleSimParser::RuleFacingSCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(BattleSimParser::T__39);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrientationContext ------------------------------------------------------------------

BattleSimParser::OrientationContext::OrientationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BattleSimParser::OrientationContext::ORIENTATION() {
  return getToken(BattleSimParser::ORIENTATION, 0);
}

BattleSimParser::GetNearbyEnemyOrientationContext* BattleSimParser::OrientationContext::getNearbyEnemyOrientation() {
  return getRuleContext<BattleSimParser::GetNearbyEnemyOrientationContext>(0);
}

BattleSimParser::GetMyOrientationContext* BattleSimParser::OrientationContext::getMyOrientation() {
  return getRuleContext<BattleSimParser::GetMyOrientationContext>(0);
}


size_t BattleSimParser::OrientationContext::getRuleIndex() const {
  return BattleSimParser::RuleOrientation;
}

void BattleSimParser::OrientationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrientation(this);
}

void BattleSimParser::OrientationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrientation(this);
}


std::any BattleSimParser::OrientationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitOrientation(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::OrientationContext* BattleSimParser::orientation() {
  OrientationContext *_localctx = _tracker.createInstance<OrientationContext>(_ctx, getState());
  enterRule(_localctx, 76, BattleSimParser::RuleOrientation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::ORIENTATION: {
        enterOuterAlt(_localctx, 1);
        setState(273);
        match(BattleSimParser::ORIENTATION);
        break;
      }

      case BattleSimParser::T__40: {
        enterOuterAlt(_localctx, 2);
        setState(274);
        getNearbyEnemyOrientation();
        break;
      }

      case BattleSimParser::T__41: {
        enterOuterAlt(_localctx, 3);
        setState(275);
        getMyOrientation();
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

//----------------- GetNearbyEnemyOrientationContext ------------------------------------------------------------------

BattleSimParser::GetNearbyEnemyOrientationContext::GetNearbyEnemyOrientationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::GetNearbyEnemyOrientationContext::getRuleIndex() const {
  return BattleSimParser::RuleGetNearbyEnemyOrientation;
}

void BattleSimParser::GetNearbyEnemyOrientationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetNearbyEnemyOrientation(this);
}

void BattleSimParser::GetNearbyEnemyOrientationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetNearbyEnemyOrientation(this);
}


std::any BattleSimParser::GetNearbyEnemyOrientationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitGetNearbyEnemyOrientation(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::GetNearbyEnemyOrientationContext* BattleSimParser::getNearbyEnemyOrientation() {
  GetNearbyEnemyOrientationContext *_localctx = _tracker.createInstance<GetNearbyEnemyOrientationContext>(_ctx, getState());
  enterRule(_localctx, 78, BattleSimParser::RuleGetNearbyEnemyOrientation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(BattleSimParser::T__40);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetMyOrientationContext ------------------------------------------------------------------

BattleSimParser::GetMyOrientationContext::GetMyOrientationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BattleSimParser::GetMyOrientationContext::getRuleIndex() const {
  return BattleSimParser::RuleGetMyOrientation;
}

void BattleSimParser::GetMyOrientationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetMyOrientation(this);
}

void BattleSimParser::GetMyOrientationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetMyOrientation(this);
}


std::any BattleSimParser::GetMyOrientationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitGetMyOrientation(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::GetMyOrientationContext* BattleSimParser::getMyOrientation() {
  GetMyOrientationContext *_localctx = _tracker.createInstance<GetMyOrientationContext>(_ctx, getState());
  enterRule(_localctx, 80, BattleSimParser::RuleGetMyOrientation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(BattleSimParser::T__41);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

BattleSimParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::AtomicExpContext* BattleSimParser::ExpContext::atomicExp() {
  return getRuleContext<BattleSimParser::AtomicExpContext>(0);
}

BattleSimParser::ParenthesesExpContext* BattleSimParser::ExpContext::parenthesesExp() {
  return getRuleContext<BattleSimParser::ParenthesesExpContext>(0);
}

std::vector<BattleSimParser::ExpContext *> BattleSimParser::ExpContext::exp() {
  return getRuleContexts<BattleSimParser::ExpContext>();
}

BattleSimParser::ExpContext* BattleSimParser::ExpContext::exp(size_t i) {
  return getRuleContext<BattleSimParser::ExpContext>(i);
}

tree::TerminalNode* BattleSimParser::ExpContext::MATHSYMBOL() {
  return getToken(BattleSimParser::MATHSYMBOL, 0);
}


size_t BattleSimParser::ExpContext::getRuleIndex() const {
  return BattleSimParser::RuleExp;
}

void BattleSimParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void BattleSimParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


std::any BattleSimParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}


BattleSimParser::ExpContext* BattleSimParser::exp() {
   return exp(0);
}

BattleSimParser::ExpContext* BattleSimParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BattleSimParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  BattleSimParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, BattleSimParser::RuleExp, precedence);

    

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
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::NUMBER: {
        setState(283);
        atomicExp();
        break;
      }

      case BattleSimParser::T__8: {
        setState(284);
        parenthesesExp();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExp);
        setState(287);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(288);
        match(BattleSimParser::MATHSYMBOL);
        setState(289);
        exp(3); 
      }
      setState(294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomicExpContext ------------------------------------------------------------------

BattleSimParser::AtomicExpContext::AtomicExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BattleSimParser::AtomicExpContext::NUMBER() {
  return getToken(BattleSimParser::NUMBER, 0);
}


size_t BattleSimParser::AtomicExpContext::getRuleIndex() const {
  return BattleSimParser::RuleAtomicExp;
}

void BattleSimParser::AtomicExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicExp(this);
}

void BattleSimParser::AtomicExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicExp(this);
}


std::any BattleSimParser::AtomicExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitAtomicExp(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::AtomicExpContext* BattleSimParser::atomicExp() {
  AtomicExpContext *_localctx = _tracker.createInstance<AtomicExpContext>(_ctx, getState());
  enterRule(_localctx, 84, BattleSimParser::RuleAtomicExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(BattleSimParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesesExpContext ------------------------------------------------------------------

BattleSimParser::ParenthesesExpContext::ParenthesesExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::ExpContext* BattleSimParser::ParenthesesExpContext::exp() {
  return getRuleContext<BattleSimParser::ExpContext>(0);
}


size_t BattleSimParser::ParenthesesExpContext::getRuleIndex() const {
  return BattleSimParser::RuleParenthesesExp;
}

void BattleSimParser::ParenthesesExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesesExp(this);
}

void BattleSimParser::ParenthesesExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BattleSimListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesesExp(this);
}


std::any BattleSimParser::ParenthesesExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BattleSimVisitor*>(visitor))
    return parserVisitor->visitParenthesesExp(this);
  else
    return visitor->visitChildren(this);
}

BattleSimParser::ParenthesesExpContext* BattleSimParser::parenthesesExp() {
  ParenthesesExpContext *_localctx = _tracker.createInstance<ParenthesesExpContext>(_ctx, getState());
  enterRule(_localctx, 86, BattleSimParser::RuleParenthesesExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(BattleSimParser::T__8);
    setState(298);
    exp(0);
    setState(299);
    match(BattleSimParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BattleSimParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 41: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BattleSimParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void BattleSimParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  battlesimParserInitialize();
#else
  ::antlr4::internal::call_once(battlesimParserOnceFlag, battlesimParserInitialize);
#endif
}
