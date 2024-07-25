
// Generated from SymbolComputation.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SymbolComputationParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SymbolComputationParser.
 */
class  SymbolComputationVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SymbolComputationParser.
   */
    virtual std::any visitProgram(SymbolComputationParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(SymbolComputationParser::StatementContext *context) = 0;

    virtual std::any visitPolynomialExpr(SymbolComputationParser::PolynomialExprContext *context) = 0;

    virtual std::any visitMulExpr(SymbolComputationParser::MulExprContext *context) = 0;

    virtual std::any visitTermComponent(SymbolComputationParser::TermComponentContext *context) = 0;

    virtual std::any visitCoefficient(SymbolComputationParser::CoefficientContext *context) = 0;

    virtual std::any visitParensPolynomialExpr(SymbolComputationParser::ParensPolynomialExprContext *context) = 0;

    virtual std::any visitNumber(SymbolComputationParser::NumberContext *context) = 0;

    virtual std::any visitVariable(SymbolComputationParser::VariableContext *context) = 0;

    virtual std::any visitExponent(SymbolComputationParser::ExponentContext *context) = 0;


};

