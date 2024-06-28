#pragma once
#include "../../grammar/libsAntlr4.hpp"

class EvaluatorKentroComputer : public KentroComputerBaseVisitor
{
public:
    /*virtual antlrcpp::Any visitAssign(KentroComputerParser::AssignContext* ctx) override;

    virtual antlrcpp::Any visitBlank(KentroComputerParser::BlankContext* ctx) override;


    virtual antlrcpp::Any visitAtomic(KentroComputerParser::AtomicContext* ctx) override;

    virtual antlrcpp::Any visitUnaryMinus(KentroComputerParser::UnaryMinusContext* ctx) override;*/

    std::any visitPower(KentroComputerParser::PowerContext* ctxPower) override;
    std::any visitIdImplicitMultiply(KentroComputerParser::IdImplicitMultiplyContext *ctxIdImplicitMultiply) override;
    std::any visitImplicitMultiply(KentroComputerParser::ImplicitMultiplyContext *ctxImplicitMultiply) override;
    std::any visitMulDiv(KentroComputerParser::MulDivContext* ctxMultDiv) override;
    std::any visitProg(KentroComputerParser::ProgContext* ctxProg) override;
    std::any visitPrintExpr(KentroComputerParser::PrintExprContext* ctxPrintExpr) override;
    std::any visitAddSub(KentroComputerParser::AddSubContext *ctxAddSub) override;
    std::any visitParens(KentroComputerParser::ParensContext* ctxParens) override;
    std::any visitNumber(KentroComputerParser::NumberContext* ctxNumber) override;

};