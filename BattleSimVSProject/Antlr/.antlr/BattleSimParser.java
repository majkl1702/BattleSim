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
		RULE_moveCmd = 7, RULE_turnCmd = 8, RULE_ifCondition = 9, RULE_whileCycle = 10, 
		RULE_attackCmd = 11, RULE_skipCmd = 12, RULE_boolexp = 13, RULE_orExpr = 14, 
		RULE_andExpr = 15, RULE_notExpr = 16, RULE_primaryBool = 17, RULE_blockCheck = 18, 
		RULE_orientationCheck = 19, RULE_orientation = 20, RULE_exp = 21;
	private static String[] makeRuleNames() {
		return new String[] {
			"battleSim", "map", "teamDef", "unitDef", "unitStats", "unitLogicSequence", 
			"logicCommand", "moveCmd", "turnCmd", "ifCondition", "whileCycle", "attackCmd", 
			"skipCmd", "boolexp", "orExpr", "andExpr", "notExpr", "primaryBool", 
			"blockCheck", "orientationCheck", "orientation", "exp"
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
			"'GetMyOrientation'"
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
			setState(44);
			map();
			setState(45);
			match(T__0);
			setState(46);
			match(T__1);
			setState(47);
			teamDef();
			setState(48);
			match(T__2);
			setState(49);
			match(T__3);
			setState(50);
			match(T__1);
			setState(51);
			teamDef();
			setState(52);
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
			setState(54);
			match(NUMBER);
			setState(55);
			match(T__4);
			setState(56);
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
			setState(61); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(58);
				unitDef();
				setState(59);
				match(T__5);
				}
				}
				setState(63); 
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
			setState(65);
			match(T__6);
			setState(66);
			match(NAME);
			setState(67);
			match(T__7);
			setState(68);
			match(T__8);
			setState(69);
			match(NUMBER);
			setState(70);
			match(T__9);
			setState(71);
			match(NUMBER);
			setState(72);
			match(T__10);
			setState(73);
			match(T__1);
			setState(74);
			unitStats();
			setState(75);
			unitLogicSequence();
			setState(76);
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
			setState(78);
			match(T__11);
			setState(79);
			match(NUMBER);
			setState(80);
			match(T__5);
			setState(81);
			match(T__12);
			setState(82);
			match(NUMBER);
			setState(83);
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
			setState(85);
			match(T__1);
			setState(91);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 128434176L) != 0)) {
				{
				{
				setState(86);
				logicCommand();
				setState(87);
				match(T__5);
				}
				}
				setState(93);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(94);
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
			setState(102);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__13:
				enterOuterAlt(_localctx, 1);
				{
				setState(96);
				moveCmd();
				}
				break;
			case T__14:
			case T__15:
			case T__16:
				enterOuterAlt(_localctx, 2);
				{
				setState(97);
				turnCmd();
				}
				break;
			case T__17:
				enterOuterAlt(_localctx, 3);
				{
				setState(98);
				ifCondition();
				}
				break;
			case T__20:
				enterOuterAlt(_localctx, 4);
				{
				setState(99);
				whileCycle();
				}
				break;
			case T__22:
			case T__23:
			case T__24:
				enterOuterAlt(_localctx, 5);
				{
				setState(100);
				attackCmd();
				}
				break;
			case T__25:
				enterOuterAlt(_localctx, 6);
				{
				setState(101);
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
			setState(104);
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
		public OrientationContext orientation() {
			return getRuleContext(OrientationContext.class,0);
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
			setState(112);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__14:
				enterOuterAlt(_localctx, 1);
				{
				setState(106);
				match(T__14);
				}
				break;
			case T__15:
				enterOuterAlt(_localctx, 2);
				{
				setState(107);
				match(T__15);
				}
				break;
			case T__16:
				enterOuterAlt(_localctx, 3);
				{
				setState(108);
				match(T__16);
				setState(109);
				orientation();
				setState(110);
				match(T__10);
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
	public static class IfConditionContext extends ParserRuleContext {
		public BoolexpContext boolexp() {
			return getRuleContext(BoolexpContext.class,0);
		}
		public List<LogicCommandContext> logicCommand() {
			return getRuleContexts(LogicCommandContext.class);
		}
		public LogicCommandContext logicCommand(int i) {
			return getRuleContext(LogicCommandContext.class,i);
		}
		public IfConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifCondition; }
	}

	public final IfConditionContext ifCondition() throws RecognitionException {
		IfConditionContext _localctx = new IfConditionContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_ifCondition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(114);
			match(T__17);
			setState(115);
			match(T__8);
			setState(116);
			boolexp();
			setState(117);
			match(T__10);
			setState(118);
			match(T__18);
			setState(119);
			match(T__8);
			setState(120);
			logicCommand();
			setState(121);
			match(T__10);
			setState(122);
			match(T__19);
			setState(123);
			match(T__8);
			setState(124);
			logicCommand();
			setState(125);
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
		public LogicCommandContext logicCommand() {
			return getRuleContext(LogicCommandContext.class,0);
		}
		public WhileCycleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileCycle; }
	}

	public final WhileCycleContext whileCycle() throws RecognitionException {
		WhileCycleContext _localctx = new WhileCycleContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_whileCycle);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			match(T__20);
			setState(128);
			match(T__8);
			setState(129);
			boolexp();
			setState(130);
			match(T__10);
			setState(131);
			match(T__21);
			setState(132);
			match(T__8);
			setState(133);
			logicCommand();
			setState(134);
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
		public ExpContext exp() {
			return getRuleContext(ExpContext.class,0);
		}
		public AttackCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attackCmd; }
	}

	public final AttackCmdContext attackCmd() throws RecognitionException {
		AttackCmdContext _localctx = new AttackCmdContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_attackCmd);
		try {
			setState(142);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__22:
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				match(T__22);
				}
				break;
			case T__23:
				enterOuterAlt(_localctx, 2);
				{
				setState(137);
				match(T__23);
				}
				break;
			case T__24:
				enterOuterAlt(_localctx, 3);
				{
				setState(138);
				match(T__24);
				setState(139);
				exp(0);
				setState(140);
				match(T__10);
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
	public static class SkipCmdContext extends ParserRuleContext {
		public SkipCmdContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_skipCmd; }
	}

	public final SkipCmdContext skipCmd() throws RecognitionException {
		SkipCmdContext _localctx = new SkipCmdContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_skipCmd);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
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
		enterRule(_localctx, 26, RULE_boolexp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
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
		enterRule(_localctx, 28, RULE_orExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			andExpr();
			setState(153);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__26) {
				{
				{
				setState(149);
				match(T__26);
				setState(150);
				andExpr();
				}
				}
				setState(155);
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
		enterRule(_localctx, 30, RULE_andExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(156);
			notExpr();
			setState(161);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__27) {
				{
				{
				setState(157);
				match(T__27);
				setState(158);
				notExpr();
				}
				}
				setState(163);
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
		enterRule(_localctx, 32, RULE_notExpr);
		try {
			setState(167);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__28:
				enterOuterAlt(_localctx, 1);
				{
				setState(164);
				match(T__28);
				setState(165);
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
				setState(166);
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
		public BoolexpContext boolexp() {
			return getRuleContext(BoolexpContext.class,0);
		}
		public List<ExpContext> exp() {
			return getRuleContexts(ExpContext.class);
		}
		public ExpContext exp(int i) {
			return getRuleContext(ExpContext.class,i);
		}
		public TerminalNode COMPSYMBOL() { return getToken(BattleSimParser.COMPSYMBOL, 0); }
		public List<OrientationContext> orientation() {
			return getRuleContexts(OrientationContext.class);
		}
		public OrientationContext orientation(int i) {
			return getRuleContext(OrientationContext.class,i);
		}
		public BlockCheckContext blockCheck() {
			return getRuleContext(BlockCheckContext.class,0);
		}
		public OrientationCheckContext orientationCheck() {
			return getRuleContext(OrientationCheckContext.class,0);
		}
		public PrimaryBoolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryBool; }
	}

	public final PrimaryBoolContext primaryBool() throws RecognitionException {
		PrimaryBoolContext _localctx = new PrimaryBoolContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_primaryBool);
		int _la;
		try {
			setState(186);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(169);
				match(T__29);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(170);
				match(T__30);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(171);
				match(T__8);
				setState(172);
				boolexp();
				setState(173);
				match(T__10);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(175);
				exp(0);
				setState(176);
				match(COMPSYMBOL);
				setState(177);
				exp(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(179);
				orientation();
				setState(180);
				_la = _input.LA(1);
				if ( !(_la==T__31 || _la==T__32) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(181);
				orientation();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(183);
				blockCheck();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(184);
				orientationCheck();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(185);
				match(T__33);
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
	public static class BlockCheckContext extends ParserRuleContext {
		public BlockCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockCheck; }
	}

	public final BlockCheckContext blockCheck() throws RecognitionException {
		BlockCheckContext _localctx = new BlockCheckContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_blockCheck);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
			_la = _input.LA(1);
			if ( !(_la==T__34 || _la==T__35) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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
	public static class OrientationCheckContext extends ParserRuleContext {
		public OrientationCheckContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orientationCheck; }
	}

	public final OrientationCheckContext orientationCheck() throws RecognitionException {
		OrientationCheckContext _localctx = new OrientationCheckContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_orientationCheck);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2061584302080L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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
	public static class OrientationContext extends ParserRuleContext {
		public TerminalNode ORIENTATION() { return getToken(BattleSimParser.ORIENTATION, 0); }
		public OrientationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orientation; }
	}

	public final OrientationContext orientation() throws RecognitionException {
		OrientationContext _localctx = new OrientationContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_orientation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 41781441855488L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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
	public static class ExpContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(BattleSimParser.NUMBER, 0); }
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
		int _startState = 42;
		enterRecursionRule(_localctx, 42, RULE_exp, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUMBER:
				{
				setState(195);
				match(NUMBER);
				}
				break;
			case T__8:
				{
				setState(196);
				match(T__8);
				setState(197);
				exp(0);
				setState(198);
				match(T__10);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(207);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_exp);
					setState(202);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(203);
					match(MATHSYMBOL);
					setState(204);
					exp(3);
					}
					} 
				}
				setState(209);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 21:
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
		"\u0004\u00010\u00d3\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0004\u0002"+
		">\b\u0002\u000b\u0002\f\u0002?\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0005\u0005Z\b\u0005\n\u0005\f\u0005]\t"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0003\u0006g\b\u0006\u0001\u0007\u0001"+
		"\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003\bq\b\b\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0003\u000b\u008f\b\u000b\u0001\f\u0001\f\u0001"+
		"\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u0098\b\u000e"+
		"\n\u000e\f\u000e\u009b\t\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0005"+
		"\u000f\u00a0\b\u000f\n\u000f\f\u000f\u00a3\t\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0003\u0010\u00a8\b\u0010\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0003\u0011\u00bb\b\u0011\u0001\u0012\u0001\u0012"+
		"\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0003\u0015\u00c9\b\u0015"+
		"\u0001\u0015\u0001\u0015\u0001\u0015\u0005\u0015\u00ce\b\u0015\n\u0015"+
		"\f\u0015\u00d1\t\u0015\u0001\u0015\u0000\u0001*\u0016\u0000\u0002\u0004"+
		"\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \""+
		"$&(*\u0000\u0004\u0001\u0000 !\u0001\u0000#$\u0001\u0000%(\u0002\u0000"+
		")*--\u00d3\u0000,\u0001\u0000\u0000\u0000\u00026\u0001\u0000\u0000\u0000"+
		"\u0004=\u0001\u0000\u0000\u0000\u0006A\u0001\u0000\u0000\u0000\bN\u0001"+
		"\u0000\u0000\u0000\nU\u0001\u0000\u0000\u0000\ff\u0001\u0000\u0000\u0000"+
		"\u000eh\u0001\u0000\u0000\u0000\u0010p\u0001\u0000\u0000\u0000\u0012r"+
		"\u0001\u0000\u0000\u0000\u0014\u007f\u0001\u0000\u0000\u0000\u0016\u008e"+
		"\u0001\u0000\u0000\u0000\u0018\u0090\u0001\u0000\u0000\u0000\u001a\u0092"+
		"\u0001\u0000\u0000\u0000\u001c\u0094\u0001\u0000\u0000\u0000\u001e\u009c"+
		"\u0001\u0000\u0000\u0000 \u00a7\u0001\u0000\u0000\u0000\"\u00ba\u0001"+
		"\u0000\u0000\u0000$\u00bc\u0001\u0000\u0000\u0000&\u00be\u0001\u0000\u0000"+
		"\u0000(\u00c0\u0001\u0000\u0000\u0000*\u00c8\u0001\u0000\u0000\u0000,"+
		"-\u0003\u0002\u0001\u0000-.\u0005\u0001\u0000\u0000./\u0005\u0002\u0000"+
		"\u0000/0\u0003\u0004\u0002\u000001\u0005\u0003\u0000\u000012\u0005\u0004"+
		"\u0000\u000023\u0005\u0002\u0000\u000034\u0003\u0004\u0002\u000045\u0005"+
		"\u0003\u0000\u00005\u0001\u0001\u0000\u0000\u000067\u0005/\u0000\u0000"+
		"78\u0005\u0005\u0000\u000089\u0005/\u0000\u00009\u0003\u0001\u0000\u0000"+
		"\u0000:;\u0003\u0006\u0003\u0000;<\u0005\u0006\u0000\u0000<>\u0001\u0000"+
		"\u0000\u0000=:\u0001\u0000\u0000\u0000>?\u0001\u0000\u0000\u0000?=\u0001"+
		"\u0000\u0000\u0000?@\u0001\u0000\u0000\u0000@\u0005\u0001\u0000\u0000"+
		"\u0000AB\u0005\u0007\u0000\u0000BC\u0005.\u0000\u0000CD\u0005\b\u0000"+
		"\u0000DE\u0005\t\u0000\u0000EF\u0005/\u0000\u0000FG\u0005\n\u0000\u0000"+
		"GH\u0005/\u0000\u0000HI\u0005\u000b\u0000\u0000IJ\u0005\u0002\u0000\u0000"+
		"JK\u0003\b\u0004\u0000KL\u0003\n\u0005\u0000LM\u0005\u0003\u0000\u0000"+
		"M\u0007\u0001\u0000\u0000\u0000NO\u0005\f\u0000\u0000OP\u0005/\u0000\u0000"+
		"PQ\u0005\u0006\u0000\u0000QR\u0005\r\u0000\u0000RS\u0005/\u0000\u0000"+
		"ST\u0005\u0006\u0000\u0000T\t\u0001\u0000\u0000\u0000U[\u0005\u0002\u0000"+
		"\u0000VW\u0003\f\u0006\u0000WX\u0005\u0006\u0000\u0000XZ\u0001\u0000\u0000"+
		"\u0000YV\u0001\u0000\u0000\u0000Z]\u0001\u0000\u0000\u0000[Y\u0001\u0000"+
		"\u0000\u0000[\\\u0001\u0000\u0000\u0000\\^\u0001\u0000\u0000\u0000][\u0001"+
		"\u0000\u0000\u0000^_\u0005\u0003\u0000\u0000_\u000b\u0001\u0000\u0000"+
		"\u0000`g\u0003\u000e\u0007\u0000ag\u0003\u0010\b\u0000bg\u0003\u0012\t"+
		"\u0000cg\u0003\u0014\n\u0000dg\u0003\u0016\u000b\u0000eg\u0003\u0018\f"+
		"\u0000f`\u0001\u0000\u0000\u0000fa\u0001\u0000\u0000\u0000fb\u0001\u0000"+
		"\u0000\u0000fc\u0001\u0000\u0000\u0000fd\u0001\u0000\u0000\u0000fe\u0001"+
		"\u0000\u0000\u0000g\r\u0001\u0000\u0000\u0000hi\u0005\u000e\u0000\u0000"+
		"i\u000f\u0001\u0000\u0000\u0000jq\u0005\u000f\u0000\u0000kq\u0005\u0010"+
		"\u0000\u0000lm\u0005\u0011\u0000\u0000mn\u0003(\u0014\u0000no\u0005\u000b"+
		"\u0000\u0000oq\u0001\u0000\u0000\u0000pj\u0001\u0000\u0000\u0000pk\u0001"+
		"\u0000\u0000\u0000pl\u0001\u0000\u0000\u0000q\u0011\u0001\u0000\u0000"+
		"\u0000rs\u0005\u0012\u0000\u0000st\u0005\t\u0000\u0000tu\u0003\u001a\r"+
		"\u0000uv\u0005\u000b\u0000\u0000vw\u0005\u0013\u0000\u0000wx\u0005\t\u0000"+
		"\u0000xy\u0003\f\u0006\u0000yz\u0005\u000b\u0000\u0000z{\u0005\u0014\u0000"+
		"\u0000{|\u0005\t\u0000\u0000|}\u0003\f\u0006\u0000}~\u0005\u000b\u0000"+
		"\u0000~\u0013\u0001\u0000\u0000\u0000\u007f\u0080\u0005\u0015\u0000\u0000"+
		"\u0080\u0081\u0005\t\u0000\u0000\u0081\u0082\u0003\u001a\r\u0000\u0082"+
		"\u0083\u0005\u000b\u0000\u0000\u0083\u0084\u0005\u0016\u0000\u0000\u0084"+
		"\u0085\u0005\t\u0000\u0000\u0085\u0086\u0003\f\u0006\u0000\u0086\u0087"+
		"\u0005\u000b\u0000\u0000\u0087\u0015\u0001\u0000\u0000\u0000\u0088\u008f"+
		"\u0005\u0017\u0000\u0000\u0089\u008f\u0005\u0018\u0000\u0000\u008a\u008b"+
		"\u0005\u0019\u0000\u0000\u008b\u008c\u0003*\u0015\u0000\u008c\u008d\u0005"+
		"\u000b\u0000\u0000\u008d\u008f\u0001\u0000\u0000\u0000\u008e\u0088\u0001"+
		"\u0000\u0000\u0000\u008e\u0089\u0001\u0000\u0000\u0000\u008e\u008a\u0001"+
		"\u0000\u0000\u0000\u008f\u0017\u0001\u0000\u0000\u0000\u0090\u0091\u0005"+
		"\u001a\u0000\u0000\u0091\u0019\u0001\u0000\u0000\u0000\u0092\u0093\u0003"+
		"\u001c\u000e\u0000\u0093\u001b\u0001\u0000\u0000\u0000\u0094\u0099\u0003"+
		"\u001e\u000f\u0000\u0095\u0096\u0005\u001b\u0000\u0000\u0096\u0098\u0003"+
		"\u001e\u000f\u0000\u0097\u0095\u0001\u0000\u0000\u0000\u0098\u009b\u0001"+
		"\u0000\u0000\u0000\u0099\u0097\u0001\u0000\u0000\u0000\u0099\u009a\u0001"+
		"\u0000\u0000\u0000\u009a\u001d\u0001\u0000\u0000\u0000\u009b\u0099\u0001"+
		"\u0000\u0000\u0000\u009c\u00a1\u0003 \u0010\u0000\u009d\u009e\u0005\u001c"+
		"\u0000\u0000\u009e\u00a0\u0003 \u0010\u0000\u009f\u009d\u0001\u0000\u0000"+
		"\u0000\u00a0\u00a3\u0001\u0000\u0000\u0000\u00a1\u009f\u0001\u0000\u0000"+
		"\u0000\u00a1\u00a2\u0001\u0000\u0000\u0000\u00a2\u001f\u0001\u0000\u0000"+
		"\u0000\u00a3\u00a1\u0001\u0000\u0000\u0000\u00a4\u00a5\u0005\u001d\u0000"+
		"\u0000\u00a5\u00a8\u0003 \u0010\u0000\u00a6\u00a8\u0003\"\u0011\u0000"+
		"\u00a7\u00a4\u0001\u0000\u0000\u0000\u00a7\u00a6\u0001\u0000\u0000\u0000"+
		"\u00a8!\u0001\u0000\u0000\u0000\u00a9\u00bb\u0005\u001e\u0000\u0000\u00aa"+
		"\u00bb\u0005\u001f\u0000\u0000\u00ab\u00ac\u0005\t\u0000\u0000\u00ac\u00ad"+
		"\u0003\u001a\r\u0000\u00ad\u00ae\u0005\u000b\u0000\u0000\u00ae\u00bb\u0001"+
		"\u0000\u0000\u0000\u00af\u00b0\u0003*\u0015\u0000\u00b0\u00b1\u0005,\u0000"+
		"\u0000\u00b1\u00b2\u0003*\u0015\u0000\u00b2\u00bb\u0001\u0000\u0000\u0000"+
		"\u00b3\u00b4\u0003(\u0014\u0000\u00b4\u00b5\u0007\u0000\u0000\u0000\u00b5"+
		"\u00b6\u0003(\u0014\u0000\u00b6\u00bb\u0001\u0000\u0000\u0000\u00b7\u00bb"+
		"\u0003$\u0012\u0000\u00b8\u00bb\u0003&\u0013\u0000\u00b9\u00bb\u0005\""+
		"\u0000\u0000\u00ba\u00a9\u0001\u0000\u0000\u0000\u00ba\u00aa\u0001\u0000"+
		"\u0000\u0000\u00ba\u00ab\u0001\u0000\u0000\u0000\u00ba\u00af\u0001\u0000"+
		"\u0000\u0000\u00ba\u00b3\u0001\u0000\u0000\u0000\u00ba\u00b7\u0001\u0000"+
		"\u0000\u0000\u00ba\u00b8\u0001\u0000\u0000\u0000\u00ba\u00b9\u0001\u0000"+
		"\u0000\u0000\u00bb#\u0001\u0000\u0000\u0000\u00bc\u00bd\u0007\u0001\u0000"+
		"\u0000\u00bd%\u0001\u0000\u0000\u0000\u00be\u00bf\u0007\u0002\u0000\u0000"+
		"\u00bf\'\u0001\u0000\u0000\u0000\u00c0\u00c1\u0007\u0003\u0000\u0000\u00c1"+
		")\u0001\u0000\u0000\u0000\u00c2\u00c3\u0006\u0015\uffff\uffff\u0000\u00c3"+
		"\u00c9\u0005/\u0000\u0000\u00c4\u00c5\u0005\t\u0000\u0000\u00c5\u00c6"+
		"\u0003*\u0015\u0000\u00c6\u00c7\u0005\u000b\u0000\u0000\u00c7\u00c9\u0001"+
		"\u0000\u0000\u0000\u00c8\u00c2\u0001\u0000\u0000\u0000\u00c8\u00c4\u0001"+
		"\u0000\u0000\u0000\u00c9\u00cf\u0001\u0000\u0000\u0000\u00ca\u00cb\n\u0002"+
		"\u0000\u0000\u00cb\u00cc\u0005+\u0000\u0000\u00cc\u00ce\u0003*\u0015\u0003"+
		"\u00cd\u00ca\u0001\u0000\u0000\u0000\u00ce\u00d1\u0001\u0000\u0000\u0000"+
		"\u00cf\u00cd\u0001\u0000\u0000\u0000\u00cf\u00d0\u0001\u0000\u0000\u0000"+
		"\u00d0+\u0001\u0000\u0000\u0000\u00d1\u00cf\u0001\u0000\u0000\u0000\u000b"+
		"?[fp\u008e\u0099\u00a1\u00a7\u00ba\u00c8\u00cf";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}