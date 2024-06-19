grammar KentroComputer;

prog:   stat+ ;

stat:   expr (NEWLINE | EOF)               # printExpr
    |   NEWLINE                     # blank
    ;

expr:   expr '(' expr ')'           # implicitMultiply
    |   number '(' expr ')'             # idImplicitMultiply
    |   '(' expr ')'                # parens
    |   '-' expr                    # unaryMinus
    |   expr '^' expr               # power
    |   expr op=('*'|'/') expr      # MulDiv
    |   expr op=('+'|'-') expr      # AddSub
    |   number                      # atomic
    ;

number: INT | FLOAT ;

MUL :   '*' ; // assigns token name to '*' operator
DIV :   '/' ; // assigns token name to '/' operator
ADD :   '+' ; // assigns token name to '+' operator
SUB :   '-' ; // assigns token name to '-' operator
INT :   '-'?[0-9]+ ;   // match integers
FLOAT: '-'?[0-9]*'.'[0-9]+ ; // match floating point numbers
NEWLINE:'\r'? '\n' ; // return new line char sequence (handles Windows, Unix inputs)
WS  :   [ \t]+ -> skip ; // toss out whitespace
POW :   '^' ; // assigns token name to '^' operator