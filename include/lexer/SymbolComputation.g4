grammar SymbolComputation;

// Entry point for parsing
program: statement EOF;

// A statement can be either an expression or an equation
statement: polynomialExpr ('=' polynomialExpr)?;

// A polynomial expression which can be addition or subtraction of terms
polynomialExpr: mulExpr ((ADD_OP) mulExpr)*;

// A multiplicative expression which can be a product of term components
mulExpr: termComponent (MUL_OP termComponent)*;

termComponent
    : coefficient variable exponent?        // Ax^n, bx
    | variable exponent?                    // x^n, x
    | coefficient                           // c
    | parensPolynomialExpr                  // (expression)
    ;

// A coefficient can be optionally preceded by a plus or minus sign
coefficient: ADD_OP? number;

// Parentheses enclosing a polynomial expression
parensPolynomialExpr: '(' polynomialExpr ')';

// A term component can include a number, a variable, or both, optionally with an exponent
number: INT;
variable: VAR;
exponent: EXP INT;

MUL_OP: '*' ;
ADD_OP: '+' | '-' ;
INT: [0-9]+ ;
VAR: [a-zA-Z]+ ;
EXP: '^' ;
WS: [ \t\r\n]+ -> skip ;