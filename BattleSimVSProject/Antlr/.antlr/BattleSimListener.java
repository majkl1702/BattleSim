// Generated from d:/BattleSim/Antlr/BattleSim.g4 by ANTLR 4.13.1
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
	 * Enter a parse tree produced by {@link BattleSimParser#exp}.
	 * @param ctx the parse tree
	 */
	void enterExp(BattleSimParser.ExpContext ctx);
	/**
	 * Exit a parse tree produced by {@link BattleSimParser#exp}.
	 * @param ctx the parse tree
	 */
	void exitExp(BattleSimParser.ExpContext ctx);
}