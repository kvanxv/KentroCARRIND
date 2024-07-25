
// Generated from KentroComputer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "KentroComputerParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KentroComputerParser.
 */
class  KentroComputerVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KentroComputerParser.
   */
    virtual std::any visitProg(KentroComputerParser::ProgContext *context) = 0;

    virtual std::any visitPrintExpr(KentroComputerParser::PrintExprContext *context) = 0;

    virtual std::any visitBlank(KentroComputerParser::BlankContext *context) = 0;

    virtual std::any visitIdImplicitMultiply(KentroComputerParser::IdImplicitMultiplyContext *context) = 0;

    virtual std::any visitParens(KentroComputerParser::ParensContext *context) = 0;

    virtual std::any visitMulDiv(KentroComputerParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(KentroComputerParser::AddSubContext *context) = 0;

    virtual std::any visitAtomic(KentroComputerParser::AtomicContext *context) = 0;

    virtual std::any visitUnaryMinus(KentroComputerParser::UnaryMinusContext *context) = 0;

    virtual std::any visitImplicitMultiply(KentroComputerParser::ImplicitMultiplyContext *context) = 0;

    virtual std::any visitPower(KentroComputerParser::PowerContext *context) = 0;

    virtual std::any visitNumber(KentroComputerParser::NumberContext *context) = 0;


};

