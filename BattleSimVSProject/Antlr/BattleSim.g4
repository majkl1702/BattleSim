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

turnCmd: 'TurnLeft()' | 'TurnRight()' | 'Turn(' orientation ')';

ifCondition: 'if' '(' boolexp ')' 'then' '(' logicCommand ')' 'else' '(' logicCommand ')';

whileCycle: 'while' '(' boolexp ')' 'do' '(' logicCommand ')';

attackCmd: 'AttackAroundSelf()' | 'AttackInFront()' | 'RangeAttack(' exp ')';

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
    : 'true'
    | 'false'
    | '(' boolexp ')'
    | exp COMPSYMBOL exp
    | orientation ('==' | '!=') orientation
    | blockCheck
    | orientationCheck
    | 'IsEnemyNearby()'
    ;
    
// -------------- Other -------------- //
    	
blockCheck: 'IsFrontClear()' | 'IsFrontBlocked()';

orientationCheck: 'FacingNorth()' | 'FacingWest()' | 'FacingEast()' | 'FacingSouth()';

orientation: ORIENTATION | 'GetNearbyEnemyOrientation()' | 'GetMyOrientation';
	
exp: NUMBER | exp MATHSYMBOL exp | '(' exp ')';


// Lexer rules

MATHSYMBOL : '+' | '-' | '*' | '/';

COMPSYMBOL : '<=' | '<' | '>' | '==' | '>=' | '!=';

ORIENTATION : 'N' | 'W' | 'E' | 'S' | 'SW' | 'SE' | 'NW' | 'NE';

NAME: [a-zA-Z]+;

NUMBER: [0-9]+ ('.' [0-9]+)?;

WS: [ \t\r\n]+ -> skip;