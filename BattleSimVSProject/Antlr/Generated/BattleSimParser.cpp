
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
      "logicCommand", "moveCmd", "turnCmd", "ifCondition", "whileCycle", 
      "attackCmd", "boolexp", "orExpr", "andExpr", "notExpr", "primaryBool", 
      "blockCheck", "orientationCheck", "orientation", "exp"
    },
    std::vector<std::string>{
      "", "'TeamBlue {'", "'} TeamRed {'", "'}'", "'x'", "';'", "'unit'", 
      "'at ('", "','", "') {'", "'health:'", "'attack:'", "'{'", "'MoveForward()'", 
      "'TurnLeft()'", "'TurnRight()'", "'Turn('", "')'", "'if ('", "') then ('", 
      "') else ('", "'while ('", "') do ('", "'AttackAroundSelf()'", "'AttackInFront()'", 
      "'RangeAttack('", "'||'", "'&&'", "'!'", "'true'", "'false'", "'('", 
      "'=='", "'!='", "'IsEnemyNearby()'", "'IsFrontClear()'", "'IsFrontBlocked()'", 
      "'FacingNorth()'", "'FacingWest()'", "'FacingEast()'", "'FacingSouth()'", 
      "'GetNearbyEnemyOrientation()'", "'GetMyOrientation'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "MATHSYMBOL", "COMPSYMBOL", "ORIENTATION", 
      "NAME", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,48,199,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,60,
  	8,2,10,2,12,2,63,9,2,3,2,65,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,89,8,5,10,5,12,
  	5,92,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,3,6,101,8,6,1,7,1,7,1,8,1,8,1,8,
  	1,8,1,8,1,8,3,8,111,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,133,8,11,1,12,1,12,
  	1,13,1,13,1,13,5,13,140,8,13,10,13,12,13,143,9,13,1,14,1,14,1,14,5,14,
  	148,8,14,10,14,12,14,151,9,14,1,15,1,15,1,15,3,15,156,8,15,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,3,16,175,8,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,20,1,20,3,20,189,8,20,1,20,1,20,1,20,5,20,194,8,20,10,20,12,20,197,
  	9,20,1,20,0,1,40,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,0,4,1,0,32,33,1,0,35,36,1,0,37,40,2,0,41,42,45,45,200,0,42,1,
  	0,0,0,2,49,1,0,0,0,4,64,1,0,0,0,6,66,1,0,0,0,8,77,1,0,0,0,10,84,1,0,0,
  	0,12,100,1,0,0,0,14,102,1,0,0,0,16,110,1,0,0,0,18,112,1,0,0,0,20,120,
  	1,0,0,0,22,132,1,0,0,0,24,134,1,0,0,0,26,136,1,0,0,0,28,144,1,0,0,0,30,
  	155,1,0,0,0,32,174,1,0,0,0,34,176,1,0,0,0,36,178,1,0,0,0,38,180,1,0,0,
  	0,40,188,1,0,0,0,42,43,3,2,1,0,43,44,5,1,0,0,44,45,3,4,2,0,45,46,5,2,
  	0,0,46,47,3,4,2,0,47,48,5,3,0,0,48,1,1,0,0,0,49,50,5,47,0,0,50,51,5,4,
  	0,0,51,52,5,47,0,0,52,3,1,0,0,0,53,54,3,6,3,0,54,55,5,5,0,0,55,65,1,0,
  	0,0,56,57,3,6,3,0,57,58,5,5,0,0,58,60,1,0,0,0,59,56,1,0,0,0,60,63,1,0,
  	0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,64,53,1,0,
  	0,0,64,61,1,0,0,0,65,5,1,0,0,0,66,67,5,6,0,0,67,68,5,46,0,0,68,69,5,7,
  	0,0,69,70,5,47,0,0,70,71,5,8,0,0,71,72,5,47,0,0,72,73,5,9,0,0,73,74,3,
  	8,4,0,74,75,3,10,5,0,75,76,5,3,0,0,76,7,1,0,0,0,77,78,5,10,0,0,78,79,
  	5,47,0,0,79,80,5,5,0,0,80,81,5,11,0,0,81,82,5,47,0,0,82,83,5,5,0,0,83,
  	9,1,0,0,0,84,90,5,12,0,0,85,86,3,12,6,0,86,87,5,5,0,0,87,89,1,0,0,0,88,
  	85,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,
  	90,1,0,0,0,93,94,5,3,0,0,94,11,1,0,0,0,95,101,3,14,7,0,96,101,3,16,8,
  	0,97,101,3,18,9,0,98,101,3,20,10,0,99,101,3,22,11,0,100,95,1,0,0,0,100,
  	96,1,0,0,0,100,97,1,0,0,0,100,98,1,0,0,0,100,99,1,0,0,0,101,13,1,0,0,
  	0,102,103,5,13,0,0,103,15,1,0,0,0,104,111,5,14,0,0,105,111,5,15,0,0,106,
  	107,5,16,0,0,107,108,3,38,19,0,108,109,5,17,0,0,109,111,1,0,0,0,110,104,
  	1,0,0,0,110,105,1,0,0,0,110,106,1,0,0,0,111,17,1,0,0,0,112,113,5,18,0,
  	0,113,114,3,24,12,0,114,115,5,19,0,0,115,116,3,12,6,0,116,117,5,20,0,
  	0,117,118,3,12,6,0,118,119,5,17,0,0,119,19,1,0,0,0,120,121,5,21,0,0,121,
  	122,3,24,12,0,122,123,5,22,0,0,123,124,3,12,6,0,124,125,5,17,0,0,125,
  	21,1,0,0,0,126,133,5,23,0,0,127,133,5,24,0,0,128,129,5,25,0,0,129,130,
  	3,40,20,0,130,131,5,17,0,0,131,133,1,0,0,0,132,126,1,0,0,0,132,127,1,
  	0,0,0,132,128,1,0,0,0,133,23,1,0,0,0,134,135,3,26,13,0,135,25,1,0,0,0,
  	136,141,3,28,14,0,137,138,5,26,0,0,138,140,3,28,14,0,139,137,1,0,0,0,
  	140,143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,27,1,0,0,0,143,141,
  	1,0,0,0,144,149,3,30,15,0,145,146,5,27,0,0,146,148,3,30,15,0,147,145,
  	1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,29,1,0,0,
  	0,151,149,1,0,0,0,152,153,5,28,0,0,153,156,3,30,15,0,154,156,3,32,16,
  	0,155,152,1,0,0,0,155,154,1,0,0,0,156,31,1,0,0,0,157,175,5,29,0,0,158,
  	175,5,30,0,0,159,160,5,31,0,0,160,161,3,24,12,0,161,162,5,17,0,0,162,
  	175,1,0,0,0,163,164,3,40,20,0,164,165,5,44,0,0,165,166,3,40,20,0,166,
  	175,1,0,0,0,167,168,3,38,19,0,168,169,7,0,0,0,169,170,3,38,19,0,170,175,
  	1,0,0,0,171,175,3,34,17,0,172,175,3,36,18,0,173,175,5,34,0,0,174,157,
  	1,0,0,0,174,158,1,0,0,0,174,159,1,0,0,0,174,163,1,0,0,0,174,167,1,0,0,
  	0,174,171,1,0,0,0,174,172,1,0,0,0,174,173,1,0,0,0,175,33,1,0,0,0,176,
  	177,7,1,0,0,177,35,1,0,0,0,178,179,7,2,0,0,179,37,1,0,0,0,180,181,7,3,
  	0,0,181,39,1,0,0,0,182,183,6,20,-1,0,183,189,5,47,0,0,184,185,5,31,0,
  	0,185,186,3,40,20,0,186,187,5,17,0,0,187,189,1,0,0,0,188,182,1,0,0,0,
  	188,184,1,0,0,0,189,195,1,0,0,0,190,191,10,2,0,0,191,192,5,43,0,0,192,
  	194,3,40,20,3,193,190,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,
  	1,0,0,0,196,41,1,0,0,0,197,195,1,0,0,0,12,61,64,90,100,110,132,141,149,
  	155,174,188,195
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
    setState(42);
    map();
    setState(43);
    match(BattleSimParser::T__0);
    setState(44);
    teamDef();
    setState(45);
    match(BattleSimParser::T__1);
    setState(46);
    teamDef();
    setState(47);
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
    setState(49);
    match(BattleSimParser::NUMBER);
    setState(50);
    match(BattleSimParser::T__3);
    setState(51);
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
    setState(64);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      unitDef();
      setState(54);
      match(BattleSimParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BattleSimParser::T__5) {
        setState(56);
        unitDef();
        setState(57);
        match(BattleSimParser::T__4);
        setState(63);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
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
    setState(66);
    match(BattleSimParser::T__5);
    setState(67);
    match(BattleSimParser::NAME);
    setState(68);
    match(BattleSimParser::T__6);
    setState(69);
    match(BattleSimParser::NUMBER);
    setState(70);
    match(BattleSimParser::T__7);
    setState(71);
    match(BattleSimParser::NUMBER);
    setState(72);
    match(BattleSimParser::T__8);
    setState(73);
    unitStats();
    setState(74);
    unitLogicSequence();
    setState(75);
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
    setState(77);
    match(BattleSimParser::T__9);
    setState(78);
    match(BattleSimParser::NUMBER);
    setState(79);
    match(BattleSimParser::T__4);
    setState(80);
    match(BattleSimParser::T__10);
    setState(81);
    match(BattleSimParser::NUMBER);
    setState(82);
    match(BattleSimParser::T__4);
   
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
    setState(84);
    match(BattleSimParser::T__11);
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 61202432) != 0)) {
      setState(85);
      logicCommand();
      setState(86);
      match(BattleSimParser::T__4);
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
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
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__12: {
        enterOuterAlt(_localctx, 1);
        setState(95);
        moveCmd();
        break;
      }

      case BattleSimParser::T__13:
      case BattleSimParser::T__14:
      case BattleSimParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(96);
        turnCmd();
        break;
      }

      case BattleSimParser::T__17: {
        enterOuterAlt(_localctx, 3);
        setState(97);
        ifCondition();
        break;
      }

      case BattleSimParser::T__20: {
        enterOuterAlt(_localctx, 4);
        setState(98);
        whileCycle();
        break;
      }

      case BattleSimParser::T__22:
      case BattleSimParser::T__23:
      case BattleSimParser::T__24: {
        enterOuterAlt(_localctx, 5);
        setState(99);
        attackCmd();
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
    setState(102);
    match(BattleSimParser::T__12);
   
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

BattleSimParser::OrientationContext* BattleSimParser::TurnCmdContext::orientation() {
  return getRuleContext<BattleSimParser::OrientationContext>(0);
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
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        match(BattleSimParser::T__13);
        break;
      }

      case BattleSimParser::T__14: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(BattleSimParser::T__14);
        break;
      }

      case BattleSimParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(106);
        match(BattleSimParser::T__15);
        setState(107);
        orientation();
        setState(108);
        match(BattleSimParser::T__16);
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

//----------------- IfConditionContext ------------------------------------------------------------------

BattleSimParser::IfConditionContext::IfConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BattleSimParser::BoolexpContext* BattleSimParser::IfConditionContext::boolexp() {
  return getRuleContext<BattleSimParser::BoolexpContext>(0);
}

std::vector<BattleSimParser::LogicCommandContext *> BattleSimParser::IfConditionContext::logicCommand() {
  return getRuleContexts<BattleSimParser::LogicCommandContext>();
}

BattleSimParser::LogicCommandContext* BattleSimParser::IfConditionContext::logicCommand(size_t i) {
  return getRuleContext<BattleSimParser::LogicCommandContext>(i);
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
  enterRule(_localctx, 18, BattleSimParser::RuleIfCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(BattleSimParser::T__17);
    setState(113);
    boolexp();
    setState(114);
    match(BattleSimParser::T__18);
    setState(115);
    logicCommand();
    setState(116);
    match(BattleSimParser::T__19);
    setState(117);
    logicCommand();
    setState(118);
    match(BattleSimParser::T__16);
   
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

BattleSimParser::LogicCommandContext* BattleSimParser::WhileCycleContext::logicCommand() {
  return getRuleContext<BattleSimParser::LogicCommandContext>(0);
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
  enterRule(_localctx, 20, BattleSimParser::RuleWhileCycle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(BattleSimParser::T__20);
    setState(121);
    boolexp();
    setState(122);
    match(BattleSimParser::T__21);
    setState(123);
    logicCommand();
    setState(124);
    match(BattleSimParser::T__16);
   
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

BattleSimParser::ExpContext* BattleSimParser::AttackCmdContext::exp() {
  return getRuleContext<BattleSimParser::ExpContext>(0);
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
  enterRule(_localctx, 22, BattleSimParser::RuleAttackCmd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(132);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__22: {
        enterOuterAlt(_localctx, 1);
        setState(126);
        match(BattleSimParser::T__22);
        break;
      }

      case BattleSimParser::T__23: {
        enterOuterAlt(_localctx, 2);
        setState(127);
        match(BattleSimParser::T__23);
        break;
      }

      case BattleSimParser::T__24: {
        enterOuterAlt(_localctx, 3);
        setState(128);
        match(BattleSimParser::T__24);
        setState(129);
        exp(0);
        setState(130);
        match(BattleSimParser::T__16);
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
  enterRule(_localctx, 24, BattleSimParser::RuleBoolexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
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
  enterRule(_localctx, 26, BattleSimParser::RuleOrExpr);
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
    setState(136);
    andExpr();
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BattleSimParser::T__25) {
      setState(137);
      match(BattleSimParser::T__25);
      setState(138);
      andExpr();
      setState(143);
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
  enterRule(_localctx, 28, BattleSimParser::RuleAndExpr);
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
    setState(144);
    notExpr();
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BattleSimParser::T__26) {
      setState(145);
      match(BattleSimParser::T__26);
      setState(146);
      notExpr();
      setState(151);
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
  enterRule(_localctx, 30, BattleSimParser::RuleNotExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::T__27: {
        enterOuterAlt(_localctx, 1);
        setState(152);
        match(BattleSimParser::T__27);
        setState(153);
        notExpr();
        break;
      }

      case BattleSimParser::T__28:
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
        setState(154);
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

BattleSimParser::BoolexpContext* BattleSimParser::PrimaryBoolContext::boolexp() {
  return getRuleContext<BattleSimParser::BoolexpContext>(0);
}

std::vector<BattleSimParser::ExpContext *> BattleSimParser::PrimaryBoolContext::exp() {
  return getRuleContexts<BattleSimParser::ExpContext>();
}

BattleSimParser::ExpContext* BattleSimParser::PrimaryBoolContext::exp(size_t i) {
  return getRuleContext<BattleSimParser::ExpContext>(i);
}

tree::TerminalNode* BattleSimParser::PrimaryBoolContext::COMPSYMBOL() {
  return getToken(BattleSimParser::COMPSYMBOL, 0);
}

std::vector<BattleSimParser::OrientationContext *> BattleSimParser::PrimaryBoolContext::orientation() {
  return getRuleContexts<BattleSimParser::OrientationContext>();
}

BattleSimParser::OrientationContext* BattleSimParser::PrimaryBoolContext::orientation(size_t i) {
  return getRuleContext<BattleSimParser::OrientationContext>(i);
}

BattleSimParser::BlockCheckContext* BattleSimParser::PrimaryBoolContext::blockCheck() {
  return getRuleContext<BattleSimParser::BlockCheckContext>(0);
}

BattleSimParser::OrientationCheckContext* BattleSimParser::PrimaryBoolContext::orientationCheck() {
  return getRuleContext<BattleSimParser::OrientationCheckContext>(0);
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
  enterRule(_localctx, 32, BattleSimParser::RulePrimaryBool);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(174);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(157);
      match(BattleSimParser::T__28);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(158);
      match(BattleSimParser::T__29);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(159);
      match(BattleSimParser::T__30);
      setState(160);
      boolexp();
      setState(161);
      match(BattleSimParser::T__16);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(163);
      exp(0);
      setState(164);
      match(BattleSimParser::COMPSYMBOL);
      setState(165);
      exp(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(167);
      orientation();
      setState(168);
      _la = _input->LA(1);
      if (!(_la == BattleSimParser::T__31

      || _la == BattleSimParser::T__32)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(169);
      orientation();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(171);
      blockCheck();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(172);
      orientationCheck();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(173);
      match(BattleSimParser::T__33);
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

//----------------- BlockCheckContext ------------------------------------------------------------------

BattleSimParser::BlockCheckContext::BlockCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 34, BattleSimParser::RuleBlockCheck);
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
    setState(176);
    _la = _input->LA(1);
    if (!(_la == BattleSimParser::T__34

    || _la == BattleSimParser::T__35)) {
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

//----------------- OrientationCheckContext ------------------------------------------------------------------

BattleSimParser::OrientationCheckContext::OrientationCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 36, BattleSimParser::RuleOrientationCheck);
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
    setState(178);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2061584302080) != 0))) {
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

//----------------- OrientationContext ------------------------------------------------------------------

BattleSimParser::OrientationContext::OrientationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BattleSimParser::OrientationContext::ORIENTATION() {
  return getToken(BattleSimParser::ORIENTATION, 0);
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
  enterRule(_localctx, 38, BattleSimParser::RuleOrientation);
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
    setState(180);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 41781441855488) != 0))) {
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

//----------------- ExpContext ------------------------------------------------------------------

BattleSimParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BattleSimParser::ExpContext::NUMBER() {
  return getToken(BattleSimParser::NUMBER, 0);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, BattleSimParser::RuleExp, precedence);

    

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
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BattleSimParser::NUMBER: {
        setState(183);
        match(BattleSimParser::NUMBER);
        break;
      }

      case BattleSimParser::T__30: {
        setState(184);
        match(BattleSimParser::T__30);
        setState(185);
        exp(0);
        setState(186);
        match(BattleSimParser::T__16);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExp);
        setState(190);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(191);
        match(BattleSimParser::MATHSYMBOL);
        setState(192);
        exp(3); 
      }
      setState(197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
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
    case 20: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);

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
