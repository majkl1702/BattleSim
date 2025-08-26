
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
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, MATHSYMBOL = 44, 
    COMPSYMBOL = 45, ORIENTATION = 46, NAME = 47, NUMBER = 48, WS = 49
  };

  enum {
    RuleBattleSim = 0, RuleMap = 1, RuleTeamDef = 2, RuleUnitDef = 3, RuleUnitStats = 4, 
    RuleUnitLogicSequence = 5, RuleLogicCommand = 6, RuleMoveCmd = 7, RuleTurnCmd = 8, 
    RuleIfCondition = 9, RuleWhileCycle = 10, RuleAttackCmd = 11, RuleSkip = 12, 
    RuleBoolexp = 13, RuleOrExpr = 14, RuleAndExpr = 15, RuleNotExpr = 16, 
    RulePrimaryBool = 17, RuleBlockCheck = 18, RuleOrientationCheck = 19, 
    RuleOrientation = 20, RuleExp = 21
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
  class IfConditionContext;
  class WhileCycleContext;
  class AttackCmdContext;
  class SkipContext;
  class BoolexpContext;
  class OrExprContext;
  class AndExprContext;
  class NotExprContext;
  class PrimaryBoolContext;
  class BlockCheckContext;
  class OrientationCheckContext;
  class OrientationContext;
  class ExpContext; 

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
    SkipContext *skip();

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
    OrientationContext *orientation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnCmdContext* turnCmd();

  class  IfConditionContext : public antlr4::ParserRuleContext {
  public:
    IfConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolexpContext *boolexp();
    std::vector<LogicCommandContext *> logicCommand();
    LogicCommandContext* logicCommand(size_t i);

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
    LogicCommandContext *logicCommand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileCycleContext* whileCycle();

  class  AttackCmdContext : public antlr4::ParserRuleContext {
  public:
    AttackCmdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttackCmdContext* attackCmd();

  class  SkipContext : public antlr4::ParserRuleContext {
  public:
    SkipContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkipContext* skip();

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
    BoolexpContext *boolexp();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *COMPSYMBOL();
    std::vector<OrientationContext *> orientation();
    OrientationContext* orientation(size_t i);
    BlockCheckContext *blockCheck();
    OrientationCheckContext *orientationCheck();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryBoolContext* primaryBool();

  class  BlockCheckContext : public antlr4::ParserRuleContext {
  public:
    BlockCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockCheckContext* blockCheck();

  class  OrientationCheckContext : public antlr4::ParserRuleContext {
  public:
    OrientationCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrientationCheckContext* orientationCheck();

  class  OrientationContext : public antlr4::ParserRuleContext {
  public:
    OrientationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORIENTATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrientationContext* orientation();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *MATHSYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expSempred(ExpContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

