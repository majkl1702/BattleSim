
// Generated from ./BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  BattleSimParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, MATHSYMBOL = 43, COMPSYMBOL = 44, 
    ORIENTATION = 45, NAME = 46, NUMBER = 47, WS = 48
  };

  enum {
    RuleBattleSim = 0, RuleMap = 1, RuleTeamDef = 2, RuleUnitDef = 3, RuleUnitStats = 4, 
    RuleUnitLogicSequence = 5, RuleLogicCommand = 6, RuleMoveCmd = 7, RuleTurnCmd = 8, 
    RuleTurnLeftCmd = 9, RuleTurnRightCmd = 10, RuleTurnOrientationCmd = 11, 
    RuleIfCondition = 12, RuleWhileCycle = 13, RuleAttackCmd = 14, RuleAttackAroundSelfCmd = 15, 
    RuleAttackInFrontCmd = 16, RuleRangeAttackCmd = 17, RuleSkipCmd = 18, 
    RuleBoolexp = 19, RuleOrExpr = 20, RuleAndExpr = 21, RuleNotExpr = 22, 
    RulePrimaryBool = 23, RuleTrue = 24, RuleFalse = 25, RuleParenthesesBool = 26, 
    RuleComparisonBool = 27, RuleOrientationEqualityCheck = 28, RuleEnemyNearbyCheck = 29, 
    RuleBlockCheck = 30, RuleIsFrontClearCheck = 31, RuleIsFrontBlockedCheck = 32, 
    RuleOrientationCheck = 33, RuleFacingNCheck = 34, RuleFacingWCheck = 35, 
    RuleFacingECheck = 36, RuleFacingSCheck = 37, RuleOrientation = 38, 
    RuleGetNearbyEnemyOrientation = 39, RuleGetMyOrientation = 40, RuleExp = 41, 
    RuleAtomicExp = 42, RuleParenthesesExp = 43
  };

  explicit BattleSimParser(antlr4::TokenStream *input);

  BattleSimParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BattleSimParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class BattleSimContext;
  class MapContext;
  class TeamDefContext;
  class UnitDefContext;
  class UnitStatsContext;
  class UnitLogicSequenceContext;
  class LogicCommandContext;
  class MoveCmdContext;
  class TurnCmdContext;
  class TurnLeftCmdContext;
  class TurnRightCmdContext;
  class TurnOrientationCmdContext;
  class IfConditionContext;
  class WhileCycleContext;
  class AttackCmdContext;
  class AttackAroundSelfCmdContext;
  class AttackInFrontCmdContext;
  class RangeAttackCmdContext;
  class SkipCmdContext;
  class BoolexpContext;
  class OrExprContext;
  class AndExprContext;
  class NotExprContext;
  class PrimaryBoolContext;
  class TrueContext;
  class FalseContext;
  class ParenthesesBoolContext;
  class ComparisonBoolContext;
  class OrientationEqualityCheckContext;
  class EnemyNearbyCheckContext;
  class BlockCheckContext;
  class IsFrontClearCheckContext;
  class IsFrontBlockedCheckContext;
  class OrientationCheckContext;
  class FacingNCheckContext;
  class FacingWCheckContext;
  class FacingECheckContext;
  class FacingSCheckContext;
  class OrientationContext;
  class GetNearbyEnemyOrientationContext;
  class GetMyOrientationContext;
  class ExpContext;
  class AtomicExpContext;
  class ParenthesesExpContext; 

  class  BattleSimContext : public antlr4::ParserRuleContext {
  public:
    BattleSimContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MapContext *map();
    std::vector<TeamDefContext *> teamDef();
    TeamDefContext* teamDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BattleSimContext* battleSim();

  class  MapContext : public antlr4::ParserRuleContext {
  public:
    MapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapContext* map();

  class  TeamDefContext : public antlr4::ParserRuleContext {
  public:
    TeamDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnitDefContext *> unitDef();
    UnitDefContext* unitDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TeamDefContext* teamDef();

  class  UnitDefContext : public antlr4::ParserRuleContext {
  public:
    UnitDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    UnitStatsContext *unitStats();
    UnitLogicSequenceContext *unitLogicSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitDefContext* unitDef();

  class  UnitStatsContext : public antlr4::ParserRuleContext {
  public:
    UnitStatsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitStatsContext* unitStats();

  class  UnitLogicSequenceContext : public antlr4::ParserRuleContext {
  public:
    UnitLogicSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicCommandContext *> logicCommand();
    LogicCommandContext* logicCommand(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitLogicSequenceContext* unitLogicSequence();

  class  LogicCommandContext : public antlr4::ParserRuleContext {
  public:
    LogicCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MoveCmdContext *moveCmd();
    TurnCmdContext *turnCmd();
    IfConditionContext *ifCondition();
    WhileCycleContext *whileCycle();
    AttackCmdContext *attackCmd();
    SkipCmdContext *skipCmd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicCommandContext* logicCommand();

  class  MoveCmdContext : public antlr4::ParserRuleContext {
  public:
    MoveCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoveCmdContext* moveCmd();

  class  TurnCmdContext : public antlr4::ParserRuleContext {
  public:
    TurnCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TurnLeftCmdContext *turnLeftCmd();
    TurnRightCmdContext *turnRightCmd();
    TurnOrientationCmdContext *turnOrientationCmd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnCmdContext* turnCmd();

  class  TurnLeftCmdContext : public antlr4::ParserRuleContext {
  public:
    TurnLeftCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnLeftCmdContext* turnLeftCmd();

  class  TurnRightCmdContext : public antlr4::ParserRuleContext {
  public:
    TurnRightCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnRightCmdContext* turnRightCmd();

  class  TurnOrientationCmdContext : public antlr4::ParserRuleContext {
  public:
    TurnOrientationCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrientationContext *orientation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnOrientationCmdContext* turnOrientationCmd();

  class  IfConditionContext : public antlr4::ParserRuleContext {
  public:
    IfConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolexpContext *boolexp();
    std::vector<UnitLogicSequenceContext *> unitLogicSequence();
    UnitLogicSequenceContext* unitLogicSequence(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfConditionContext* ifCondition();

  class  WhileCycleContext : public antlr4::ParserRuleContext {
  public:
    WhileCycleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolexpContext *boolexp();
    UnitLogicSequenceContext *unitLogicSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileCycleContext* whileCycle();

  class  AttackCmdContext : public antlr4::ParserRuleContext {
  public:
    AttackCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttackAroundSelfCmdContext *attackAroundSelfCmd();
    AttackInFrontCmdContext *attackInFrontCmd();
    RangeAttackCmdContext *rangeAttackCmd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttackCmdContext* attackCmd();

  class  AttackAroundSelfCmdContext : public antlr4::ParserRuleContext {
  public:
    AttackAroundSelfCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttackAroundSelfCmdContext* attackAroundSelfCmd();

  class  AttackInFrontCmdContext : public antlr4::ParserRuleContext {
  public:
    AttackInFrontCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttackInFrontCmdContext* attackInFrontCmd();

  class  RangeAttackCmdContext : public antlr4::ParserRuleContext {
  public:
    RangeAttackCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeAttackCmdContext* rangeAttackCmd();

  class  SkipCmdContext : public antlr4::ParserRuleContext {
  public:
    SkipCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkipCmdContext* skipCmd();

  class  BoolexpContext : public antlr4::ParserRuleContext {
  public:
    BoolexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrExprContext *orExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolexpContext* boolexp();

  class  OrExprContext : public antlr4::ParserRuleContext {
  public:
    OrExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExprContext *> andExpr();
    AndExprContext* andExpr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrExprContext* orExpr();

  class  AndExprContext : public antlr4::ParserRuleContext {
  public:
    AndExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NotExprContext *> notExpr();
    NotExprContext* notExpr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExprContext* andExpr();

  class  NotExprContext : public antlr4::ParserRuleContext {
  public:
    NotExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NotExprContext *notExpr();
    PrimaryBoolContext *primaryBool();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotExprContext* notExpr();

  class  PrimaryBoolContext : public antlr4::ParserRuleContext {
  public:
    PrimaryBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrueContext *true_();
    FalseContext *false_();
    ParenthesesBoolContext *parenthesesBool();
    ComparisonBoolContext *comparisonBool();
    OrientationEqualityCheckContext *orientationEqualityCheck();
    BlockCheckContext *blockCheck();
    OrientationCheckContext *orientationCheck();
    EnemyNearbyCheckContext *enemyNearbyCheck();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryBoolContext* primaryBool();

  class  TrueContext : public antlr4::ParserRuleContext {
  public:
    TrueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrueContext* true_();

  class  FalseContext : public antlr4::ParserRuleContext {
  public:
    FalseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FalseContext* false_();

  class  ParenthesesBoolContext : public antlr4::ParserRuleContext {
  public:
    ParenthesesBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolexpContext *boolexp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenthesesBoolContext* parenthesesBool();

  class  ComparisonBoolContext : public antlr4::ParserRuleContext {
  public:
    ComparisonBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *COMPSYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonBoolContext* comparisonBool();

  class  OrientationEqualityCheckContext : public antlr4::ParserRuleContext {
  public:
    OrientationEqualityCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrientationContext *> orientation();
    OrientationContext* orientation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrientationEqualityCheckContext* orientationEqualityCheck();

  class  EnemyNearbyCheckContext : public antlr4::ParserRuleContext {
  public:
    EnemyNearbyCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnemyNearbyCheckContext* enemyNearbyCheck();

  class  BlockCheckContext : public antlr4::ParserRuleContext {
  public:
    BlockCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IsFrontClearCheckContext *isFrontClearCheck();
    IsFrontBlockedCheckContext *isFrontBlockedCheck();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockCheckContext* blockCheck();

  class  IsFrontClearCheckContext : public antlr4::ParserRuleContext {
  public:
    IsFrontClearCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IsFrontClearCheckContext* isFrontClearCheck();

  class  IsFrontBlockedCheckContext : public antlr4::ParserRuleContext {
  public:
    IsFrontBlockedCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IsFrontBlockedCheckContext* isFrontBlockedCheck();

  class  OrientationCheckContext : public antlr4::ParserRuleContext {
  public:
    OrientationCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FacingNCheckContext *facingNCheck();
    FacingWCheckContext *facingWCheck();
    FacingECheckContext *facingECheck();
    FacingSCheckContext *facingSCheck();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrientationCheckContext* orientationCheck();

  class  FacingNCheckContext : public antlr4::ParserRuleContext {
  public:
    FacingNCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FacingNCheckContext* facingNCheck();

  class  FacingWCheckContext : public antlr4::ParserRuleContext {
  public:
    FacingWCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FacingWCheckContext* facingWCheck();

  class  FacingECheckContext : public antlr4::ParserRuleContext {
  public:
    FacingECheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FacingECheckContext* facingECheck();

  class  FacingSCheckContext : public antlr4::ParserRuleContext {
  public:
    FacingSCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FacingSCheckContext* facingSCheck();

  class  OrientationContext : public antlr4::ParserRuleContext {
  public:
    OrientationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORIENTATION();
    GetNearbyEnemyOrientationContext *getNearbyEnemyOrientation();
    GetMyOrientationContext *getMyOrientation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrientationContext* orientation();

  class  GetNearbyEnemyOrientationContext : public antlr4::ParserRuleContext {
  public:
    GetNearbyEnemyOrientationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetNearbyEnemyOrientationContext* getNearbyEnemyOrientation();

  class  GetMyOrientationContext : public antlr4::ParserRuleContext {
  public:
    GetMyOrientationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetMyOrientationContext* getMyOrientation();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomicExpContext *atomicExp();
    ParenthesesExpContext *parenthesesExp();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *MATHSYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);
  class  AtomicExpContext : public antlr4::ParserRuleContext {
  public:
    AtomicExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomicExpContext* atomicExp();

  class  ParenthesesExpContext : public antlr4::ParserRuleContext {
  public:
    ParenthesesExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenthesesExpContext* parenthesesExp();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expSempred(ExpContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

