//java -jar ./BattleSimVSProject/Antlr/antlr-4.13.2-complete.jar -Dlanguage=Cpp -visitor -o ./BattleSimVsProject/Antlr/Generated ./BattleSimVSProject/Antlr/BattleSim.g4
grammar BattleSim;

// Parser rules
battleSim: map 'TeamBlue' '{' teamDef '}' 'TeamRed' '{' teamDef '}';

// Todo extend to add walls, traps, etc...
map: NUMBER 'x' NUMBER;

teamDef: (unitDef ';')+;

// Units - name, position, config
unitDef: 'unit' NAME 'at' '(' NUMBER ',' NUMBER ')' '{' unitStats unitLogicSequence '}';

// Todo add more stats
unitStats: 'health:' NUMBER ';' 'attack:' NUMBER ';';

//-------------------------------UNIT-LOGIC-LANGUAGE-------------------------------//

unitLogicSequence: '{' (logicCommand ';')* '}';

// Unit logic
logicCommand: moveCmd | turnCmd | ifCondition | whileCycle | attackCmd | skipCmd;

moveCmd: 'MoveForward()';

turnCmd: turnLeftCmd | turnRightCmd | turnOrientationCmd;
turnLeftCmd: 'TurnLeft()';
turnRightCmd: 'TurnRight()';
turnOrientationCmd: 'Turn(' orientation ')';

ifCondition: 'if' '(' boolexp ')' 'then' '(' unitLogicSequence ')' 'else' '(' unitLogicSequence ')';

whileCycle: 'while' '(' boolexp ')' 'do' '(' logicCommand ')';

attackCmd: attackAroundSelfCmd | attackInFrontCmd | rangeAttackCmd;
attackAroundSelfCmd: 'AttackAroundSelf()';
attackInFrontCmd: 'AttackInFront()';
rangeAttackCmd: 'RangeAttack(' exp ')';

skipCmd: 'skip';

// -------------- BOOL -------------- //
boolexp
    : orExpr
    ;

orExpr
    : andExpr ('||' andExpr)*
    ;

andExpr
    : notExpr ('&&' notExpr)*
    ;

notExpr
    : '!' notExpr
    | primaryBool
    ;

primaryBool
    : true
    | false
    | parenthesesBool
    | comparisonBool
    | orientationEqualityCheck
    | blockCheck
    | orientationCheck
    | enemyNearbyCheck;

true: 'true';
false: 'false';
parenthesesBool: '(' boolexp ')';
comparisonBool: exp COMPSYMBOL exp;
orientationEqualityCheck: orientation ('==' | '!=') orientation;
enemyNearbyCheck: 'IsEnemyNearby()';
    
// -------------- Other -------------- //
    	
blockCheck: isFrontClearCheck | isFrontBlockedCheck;

isFrontClearCheck: 'IsFrontClear()';
isFrontBlockedCheck: 'IsFrontBlocked()';

orientationCheck: facingNCheck | facingWCheck | facingECheck | facingSCheck;
facingNCheck: 'FacingNorth()';
facingWCheck: 'FacingWest()';
facingECheck: 'FacingEast()';
facingSCheck: 'FacingSouth()';

orientation: ORIENTATION | getNearbyEnemyOrientation | getMyOrientation;
getNearbyEnemyOrientation: 'GetNearbyEnemyOrientation()';
getMyOrientation: 'GetMyOrientation()';
	
exp: atomicExp | exp MATHSYMBOL exp | parenthesesExp;
atomicExp : NUMBER;
parenthesesExp: '(' exp ')';


// Lexer rules

MATHSYMBOL : '+' | '-' | '*' | '/';

COMPSYMBOL : '<=' | '<' | '>' | '==' | '>=' | '!=';

ORIENTATION : 'N' | 'W' | 'E' | 'S' | 'SW' | 'SE' | 'NW' | 'NE';

NAME: [a-zA-Z]+;

NUMBER: [0-9]+ ('.' [0-9]+)?;

WS: [ \t\r\n]+ -> skip;