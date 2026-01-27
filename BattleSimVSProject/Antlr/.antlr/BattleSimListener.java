// Generated from d:/BattleSim/BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link BattleSimParser}.
 */
public interface BattleSimListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#battleSim}.
	 * @param ctx the parse tree
	 */
	void enterBattleSim(BattleSimParser.BattleSimContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#battleSim}.
	 * @param ctx the parse tree
	 */
	void exitBattleSim(BattleSimParser.BattleSimContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#map}.
	 * @param ctx the parse tree
	 */
	void enterMap(BattleSimParser.MapContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#map}.
	 * @param ctx the parse tree
	 */
	void exitMap(BattleSimParser.MapContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#teamDef}.
	 * @param ctx the parse tree
	 */
	void enterTeamDef(BattleSimParser.TeamDefContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#teamDef}.
	 * @param ctx the parse tree
	 */
	void exitTeamDef(BattleSimParser.TeamDefContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#unitDef}.
	 * @param ctx the parse tree
	 */
	void enterUnitDef(BattleSimParser.UnitDefContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#unitDef}.
	 * @param ctx the parse tree
	 */
	void exitUnitDef(BattleSimParser.UnitDefContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#unitStats}.
	 * @param ctx the parse tree
	 */
	void enterUnitStats(BattleSimParser.UnitStatsContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#unitStats}.
	 * @param ctx the parse tree
	 */
	void exitUnitStats(BattleSimParser.UnitStatsContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#unitLogicSequence}.
	 * @param ctx the parse tree
	 */
	void enterUnitLogicSequence(BattleSimParser.UnitLogicSequenceContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#unitLogicSequence}.
	 * @param ctx the parse tree
	 */
	void exitUnitLogicSequence(BattleSimParser.UnitLogicSequenceContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#logicCommand}.
	 * @param ctx the parse tree
	 */
	void enterLogicCommand(BattleSimParser.LogicCommandContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#logicCommand}.
	 * @param ctx the parse tree
	 */
	void exitLogicCommand(BattleSimParser.LogicCommandContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#moveCmd}.
	 * @param ctx the parse tree
	 */
	void enterMoveCmd(BattleSimParser.MoveCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#moveCmd}.
	 * @param ctx the parse tree
	 */
	void exitMoveCmd(BattleSimParser.MoveCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#turnCmd}.
	 * @param ctx the parse tree
	 */
	void enterTurnCmd(BattleSimParser.TurnCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#turnCmd}.
	 * @param ctx the parse tree
	 */
	void exitTurnCmd(BattleSimParser.TurnCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#turnLeftCmd}.
	 * @param ctx the parse tree
	 */
	void enterTurnLeftCmd(BattleSimParser.TurnLeftCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#turnLeftCmd}.
	 * @param ctx the parse tree
	 */
	void exitTurnLeftCmd(BattleSimParser.TurnLeftCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#turnRightCmd}.
	 * @param ctx the parse tree
	 */
	void enterTurnRightCmd(BattleSimParser.TurnRightCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#turnRightCmd}.
	 * @param ctx the parse tree
	 */
	void exitTurnRightCmd(BattleSimParser.TurnRightCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#turnOrientationCmd}.
	 * @param ctx the parse tree
	 */
	void enterTurnOrientationCmd(BattleSimParser.TurnOrientationCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#turnOrientationCmd}.
	 * @param ctx the parse tree
	 */
	void exitTurnOrientationCmd(BattleSimParser.TurnOrientationCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#ifCondition}.
	 * @param ctx the parse tree
	 */
	void enterIfCondition(BattleSimParser.IfConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#ifCondition}.
	 * @param ctx the parse tree
	 */
	void exitIfCondition(BattleSimParser.IfConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#whileCycle}.
	 * @param ctx the parse tree
	 */
	void enterWhileCycle(BattleSimParser.WhileCycleContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#whileCycle}.
	 * @param ctx the parse tree
	 */
	void exitWhileCycle(BattleSimParser.WhileCycleContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#attackCmd}.
	 * @param ctx the parse tree
	 */
	void enterAttackCmd(BattleSimParser.AttackCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#attackCmd}.
	 * @param ctx the parse tree
	 */
	void exitAttackCmd(BattleSimParser.AttackCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#attackAroundSelfCmd}.
	 * @param ctx the parse tree
	 */
	void enterAttackAroundSelfCmd(BattleSimParser.AttackAroundSelfCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#attackAroundSelfCmd}.
	 * @param ctx the parse tree
	 */
	void exitAttackAroundSelfCmd(BattleSimParser.AttackAroundSelfCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#attackInFrontCmd}.
	 * @param ctx the parse tree
	 */
	void enterAttackInFrontCmd(BattleSimParser.AttackInFrontCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#attackInFrontCmd}.
	 * @param ctx the parse tree
	 */
	void exitAttackInFrontCmd(BattleSimParser.AttackInFrontCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#rangeAttackCmd}.
	 * @param ctx the parse tree
	 */
	void enterRangeAttackCmd(BattleSimParser.RangeAttackCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#rangeAttackCmd}.
	 * @param ctx the parse tree
	 */
	void exitRangeAttackCmd(BattleSimParser.RangeAttackCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#skipCmd}.
	 * @param ctx the parse tree
	 */
	void enterSkipCmd(BattleSimParser.SkipCmdContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#skipCmd}.
	 * @param ctx the parse tree
	 */
	void exitSkipCmd(BattleSimParser.SkipCmdContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#boolexp}.
	 * @param ctx the parse tree
	 */
	void enterBoolexp(BattleSimParser.BoolexpContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#boolexp}.
	 * @param ctx the parse tree
	 */
	void exitBoolexp(BattleSimParser.BoolexpContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#orExpr}.
	 * @param ctx the parse tree
	 */
	void enterOrExpr(BattleSimParser.OrExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#orExpr}.
	 * @param ctx the parse tree
	 */
	void exitOrExpr(BattleSimParser.OrExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#andExpr}.
	 * @param ctx the parse tree
	 */
	void enterAndExpr(BattleSimParser.AndExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#andExpr}.
	 * @param ctx the parse tree
	 */
	void exitAndExpr(BattleSimParser.AndExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#notExpr}.
	 * @param ctx the parse tree
	 */
	void enterNotExpr(BattleSimParser.NotExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#notExpr}.
	 * @param ctx the parse tree
	 */
	void exitNotExpr(BattleSimParser.NotExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#primaryBool}.
	 * @param ctx the parse tree
	 */
	void enterPrimaryBool(BattleSimParser.PrimaryBoolContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#primaryBool}.
	 * @param ctx the parse tree
	 */
	void exitPrimaryBool(BattleSimParser.PrimaryBoolContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#true}.
	 * @param ctx the parse tree
	 */
	void enterTrue(BattleSimParser.TrueContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#true}.
	 * @param ctx the parse tree
	 */
	void exitTrue(BattleSimParser.TrueContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#false}.
	 * @param ctx the parse tree
	 */
	void enterFalse(BattleSimParser.FalseContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#false}.
	 * @param ctx the parse tree
	 */
	void exitFalse(BattleSimParser.FalseContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#parenthesesBool}.
	 * @param ctx the parse tree
	 */
	void enterParenthesesBool(BattleSimParser.ParenthesesBoolContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#parenthesesBool}.
	 * @param ctx the parse tree
	 */
	void exitParenthesesBool(BattleSimParser.ParenthesesBoolContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#comparisonBool}.
	 * @param ctx the parse tree
	 */
	void enterComparisonBool(BattleSimParser.ComparisonBoolContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#comparisonBool}.
	 * @param ctx the parse tree
	 */
	void exitComparisonBool(BattleSimParser.ComparisonBoolContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#orientationEqualityCheck}.
	 * @param ctx the parse tree
	 */
	void enterOrientationEqualityCheck(BattleSimParser.OrientationEqualityCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#orientationEqualityCheck}.
	 * @param ctx the parse tree
	 */
	void exitOrientationEqualityCheck(BattleSimParser.OrientationEqualityCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#enemyNearbyCheck}.
	 * @param ctx the parse tree
	 */
	void enterEnemyNearbyCheck(BattleSimParser.EnemyNearbyCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#enemyNearbyCheck}.
	 * @param ctx the parse tree
	 */
	void exitEnemyNearbyCheck(BattleSimParser.EnemyNearbyCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#blockCheck}.
	 * @param ctx the parse tree
	 */
	void enterBlockCheck(BattleSimParser.BlockCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#blockCheck}.
	 * @param ctx the parse tree
	 */
	void exitBlockCheck(BattleSimParser.BlockCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#isFrontClearCheck}.
	 * @param ctx the parse tree
	 */
	void enterIsFrontClearCheck(BattleSimParser.IsFrontClearCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#isFrontClearCheck}.
	 * @param ctx the parse tree
	 */
	void exitIsFrontClearCheck(BattleSimParser.IsFrontClearCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#isFrontBlockedCheck}.
	 * @param ctx the parse tree
	 */
	void enterIsFrontBlockedCheck(BattleSimParser.IsFrontBlockedCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#isFrontBlockedCheck}.
	 * @param ctx the parse tree
	 */
	void exitIsFrontBlockedCheck(BattleSimParser.IsFrontBlockedCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#orientationCheck}.
	 * @param ctx the parse tree
	 */
	void enterOrientationCheck(BattleSimParser.OrientationCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#orientationCheck}.
	 * @param ctx the parse tree
	 */
	void exitOrientationCheck(BattleSimParser.OrientationCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#facingNCheck}.
	 * @param ctx the parse tree
	 */
	void enterFacingNCheck(BattleSimParser.FacingNCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#facingNCheck}.
	 * @param ctx the parse tree
	 */
	void exitFacingNCheck(BattleSimParser.FacingNCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#facingWCheck}.
	 * @param ctx the parse tree
	 */
	void enterFacingWCheck(BattleSimParser.FacingWCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#facingWCheck}.
	 * @param ctx the parse tree
	 */
	void exitFacingWCheck(BattleSimParser.FacingWCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#facingECheck}.
	 * @param ctx the parse tree
	 */
	void enterFacingECheck(BattleSimParser.FacingECheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#facingECheck}.
	 * @param ctx the parse tree
	 */
	void exitFacingECheck(BattleSimParser.FacingECheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#facingSCheck}.
	 * @param ctx the parse tree
	 */
	void enterFacingSCheck(BattleSimParser.FacingSCheckContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#facingSCheck}.
	 * @param ctx the parse tree
	 */
	void exitFacingSCheck(BattleSimParser.FacingSCheckContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#orientation}.
	 * @param ctx the parse tree
	 */
	void enterOrientation(BattleSimParser.OrientationContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#orientation}.
	 * @param ctx the parse tree
	 */
	void exitOrientation(BattleSimParser.OrientationContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#getNearbyEnemyOrientation}.
	 * @param ctx the parse tree
	 */
	void enterGetNearbyEnemyOrientation(BattleSimParser.GetNearbyEnemyOrientationContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#getNearbyEnemyOrientation}.
	 * @param ctx the parse tree
	 */
	void exitGetNearbyEnemyOrientation(BattleSimParser.GetNearbyEnemyOrientationContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#getMyOrientation}.
	 * @param ctx the parse tree
	 */
	void enterGetMyOrientation(BattleSimParser.GetMyOrientationContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#getMyOrientation}.
	 * @param ctx the parse tree
	 */
	void exitGetMyOrientation(BattleSimParser.GetMyOrientationContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#exp}.
	 * @param ctx the parse tree
	 */
	void enterExp(BattleSimParser.ExpContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#exp}.
	 * @param ctx the parse tree
	 */
	void exitExp(BattleSimParser.ExpContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#atomicExp}.
	 * @param ctx the parse tree
	 */
	void enterAtomicExp(BattleSimParser.AtomicExpContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#atomicExp}.
	 * @param ctx the parse tree
	 */
	void exitAtomicExp(BattleSimParser.AtomicExpContext ctx);
	/**
	 * Enter a parse tree produced by {@link BattleSimParser#parenthesesExp}.
	 * @param ctx the parse tree
	 */
	void enterParenthesesExp(BattleSimParser.ParenthesesExpContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#parenthesesExp}.
	 * @param ctx the parse tree
	 */
	void exitParenthesesExp(BattleSimParser.ParenthesesExpContext ctx);
}