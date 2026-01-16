// Generated from d:/BattleSim/BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class BattleSimParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, MATHSYMBOL=43, COMPSYMBOL=44, 
		ORIENTATION=45, NAME=46, NUMBER=47, WS=48;
	public static final int
		RULE_battleSim = 0, RULE_map = 1, RULE_teamDef = 2, RULE_unitDef = 3, 
		RULE_unitStats = 4, RULE_unitLogicSequence = 5, RULE_logicCommand = 6, 
		RULE_moveCmd = 7, RULE_turnCmd = 8, RULE_turnLeftCmd = 9, RULE_turnRightCmd = 10, 
		RULE_turnOrientationCmd = 11, RULE_ifCondition = 12, RULE_whileCycle = 13, 
		RULE_attackCmd = 14, RULE_attackAroundSelfCmd = 15, RULE_attackInFrontCmd = 16, 
		RULE_rangeAttackCmd = 17, RULE_skipCmd = 18, RULE_boolexp = 19, RULE_orExpr = 20, 
		RULE_andExpr = 21, RULE_notExpr = 22, RULE_primaryBool = 23, RULE_true = 24, 
		RULE_false = 25, RULE_parenthesesBool = 26, RULE_comparisonBool = 27, 
		RULE_orientationEqualityCheck = 28, RULE_enemyNearbyCheck = 29, RULE_blockCheck = 30, 
		RULE_isFrontClearCheck = 31, RULE_isFrontBlockedCheck = 32, RULE_orientationCheck = 33, 
		RULE_facingNCheck = 34, RULE_facingWCheck = 35, RULE_facingECheck = 36, 
		RULE_facingSCheck = 37, RULE_orientation = 38, RULE_getNearbyEnemyOrientation = 39, 
		RULE_getMyOrientation = 40, RULE_exp = 41, RULE_atomicExp = 42, RULE_parenthesesExp = 43;
	private static String[] makeRuleNames() {
		return new String[] {
			"battleSim", "map", "teamDef", "unitDef", "unitStats", "unitLogicSequence", 
			"logicCommand", "moveCmd", "turnCmd", "turnLeftCmd", "turnRightCmd", 
			"turnOrientationCmd", "ifCondition", "whileCycle", "attackCmd", "attackAroundSelfCmd", 
			"attackInFrontCmd", "rangeAttackCmd", "skipCmd", "boolexp", "orExpr", 
			"andExpr", "notExpr", "primaryBool", "true", "false", "parenthesesBool", 
			"comparisonBool", "orientationEqualityCheck", "enemyNearbyCheck", "blockCheck", 
			"isFrontClearCheck", "isFrontBlockedCheck", "orientationCheck", "facingNCheck", 
			"facingWCheck", "facingECheck", "facingSCheck", "orientation", "getNearbyEnemyOrientation", 
			"getMyOrientation", "exp", "atomicExp", "parenthesesExp"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'TeamBlue'", "'{'", "'}'", "'TeamRed'", "'x'", "';'", "'unit'", 
			"'at'", "'('", "','", "')'", "'health:'", "'attack:'", "'MoveForward()'", 
			"'TurnLeft()'", "'TurnRight()'", "'Turn('", "'if'", "'then'", "'else'", 
			"'while'", "'do'", "'AttackAroundSelf()'", "'AttackInFront()'", "'RangeAttack('", 
			"'skip'", "'||'", "'&&'", "'!'", "'true'", "'false'", "'=='", "'!='", 
			"'IsEnemyNearby()'", "'IsFrontClear()'", "'IsFrontBlocked()'", "'FacingNorth()'", 
			"'FacingWest()'", "'FacingEast()'", "'FacingSouth()'", "'GetNearbyEnemyOrientation()'", 
			"'GetMyOrientation()'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, "MATHSYMBOL", "COMPSYMBOL", 
			"ORIENTATION", "NAME", "NUMBER", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "BattleSim.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public BattleSimParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BattleSimContext extends ParserRuleContext {
		public MapContext map() {
			return getRuleContext(MapContext.class,0);
		}
		public List<TeamDefContext> teamDef() {
			return getRuleContexts(TeamDefContext.class);
		}
		public TeamDefContext teamDef(int i) {
			return getRuleContext(TeamDefContext.class,i);
		}
		public BattleSimContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_battleSim; }
	}

	public final BattleSimContext battleSim() throws RecognitionException {
		BattleSimContext _localctx = new BattleSimContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_battleSim);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			map();
			setState(89);
			match(T__0);
			setState(90);
			match(T__1);
			setState(91);
			teamDef();
			setState(92);
			match(T__2);
			setState(93);
			match(T__3);
			setState(94);
			match(T__1);
			setState(95);
			teamDef();
			setState(96);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MapContext extends ParserRuleContext {
		public List<TerminalNode> NUMBER() { return getTokens(BattleSimParser.NUMBER); }
		public TerminalNode NUMBER(int i) {
			return getToken(BattleSimParser.NUMBER, i);
		}
		public MapContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_map; }
	}

	public final MapContext map() throws RecognitionException {
		MapContext _localctx = new MapContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_map);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(98);
			match(NUMBER);
			setState(99);
			match(T__4);
			setState(100);
			match(NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TeamDefContext extends ParserRuleContext {
		public List<UnitDefContext> unitDef() {
			return getRuleContexts(UnitDefContext.class);
		}
		public UnitDefContext unitDef(int i) {
			return getRuleContext(UnitDefContext.class,i);
		}
		public TeamDefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_teamDef; }
	}

	public final TeamDefContext teamDef() throws RecognitionException {
		TeamDefContext _localctx = new TeamDefContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_teamDef);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(102);
				unitDef();
				setState(103);
				match(T__5);
				}
				}
				setState(107); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__6 );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnitDefContext extends ParserRuleContext {
		public TerminalNode NAME() { return getToken(BattleSimParser.NAME, 0); }
		public List<TerminalNode> NUMBER() { return getTokens(BattleSimParser.NUMBER); }
		public TerminalNode NUMBER(int i) {
			return getToken(BattleSimParser.NUMBER, i);
		}
		public UnitStatsContext unitStats() {
			return getRuleContext(UnitStatsContext.class,0);
		}
		public UnitLogicSequenceContext unitLogicSequence() {
			return getRuleContext(UnitLogicSequenceContext.class,0);
		}
		public UnitDefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unitDef; }
	}

	public final UnitDefContext unitDef() throws RecognitionException {
		UnitDefContext _localctx = new UnitDefContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_unitDef);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(109);
			match(T__6);
			setState(110);
			match(NAME);
			setState(111);
			match(T__7);
			setState(112);
			match(T__8);
			setState(113);
			match(NUMBER);
			setState(114);
			match(T__9);
			setState(115);
			match(NUMBER);
			setState(116);
			match(T__10);
			setState(117);
			match(T__1);
			setState(118);
			unitStats();
			setState(119);
			unitLogicSequence();
			setState(120);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnitStatsContext extends ParserRuleContext {
		public List<TerminalNode> NUMBER() { return getTokens(BattleSimParser.NUMBER); }
		public TerminalNode NUMBER(int i) {
			return getToken(BattleSimParser.NUMBER, i);
		}
		public UnitStatsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unitStats; }
	}

	public final UnitStatsContext unitStats() throws RecognitionException {
		UnitStatsContext _localctx = new UnitStatsContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_unitStats);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(T__11);
			setState(123);
			match(NUMBER);
			setState(124);
			match(T__5);
			setState(125);
			match(T__12);
			setState(126);
			match(NUMBER);
			setState(127);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnitLogicSequenceContext extends ParserRuleContext {
		public List<LogicCommandContext> logicCommand() {
			return getRuleContexts(LogicCommandContext.class);
		}
		public LogicCommandContext logicCommand(int i) {
			return getRuleContext(LogicCommandContext.class,i);
		}
		public UnitLogicSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unitLogicSequence; }
	}

	public final UnitLogicSequenceContext unitLogicSequence() throws RecognitionException {
		UnitLogicSequenceContext _localctx = new UnitLogicSequenceContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_unitLogicSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(129);
			match(T__1);
			setState(135);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 128434176L) != 0)) {
				{
				{
				setState(130);
				logicCommand();
				setState(131);
				match(T__5);
				}
				}
				setState(137);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(138);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LogicCommandContext extends ParserRuleContext {
		public MoveCmdContext moveCmd() {
			return getRuleContext(MoveCmdContext.class,0);
		}
		public TurnCmdContext turnCmd() {
			return getRuleContext(TurnCmdContext.class,0);
		}
		public IfConditionContext ifCondition() {
			return getRuleContext(IfConditionContext.class,0);
		}
		public WhileCycleContext whileCycle() {
			return getRuleContext(WhileCycleContext.class,0);
		}
		public AttackCmdContext attackCmd() {
			return getRuleContext(AttackCmdContext.class,0);
		}
		public SkipCmdContext skipCmd() {
			return getRuleContext(SkipCmdContext.class,0);
		}
		public LogicCommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicCommand; }
	}

	public final LogicCommandContext logicCommand() throws RecognitionException {
		LogicCommandContext _localctx = new LogicCommandContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_logicCommand);
		try {
			setState(146);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__13:
				enterOuterAlt(_localctx, 1);
				{
				setState(140);
				moveCmd();
				}
				break;
			case T__14:
			case T__15:
			case T__16:
				enterOuterAlt(_localctx, 2);
				{
				setState(141);
				turnCmd();
				}
				break;
			case T__17:
				enterOuterAlt(_localctx, 3);
				{
				setState(142);
				ifCondition();
				}
				break;
			case T__20:
				enterOuterAlt(_localctx, 4);
				{
				setState(143);
				whileCycle();
				}
				break;
			case T__22:
			case T__23:
			case T__24:
				enterOuterAlt(_localctx, 5);
				{
				setState(144);
				attackCmd();
				}
				break;
			case T__25:
				enterOuterAlt(_localctx, 6);
				{
				setState(145);
				skipCmd();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MoveCmdContext extends ParserRuleContext {
		public MoveCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moveCmd; }
	}

	public final MoveCmdContext moveCmd() throws RecognitionException {
		MoveCmdContext _localctx = new MoveCmdContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_moveCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TurnCmdContext extends ParserRuleContext {
		public TurnLeftCmdContext turnLeftCmd() {
			return getRuleContext(TurnLeftCmdContext.class,0);
		}
		public TurnRightCmdContext turnRightCmd() {
			return getRuleContext(TurnRightCmdContext.class,0);
		}
		public TurnOrientationCmdContext turnOrientationCmd() {
			return getRuleContext(TurnOrientationCmdContext.class,0);
		}
		public TurnCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_turnCmd; }
	}

	public final TurnCmdContext turnCmd() throws RecognitionException {
		TurnCmdContext _localctx = new TurnCmdContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_turnCmd);
		try {
			setState(153);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__14:
				enterOuterAlt(_localctx, 1);
				{
				setState(150);
				turnLeftCmd();
				}
				break;
			case T__15:
				enterOuterAlt(_localctx, 2);
				{
				setState(151);
				turnRightCmd();
				}
				break;
			case T__16:
				enterOuterAlt(_localctx, 3);
				{
				setState(152);
				turnOrientationCmd();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TurnLeftCmdContext extends ParserRuleContext {
		public TurnLeftCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_turnLeftCmd; }
	}

	public final TurnLeftCmdContext turnLeftCmd() throws RecognitionException {
		TurnLeftCmdContext _localctx = new TurnLeftCmdContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_turnLeftCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(155);
			match(T__14);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TurnRightCmdContext extends ParserRuleContext {
		public TurnRightCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_turnRightCmd; }
	}

	public final TurnRightCmdContext turnRightCmd() throws RecognitionException {
		TurnRightCmdContext _localctx = new TurnRightCmdContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_turnRightCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			match(T__15);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TurnOrientationCmdContext extends ParserRuleContext {
		public OrientationContext orientation() {
			return getRuleContext(OrientationContext.class,0);
		}
		public TurnOrientationCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_turnOrientationCmd; }
	}

	public final TurnOrientationCmdContext turnOrientationCmd() throws RecognitionException {
		TurnOrientationCmdContext _localctx = new TurnOrientationCmdContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_turnOrientationCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(159);
			match(T__16);
			setState(160);
			orientation();
			setState(161);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IfConditionContext extends ParserRuleContext {
		public BoolexpContext boolexp() {
			return getRuleContext(BoolexpContext.class,0);
		}
		public List<UnitLogicSequenceContext> unitLogicSequence() {
			return getRuleContexts(UnitLogicSequenceContext.class);
		}
		public UnitLogicSequenceContext unitLogicSequence(int i) {
			return getRuleContext(UnitLogicSequenceContext.class,i);
		}
		public IfConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifCondition; }
	}

	public final IfConditionContext ifCondition() throws RecognitionException {
		IfConditionContext _localctx = new IfConditionContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_ifCondition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			match(T__17);
			setState(164);
			match(T__8);
			setState(165);
			boolexp();
			setState(166);
			match(T__10);
			setState(167);
			match(T__18);
			setState(168);
			match(T__8);
			setState(169);
			unitLogicSequence();
			setState(170);
			match(T__10);
			setState(171);
			match(T__19);
			setState(172);
			match(T__8);
			setState(173);
			unitLogicSequence();
			setState(174);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WhileCycleContext extends ParserRuleContext {
		public BoolexpContext boolexp() {
			return getRuleContext(BoolexpContext.class,0);
		}
		public UnitLogicSequenceContext unitLogicSequence() {
			return getRuleContext(UnitLogicSequenceContext.class,0);
		}
		public WhileCycleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileCycle; }
	}

	public final WhileCycleContext whileCycle() throws RecognitionException {
		WhileCycleContext _localctx = new WhileCycleContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_whileCycle);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			match(T__20);
			setState(177);
			match(T__8);
			setState(178);
			boolexp();
			setState(179);
			match(T__10);
			setState(180);
			match(T__21);
			setState(181);
			match(T__8);
			setState(182);
			unitLogicSequence();
			setState(183);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AttackCmdContext extends ParserRuleContext {
		public AttackAroundSelfCmdContext attackAroundSelfCmd() {
			return getRuleContext(AttackAroundSelfCmdContext.class,0);
		}
		public AttackInFrontCmdContext attackInFrontCmd() {
			return getRuleContext(AttackInFrontCmdContext.class,0);
		}
		public RangeAttackCmdContext rangeAttackCmd() {
			return getRuleContext(RangeAttackCmdContext.class,0);
		}
		public AttackCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attackCmd; }
	}

	public final AttackCmdContext attackCmd() throws RecognitionException {
		AttackCmdContext _localctx = new AttackCmdContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_attackCmd);
		try {
			setState(188);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__22:
				enterOuterAlt(_localctx, 1);
				{
				setState(185);
				attackAroundSelfCmd();
				}
				break;
			case T__23:
				enterOuterAlt(_localctx, 2);
				{
				setState(186);
				attackInFrontCmd();
				}
				break;
			case T__24:
				enterOuterAlt(_localctx, 3);
				{
				setState(187);
				rangeAttackCmd();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AttackAroundSelfCmdContext extends ParserRuleContext {
		public AttackAroundSelfCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attackAroundSelfCmd; }
	}

	public final AttackAroundSelfCmdContext attackAroundSelfCmd() throws RecognitionException {
		AttackAroundSelfCmdContext _localctx = new AttackAroundSelfCmdContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_attackAroundSelfCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			match(T__22);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AttackInFrontCmdContext extends ParserRuleContext {
		public AttackInFrontCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attackInFrontCmd; }
	}

	public final AttackInFrontCmdContext attackInFrontCmd() throws RecognitionException {
		AttackInFrontCmdContext _localctx = new AttackInFrontCmdContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_attackInFrontCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			match(T__23);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RangeAttackCmdContext extends ParserRuleContext {
		public ExpContext exp() {
			return getRuleContext(ExpContext.class,0);
		}
		public RangeAttackCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rangeAttackCmd; }
	}

	public final RangeAttackCmdContext rangeAttackCmd() throws RecognitionException {
		RangeAttackCmdContext _localctx = new RangeAttackCmdContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_rangeAttackCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
			match(T__24);
			setState(195);
			exp(0);
			setState(196);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SkipCmdContext extends ParserRuleContext {
		public SkipCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_skipCmd; }
	}

	public final SkipCmdContext skipCmd() throws RecognitionException {
		SkipCmdContext _localctx = new SkipCmdContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_skipCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(198);
			match(T__25);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BoolexpContext extends ParserRuleContext {
		public OrExprContext orExpr() {
			return getRuleContext(OrExprContext.class,0);
		}
		public BoolexpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolexp; }
	}

	public final BoolexpContext boolexp() throws RecognitionException {
		BoolexpContext _localctx = new BoolexpContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_boolexp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			orExpr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OrExprContext extends ParserRuleContext {
		public List<AndExprContext> andExpr() {
			return getRuleContexts(AndExprContext.class);
		}
		public AndExprContext andExpr(int i) {
			return getRuleContext(AndExprContext.class,i);
		}
		public OrExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orExpr; }
	}

	public final OrExprContext orExpr() throws RecognitionException {
		OrExprContext _localctx = new OrExprContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_orExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(202);
			andExpr();
			setState(207);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__26) {
				{
				{
				setState(203);
				match(T__26);
				setState(204);
				andExpr();
				}
				}
				setState(209);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AndExprContext extends ParserRuleContext {
		public List<NotExprContext> notExpr() {
			return getRuleContexts(NotExprContext.class);
		}
		public NotExprContext notExpr(int i) {
			return getRuleContext(NotExprContext.class,i);
		}
		public AndExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_andExpr; }
	}

	public final AndExprContext andExpr() throws RecognitionException {
		AndExprContext _localctx = new AndExprContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_andExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			notExpr();
			setState(215);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__27) {
				{
				{
				setState(211);
				match(T__27);
				setState(212);
				notExpr();
				}
				}
				setState(217);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NotExprContext extends ParserRuleContext {
		public NotExprContext notExpr() {
			return getRuleContext(NotExprContext.class,0);
		}
		public PrimaryBoolContext primaryBool() {
			return getRuleContext(PrimaryBoolContext.class,0);
		}
		public NotExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_notExpr; }
	}

	public final NotExprContext notExpr() throws RecognitionException {
		NotExprContext _localctx = new NotExprContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_notExpr);
		try {
			setState(221);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__28:
				enterOuterAlt(_localctx, 1);
				{
				setState(218);
				match(T__28);
				setState(219);
				notExpr();
				}
				break;
			case T__8:
			case T__29:
			case T__30:
			case T__33:
			case T__34:
			case T__35:
			case T__36:
			case T__37:
			case T__38:
			case T__39:
			case T__40:
			case T__41:
			case ORIENTATION:
			case NUMBER:
				enterOuterAlt(_localctx, 2);
				{
				setState(220);
				primaryBool();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrimaryBoolContext extends ParserRuleContext {
		public TrueContext true_() {
			return getRuleContext(TrueContext.class,0);
		}
		public FalseContext false_() {
			return getRuleContext(FalseContext.class,0);
		}
		public ParenthesesBoolContext parenthesesBool() {
			return getRuleContext(ParenthesesBoolContext.class,0);
		}
		public ComparisonBoolContext comparisonBool() {
			return getRuleContext(ComparisonBoolContext.class,0);
		}
		public OrientationEqualityCheckContext orientationEqualityCheck() {
			return getRuleContext(OrientationEqualityCheckContext.class,0);
		}
		public BlockCheckContext blockCheck() {
			return getRuleContext(BlockCheckContext.class,0);
		}
		public OrientationCheckContext orientationCheck() {
			return getRuleContext(OrientationCheckContext.class,0);
		}
		public EnemyNearbyCheckContext enemyNearbyCheck() {
			return getRuleContext(EnemyNearbyCheckContext.class,0);
		}
		public PrimaryBoolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryBool; }
	}

	public final PrimaryBoolContext primaryBool() throws RecognitionException {
		PrimaryBoolContext _localctx = new PrimaryBoolContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_primaryBool);
		try {
			setState(231);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(223);
				true_();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(224);
				false_();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(225);
				parenthesesBool();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(226);
				comparisonBool();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(227);
				orientationEqualityCheck();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(228);
				blockCheck();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(229);
				orientationCheck();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(230);
				enemyNearbyCheck();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TrueContext extends ParserRuleContext {
		public TrueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_true; }
	}

	public final TrueContext true_() throws RecognitionException {
		TrueContext _localctx = new TrueContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_true);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(233);
			match(T__29);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FalseContext extends ParserRuleContext {
		public FalseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_false; }
	}

	public final FalseContext false_() throws RecognitionException {
		FalseContext _localctx = new FalseContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_false);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			match(T__30);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParenthesesBoolContext extends ParserRuleContext {
		public BoolexpContext boolexp() {
			return getRuleContext(BoolexpContext.class,0);
		}
		public ParenthesesBoolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parenthesesBool; }
	}

	public final ParenthesesBoolContext parenthesesBool() throws RecognitionException {
		ParenthesesBoolContext _localctx = new ParenthesesBoolContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_parenthesesBool);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(237);
			match(T__8);
			setState(238);
			boolexp();
			setState(239);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComparisonBoolContext extends ParserRuleContext {
		public List<ExpContext> exp() {
			return getRuleContexts(ExpContext.class);
		}
		public ExpContext exp(int i) {
			return getRuleContext(ExpContext.class,i);
		}
		public TerminalNode COMPSYMBOL() { return getToken(BattleSimParser.COMPSYMBOL, 0); }
		public ComparisonBoolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparisonBool; }
	}

	public final ComparisonBoolContext comparisonBool() throws RecognitionException {
		ComparisonBoolContext _localctx = new ComparisonBoolContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_comparisonBool);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			exp(0);
			setState(242);
			match(COMPSYMBOL);
			setState(243);
			exp(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OrientationEqualityCheckContext extends ParserRuleContext {
		public List<OrientationContext> orientation() {
			return getRuleContexts(OrientationContext.class);
		}
		public OrientationContext orientation(int i) {
			return getRuleContext(OrientationContext.class,i);
		}
		public OrientationEqualityCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orientationEqualityCheck; }
	}

	public final OrientationEqualityCheckContext orientationEqualityCheck() throws RecognitionException {
		OrientationEqualityCheckContext _localctx = new OrientationEqualityCheckContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_orientationEqualityCheck);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(245);
			orientation();
			setState(246);
			_la = _input.LA(1);
			if ( !(_la==T__31 || _la==T__32) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(247);
			orientation();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnemyNearbyCheckContext extends ParserRuleContext {
		public EnemyNearbyCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enemyNearbyCheck; }
	}

	public final EnemyNearbyCheckContext enemyNearbyCheck() throws RecognitionException {
		EnemyNearbyCheckContext _localctx = new EnemyNearbyCheckContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_enemyNearbyCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(249);
			match(T__33);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlockCheckContext extends ParserRuleContext {
		public IsFrontClearCheckContext isFrontClearCheck() {
			return getRuleContext(IsFrontClearCheckContext.class,0);
		}
		public IsFrontBlockedCheckContext isFrontBlockedCheck() {
			return getRuleContext(IsFrontBlockedCheckContext.class,0);
		}
		public BlockCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockCheck; }
	}

	public final BlockCheckContext blockCheck() throws RecognitionException {
		BlockCheckContext _localctx = new BlockCheckContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_blockCheck);
		try {
			setState(253);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__34:
				enterOuterAlt(_localctx, 1);
				{
				setState(251);
				isFrontClearCheck();
				}
				break;
			case T__35:
				enterOuterAlt(_localctx, 2);
				{
				setState(252);
				isFrontBlockedCheck();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IsFrontClearCheckContext extends ParserRuleContext {
		public IsFrontClearCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_isFrontClearCheck; }
	}

	public final IsFrontClearCheckContext isFrontClearCheck() throws RecognitionException {
		IsFrontClearCheckContext _localctx = new IsFrontClearCheckContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_isFrontClearCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(255);
			match(T__34);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IsFrontBlockedCheckContext extends ParserRuleContext {
		public IsFrontBlockedCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_isFrontBlockedCheck; }
	}

	public final IsFrontBlockedCheckContext isFrontBlockedCheck() throws RecognitionException {
		IsFrontBlockedCheckContext _localctx = new IsFrontBlockedCheckContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_isFrontBlockedCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
			match(T__35);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OrientationCheckContext extends ParserRuleContext {
		public FacingNCheckContext facingNCheck() {
			return getRuleContext(FacingNCheckContext.class,0);
		}
		public FacingWCheckContext facingWCheck() {
			return getRuleContext(FacingWCheckContext.class,0);
		}
		public FacingECheckContext facingECheck() {
			return getRuleContext(FacingECheckContext.class,0);
		}
		public FacingSCheckContext facingSCheck() {
			return getRuleContext(FacingSCheckContext.class,0);
		}
		public OrientationCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orientationCheck; }
	}

	public final OrientationCheckContext orientationCheck() throws RecognitionException {
		OrientationCheckContext _localctx = new OrientationCheckContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_orientationCheck);
		try {
			setState(263);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__36:
				enterOuterAlt(_localctx, 1);
				{
				setState(259);
				facingNCheck();
				}
				break;
			case T__37:
				enterOuterAlt(_localctx, 2);
				{
				setState(260);
				facingWCheck();
				}
				break;
			case T__38:
				enterOuterAlt(_localctx, 3);
				{
				setState(261);
				facingECheck();
				}
				break;
			case T__39:
				enterOuterAlt(_localctx, 4);
				{
				setState(262);
				facingSCheck();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FacingNCheckContext extends ParserRuleContext {
		public FacingNCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_facingNCheck; }
	}

	public final FacingNCheckContext facingNCheck() throws RecognitionException {
		FacingNCheckContext _localctx = new FacingNCheckContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_facingNCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(265);
			match(T__36);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FacingWCheckContext extends ParserRuleContext {
		public FacingWCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_facingWCheck; }
	}

	public final FacingWCheckContext facingWCheck() throws RecognitionException {
		FacingWCheckContext _localctx = new FacingWCheckContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_facingWCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(267);
			match(T__37);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FacingECheckContext extends ParserRuleContext {
		public FacingECheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_facingECheck; }
	}

	public final FacingECheckContext facingECheck() throws RecognitionException {
		FacingECheckContext _localctx = new FacingECheckContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_facingECheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(269);
			match(T__38);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FacingSCheckContext extends ParserRuleContext {
		public FacingSCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_facingSCheck; }
	}

	public final FacingSCheckContext facingSCheck() throws RecognitionException {
		FacingSCheckContext _localctx = new FacingSCheckContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_facingSCheck);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(271);
			match(T__39);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OrientationContext extends ParserRuleContext {
		public TerminalNode ORIENTATION() { return getToken(BattleSimParser.ORIENTATION, 0); }
		public GetNearbyEnemyOrientationContext getNearbyEnemyOrientation() {
			return getRuleContext(GetNearbyEnemyOrientationContext.class,0);
		}
		public GetMyOrientationContext getMyOrientation() {
			return getRuleContext(GetMyOrientationContext.class,0);
		}
		public OrientationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orientation; }
	}

	public final OrientationContext orientation() throws RecognitionException {
		OrientationContext _localctx = new OrientationContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_orientation);
		try {
			setState(276);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ORIENTATION:
				enterOuterAlt(_localctx, 1);
				{
				setState(273);
				match(ORIENTATION);
				}
				break;
			case T__40:
				enterOuterAlt(_localctx, 2);
				{
				setState(274);
				getNearbyEnemyOrientation();
				}
				break;
			case T__41:
				enterOuterAlt(_localctx, 3);
				{
				setState(275);
				getMyOrientation();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GetNearbyEnemyOrientationContext extends ParserRuleContext {
		public GetNearbyEnemyOrientationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getNearbyEnemyOrientation; }
	}

	public final GetNearbyEnemyOrientationContext getNearbyEnemyOrientation() throws RecognitionException {
		GetNearbyEnemyOrientationContext _localctx = new GetNearbyEnemyOrientationContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_getNearbyEnemyOrientation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(278);
			match(T__40);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GetMyOrientationContext extends ParserRuleContext {
		public GetMyOrientationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_getMyOrientation; }
	}

	public final GetMyOrientationContext getMyOrientation() throws RecognitionException {
		GetMyOrientationContext _localctx = new GetMyOrientationContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_getMyOrientation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(280);
			match(T__41);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpContext extends ParserRuleContext {
		public AtomicExpContext atomicExp() {
			return getRuleContext(AtomicExpContext.class,0);
		}
		public ParenthesesExpContext parenthesesExp() {
			return getRuleContext(ParenthesesExpContext.class,0);
		}
		public List<ExpContext> exp() {
			return getRuleContexts(ExpContext.class);
		}
		public ExpContext exp(int i) {
			return getRuleContext(ExpContext.class,i);
		}
		public TerminalNode MATHSYMBOL() { return getToken(BattleSimParser.MATHSYMBOL, 0); }
		public ExpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exp; }
	}

	public final ExpContext exp() throws RecognitionException {
		return exp(0);
	}

	private ExpContext exp(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpContext _localctx = new ExpContext(_ctx, _parentState);
		ExpContext _prevctx = _localctx;
		int _startState = 82;
		enterRecursionRule(_localctx, 82, RULE_exp, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(285);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUMBER:
				{
				setState(283);
				atomicExp();
				}
				break;
			case T__8:
				{
				setState(284);
				parenthesesExp();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(292);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_exp);
					setState(287);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(288);
					match(MATHSYMBOL);
					setState(289);
					exp(3);
					}
					} 
				}
				setState(294);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AtomicExpContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(BattleSimParser.NUMBER, 0); }
		public AtomicExpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atomicExp; }
	}

	public final AtomicExpContext atomicExp() throws RecognitionException {
		AtomicExpContext _localctx = new AtomicExpContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_atomicExp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(295);
			match(NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParenthesesExpContext extends ParserRuleContext {
		public ExpContext exp() {
			return getRuleContext(ExpContext.class,0);
		}
		public ParenthesesExpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parenthesesExp; }
	}

	public final ParenthesesExpContext parenthesesExp() throws RecognitionException {
		ParenthesesExpContext _localctx = new ParenthesesExpContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_parenthesesExp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(297);
			match(T__8);
			setState(298);
			exp(0);
			setState(299);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 41:
			return exp_sempred((ExpContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean exp_sempred(ExpContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u00010\u012e\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007\u001e"+
		"\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007\"\u0002"+
		"#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007&\u0002\'\u0007\'\u0002"+
		"(\u0007(\u0002)\u0007)\u0002*\u0007*\u0002+\u0007+\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0004\u0002j\b\u0002\u000b\u0002"+
		"\f\u0002k\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0005\u0005\u0086\b\u0005\n\u0005\f\u0005\u0089\t\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0003\u0006\u0093\b\u0006\u0001\u0007\u0001\u0007\u0001"+
		"\b\u0001\b\u0001\b\u0003\b\u009a\b\b\u0001\t\u0001\t\u0001\n\u0001\n\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u00bd\b\u000e\u0001"+
		"\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001"+
		"\u0014\u0001\u0014\u0001\u0014\u0005\u0014\u00ce\b\u0014\n\u0014\f\u0014"+
		"\u00d1\t\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0005\u0015\u00d6\b"+
		"\u0015\n\u0015\f\u0015\u00d9\t\u0015\u0001\u0016\u0001\u0016\u0001\u0016"+
		"\u0003\u0016\u00de\b\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0003\u0017\u00e8\b\u0017"+
		"\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u001a\u0001\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001b"+
		"\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001d\u0001\u001d"+
		"\u0001\u001e\u0001\u001e\u0003\u001e\u00fe\b\u001e\u0001\u001f\u0001\u001f"+
		"\u0001 \u0001 \u0001!\u0001!\u0001!\u0001!\u0003!\u0108\b!\u0001\"\u0001"+
		"\"\u0001#\u0001#\u0001$\u0001$\u0001%\u0001%\u0001&\u0001&\u0001&\u0003"+
		"&\u0115\b&\u0001\'\u0001\'\u0001(\u0001(\u0001)\u0001)\u0001)\u0003)\u011e"+
		"\b)\u0001)\u0001)\u0001)\u0005)\u0123\b)\n)\f)\u0126\t)\u0001*\u0001*"+
		"\u0001+\u0001+\u0001+\u0001+\u0001+\u0000\u0001R,\u0000\u0002\u0004\u0006"+
		"\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,."+
		"02468:<>@BDFHJLNPRTV\u0000\u0001\u0001\u0000 !\u011e\u0000X\u0001\u0000"+
		"\u0000\u0000\u0002b\u0001\u0000\u0000\u0000\u0004i\u0001\u0000\u0000\u0000"+
		"\u0006m\u0001\u0000\u0000\u0000\bz\u0001\u0000\u0000\u0000\n\u0081\u0001"+
		"\u0000\u0000\u0000\f\u0092\u0001\u0000\u0000\u0000\u000e\u0094\u0001\u0000"+
		"\u0000\u0000\u0010\u0099\u0001\u0000\u0000\u0000\u0012\u009b\u0001\u0000"+
		"\u0000\u0000\u0014\u009d\u0001\u0000\u0000\u0000\u0016\u009f\u0001\u0000"+
		"\u0000\u0000\u0018\u00a3\u0001\u0000\u0000\u0000\u001a\u00b0\u0001\u0000"+
		"\u0000\u0000\u001c\u00bc\u0001\u0000\u0000\u0000\u001e\u00be\u0001\u0000"+
		"\u0000\u0000 \u00c0\u0001\u0000\u0000\u0000\"\u00c2\u0001\u0000\u0000"+
		"\u0000$\u00c6\u0001\u0000\u0000\u0000&\u00c8\u0001\u0000\u0000\u0000("+
		"\u00ca\u0001\u0000\u0000\u0000*\u00d2\u0001\u0000\u0000\u0000,\u00dd\u0001"+
		"\u0000\u0000\u0000.\u00e7\u0001\u0000\u0000\u00000\u00e9\u0001\u0000\u0000"+
		"\u00002\u00eb\u0001\u0000\u0000\u00004\u00ed\u0001\u0000\u0000\u00006"+
		"\u00f1\u0001\u0000\u0000\u00008\u00f5\u0001\u0000\u0000\u0000:\u00f9\u0001"+
		"\u0000\u0000\u0000<\u00fd\u0001\u0000\u0000\u0000>\u00ff\u0001\u0000\u0000"+
		"\u0000@\u0101\u0001\u0000\u0000\u0000B\u0107\u0001\u0000\u0000\u0000D"+
		"\u0109\u0001\u0000\u0000\u0000F\u010b\u0001\u0000\u0000\u0000H\u010d\u0001"+
		"\u0000\u0000\u0000J\u010f\u0001\u0000\u0000\u0000L\u0114\u0001\u0000\u0000"+
		"\u0000N\u0116\u0001\u0000\u0000\u0000P\u0118\u0001\u0000\u0000\u0000R"+
		"\u011d\u0001\u0000\u0000\u0000T\u0127\u0001\u0000\u0000\u0000V\u0129\u0001"+
		"\u0000\u0000\u0000XY\u0003\u0002\u0001\u0000YZ\u0005\u0001\u0000\u0000"+
		"Z[\u0005\u0002\u0000\u0000[\\\u0003\u0004\u0002\u0000\\]\u0005\u0003\u0000"+
		"\u0000]^\u0005\u0004\u0000\u0000^_\u0005\u0002\u0000\u0000_`\u0003\u0004"+
		"\u0002\u0000`a\u0005\u0003\u0000\u0000a\u0001\u0001\u0000\u0000\u0000"+
		"bc\u0005/\u0000\u0000cd\u0005\u0005\u0000\u0000de\u0005/\u0000\u0000e"+
		"\u0003\u0001\u0000\u0000\u0000fg\u0003\u0006\u0003\u0000gh\u0005\u0006"+
		"\u0000\u0000hj\u0001\u0000\u0000\u0000if\u0001\u0000\u0000\u0000jk\u0001"+
		"\u0000\u0000\u0000ki\u0001\u0000\u0000\u0000kl\u0001\u0000\u0000\u0000"+
		"l\u0005\u0001\u0000\u0000\u0000mn\u0005\u0007\u0000\u0000no\u0005.\u0000"+
		"\u0000op\u0005\b\u0000\u0000pq\u0005\t\u0000\u0000qr\u0005/\u0000\u0000"+
		"rs\u0005\n\u0000\u0000st\u0005/\u0000\u0000tu\u0005\u000b\u0000\u0000"+
		"uv\u0005\u0002\u0000\u0000vw\u0003\b\u0004\u0000wx\u0003\n\u0005\u0000"+
		"xy\u0005\u0003\u0000\u0000y\u0007\u0001\u0000\u0000\u0000z{\u0005\f\u0000"+
		"\u0000{|\u0005/\u0000\u0000|}\u0005\u0006\u0000\u0000}~\u0005\r\u0000"+
		"\u0000~\u007f\u0005/\u0000\u0000\u007f\u0080\u0005\u0006\u0000\u0000\u0080"+
		"\t\u0001\u0000\u0000\u0000\u0081\u0087\u0005\u0002\u0000\u0000\u0082\u0083"+
		"\u0003\f\u0006\u0000\u0083\u0084\u0005\u0006\u0000\u0000\u0084\u0086\u0001"+
		"\u0000\u0000\u0000\u0085\u0082\u0001\u0000\u0000\u0000\u0086\u0089\u0001"+
		"\u0000\u0000\u0000\u0087\u0085\u0001\u0000\u0000\u0000\u0087\u0088\u0001"+
		"\u0000\u0000\u0000\u0088\u008a\u0001\u0000\u0000\u0000\u0089\u0087\u0001"+
		"\u0000\u0000\u0000\u008a\u008b\u0005\u0003\u0000\u0000\u008b\u000b\u0001"+
		"\u0000\u0000\u0000\u008c\u0093\u0003\u000e\u0007\u0000\u008d\u0093\u0003"+
		"\u0010\b\u0000\u008e\u0093\u0003\u0018\f\u0000\u008f\u0093\u0003\u001a"+
		"\r\u0000\u0090\u0093\u0003\u001c\u000e\u0000\u0091\u0093\u0003$\u0012"+
		"\u0000\u0092\u008c\u0001\u0000\u0000\u0000\u0092\u008d\u0001\u0000\u0000"+
		"\u0000\u0092\u008e\u0001\u0000\u0000\u0000\u0092\u008f\u0001\u0000\u0000"+
		"\u0000\u0092\u0090\u0001\u0000\u0000\u0000\u0092\u0091\u0001\u0000\u0000"+
		"\u0000\u0093\r\u0001\u0000\u0000\u0000\u0094\u0095\u0005\u000e\u0000\u0000"+
		"\u0095\u000f\u0001\u0000\u0000\u0000\u0096\u009a\u0003\u0012\t\u0000\u0097"+
		"\u009a\u0003\u0014\n\u0000\u0098\u009a\u0003\u0016\u000b\u0000\u0099\u0096"+
		"\u0001\u0000\u0000\u0000\u0099\u0097\u0001\u0000\u0000\u0000\u0099\u0098"+
		"\u0001\u0000\u0000\u0000\u009a\u0011\u0001\u0000\u0000\u0000\u009b\u009c"+
		"\u0005\u000f\u0000\u0000\u009c\u0013\u0001\u0000\u0000\u0000\u009d\u009e"+
		"\u0005\u0010\u0000\u0000\u009e\u0015\u0001\u0000\u0000\u0000\u009f\u00a0"+
		"\u0005\u0011\u0000\u0000\u00a0\u00a1\u0003L&\u0000\u00a1\u00a2\u0005\u000b"+
		"\u0000\u0000\u00a2\u0017\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005\u0012"+
		"\u0000\u0000\u00a4\u00a5\u0005\t\u0000\u0000\u00a5\u00a6\u0003&\u0013"+
		"\u0000\u00a6\u00a7\u0005\u000b\u0000\u0000\u00a7\u00a8\u0005\u0013\u0000"+
		"\u0000\u00a8\u00a9\u0005\t\u0000\u0000\u00a9\u00aa\u0003\n\u0005\u0000"+
		"\u00aa\u00ab\u0005\u000b\u0000\u0000\u00ab\u00ac\u0005\u0014\u0000\u0000"+
		"\u00ac\u00ad\u0005\t\u0000\u0000\u00ad\u00ae\u0003\n\u0005\u0000\u00ae"+
		"\u00af\u0005\u000b\u0000\u0000\u00af\u0019\u0001\u0000\u0000\u0000\u00b0"+
		"\u00b1\u0005\u0015\u0000\u0000\u00b1\u00b2\u0005\t\u0000\u0000\u00b2\u00b3"+
		"\u0003&\u0013\u0000\u00b3\u00b4\u0005\u000b\u0000\u0000\u00b4\u00b5\u0005"+
		"\u0016\u0000\u0000\u00b5\u00b6\u0005\t\u0000\u0000\u00b6\u00b7\u0003\n"+
		"\u0005\u0000\u00b7\u00b8\u0005\u000b\u0000\u0000\u00b8\u001b\u0001\u0000"+
		"\u0000\u0000\u00b9\u00bd\u0003\u001e\u000f\u0000\u00ba\u00bd\u0003 \u0010"+
		"\u0000\u00bb\u00bd\u0003\"\u0011\u0000\u00bc\u00b9\u0001\u0000\u0000\u0000"+
		"\u00bc\u00ba\u0001\u0000\u0000\u0000\u00bc\u00bb\u0001\u0000\u0000\u0000"+
		"\u00bd\u001d\u0001\u0000\u0000\u0000\u00be\u00bf\u0005\u0017\u0000\u0000"+
		"\u00bf\u001f\u0001\u0000\u0000\u0000\u00c0\u00c1\u0005\u0018\u0000\u0000"+
		"\u00c1!\u0001\u0000\u0000\u0000\u00c2\u00c3\u0005\u0019\u0000\u0000\u00c3"+
		"\u00c4\u0003R)\u0000\u00c4\u00c5\u0005\u000b\u0000\u0000\u00c5#\u0001"+
		"\u0000\u0000\u0000\u00c6\u00c7\u0005\u001a\u0000\u0000\u00c7%\u0001\u0000"+
		"\u0000\u0000\u00c8\u00c9\u0003(\u0014\u0000\u00c9\'\u0001\u0000\u0000"+
		"\u0000\u00ca\u00cf\u0003*\u0015\u0000\u00cb\u00cc\u0005\u001b\u0000\u0000"+
		"\u00cc\u00ce\u0003*\u0015\u0000\u00cd\u00cb\u0001\u0000\u0000\u0000\u00ce"+
		"\u00d1\u0001\u0000\u0000\u0000\u00cf\u00cd\u0001\u0000\u0000\u0000\u00cf"+
		"\u00d0\u0001\u0000\u0000\u0000\u00d0)\u0001\u0000\u0000\u0000\u00d1\u00cf"+
		"\u0001\u0000\u0000\u0000\u00d2\u00d7\u0003,\u0016\u0000\u00d3\u00d4\u0005"+
		"\u001c\u0000\u0000\u00d4\u00d6\u0003,\u0016\u0000\u00d5\u00d3\u0001\u0000"+
		"\u0000\u0000\u00d6\u00d9\u0001\u0000\u0000\u0000\u00d7\u00d5\u0001\u0000"+
		"\u0000\u0000\u00d7\u00d8\u0001\u0000\u0000\u0000\u00d8+\u0001\u0000\u0000"+
		"\u0000\u00d9\u00d7\u0001\u0000\u0000\u0000\u00da\u00db\u0005\u001d\u0000"+
		"\u0000\u00db\u00de\u0003,\u0016\u0000\u00dc\u00de\u0003.\u0017\u0000\u00dd"+
		"\u00da\u0001\u0000\u0000\u0000\u00dd\u00dc\u0001\u0000\u0000\u0000\u00de"+
		"-\u0001\u0000\u0000\u0000\u00df\u00e8\u00030\u0018\u0000\u00e0\u00e8\u0003"+
		"2\u0019\u0000\u00e1\u00e8\u00034\u001a\u0000\u00e2\u00e8\u00036\u001b"+
		"\u0000\u00e3\u00e8\u00038\u001c\u0000\u00e4\u00e8\u0003<\u001e\u0000\u00e5"+
		"\u00e8\u0003B!\u0000\u00e6\u00e8\u0003:\u001d\u0000\u00e7\u00df\u0001"+
		"\u0000\u0000\u0000\u00e7\u00e0\u0001\u0000\u0000\u0000\u00e7\u00e1\u0001"+
		"\u0000\u0000\u0000\u00e7\u00e2\u0001\u0000\u0000\u0000\u00e7\u00e3\u0001"+
		"\u0000\u0000\u0000\u00e7\u00e4\u0001\u0000\u0000\u0000\u00e7\u00e5\u0001"+
		"\u0000\u0000\u0000\u00e7\u00e6\u0001\u0000\u0000\u0000\u00e8/\u0001\u0000"+
		"\u0000\u0000\u00e9\u00ea\u0005\u001e\u0000\u0000\u00ea1\u0001\u0000\u0000"+
		"\u0000\u00eb\u00ec\u0005\u001f\u0000\u0000\u00ec3\u0001\u0000\u0000\u0000"+
		"\u00ed\u00ee\u0005\t\u0000\u0000\u00ee\u00ef\u0003&\u0013\u0000\u00ef"+
		"\u00f0\u0005\u000b\u0000\u0000\u00f05\u0001\u0000\u0000\u0000\u00f1\u00f2"+
		"\u0003R)\u0000\u00f2\u00f3\u0005,\u0000\u0000\u00f3\u00f4\u0003R)\u0000"+
		"\u00f47\u0001\u0000\u0000\u0000\u00f5\u00f6\u0003L&\u0000\u00f6\u00f7"+
		"\u0007\u0000\u0000\u0000\u00f7\u00f8\u0003L&\u0000\u00f89\u0001\u0000"+
		"\u0000\u0000\u00f9\u00fa\u0005\"\u0000\u0000\u00fa;\u0001\u0000\u0000"+
		"\u0000\u00fb\u00fe\u0003>\u001f\u0000\u00fc\u00fe\u0003@ \u0000\u00fd"+
		"\u00fb\u0001\u0000\u0000\u0000\u00fd\u00fc\u0001\u0000\u0000\u0000\u00fe"+
		"=\u0001\u0000\u0000\u0000\u00ff\u0100\u0005#\u0000\u0000\u0100?\u0001"+
		"\u0000\u0000\u0000\u0101\u0102\u0005$\u0000\u0000\u0102A\u0001\u0000\u0000"+
		"\u0000\u0103\u0108\u0003D\"\u0000\u0104\u0108\u0003F#\u0000\u0105\u0108"+
		"\u0003H$\u0000\u0106\u0108\u0003J%\u0000\u0107\u0103\u0001\u0000\u0000"+
		"\u0000\u0107\u0104\u0001\u0000\u0000\u0000\u0107\u0105\u0001\u0000\u0000"+
		"\u0000\u0107\u0106\u0001\u0000\u0000\u0000\u0108C\u0001\u0000\u0000\u0000"+
		"\u0109\u010a\u0005%\u0000\u0000\u010aE\u0001\u0000\u0000\u0000\u010b\u010c"+
		"\u0005&\u0000\u0000\u010cG\u0001\u0000\u0000\u0000\u010d\u010e\u0005\'"+
		"\u0000\u0000\u010eI\u0001\u0000\u0000\u0000\u010f\u0110\u0005(\u0000\u0000"+
		"\u0110K\u0001\u0000\u0000\u0000\u0111\u0115\u0005-\u0000\u0000\u0112\u0115"+
		"\u0003N\'\u0000\u0113\u0115\u0003P(\u0000\u0114\u0111\u0001\u0000\u0000"+
		"\u0000\u0114\u0112\u0001\u0000\u0000\u0000\u0114\u0113\u0001\u0000\u0000"+
		"\u0000\u0115M\u0001\u0000\u0000\u0000\u0116\u0117\u0005)\u0000\u0000\u0117"+
		"O\u0001\u0000\u0000\u0000\u0118\u0119\u0005*\u0000\u0000\u0119Q\u0001"+
		"\u0000\u0000\u0000\u011a\u011b\u0006)\uffff\uffff\u0000\u011b\u011e\u0003"+
		"T*\u0000\u011c\u011e\u0003V+\u0000\u011d\u011a\u0001\u0000\u0000\u0000"+
		"\u011d\u011c\u0001\u0000\u0000\u0000\u011e\u0124\u0001\u0000\u0000\u0000"+
		"\u011f\u0120\n\u0002\u0000\u0000\u0120\u0121\u0005+\u0000\u0000\u0121"+
		"\u0123\u0003R)\u0003\u0122\u011f\u0001\u0000\u0000\u0000\u0123\u0126\u0001"+
		"\u0000\u0000\u0000\u0124\u0122\u0001\u0000\u0000\u0000\u0124\u0125\u0001"+
		"\u0000\u0000\u0000\u0125S\u0001\u0000\u0000\u0000\u0126\u0124\u0001\u0000"+
		"\u0000\u0000\u0127\u0128\u0005/\u0000\u0000\u0128U\u0001\u0000\u0000\u0000"+
		"\u0129\u012a\u0005\t\u0000\u0000\u012a\u012b\u0003R)\u0000\u012b\u012c"+
		"\u0005\u000b\u0000\u0000\u012cW\u0001\u0000\u0000\u0000\u000ek\u0087\u0092"+
		"\u0099\u00bc\u00cf\u00d7\u00dd\u00e7\u00fd\u0107\u0114\u011d\u0124";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}