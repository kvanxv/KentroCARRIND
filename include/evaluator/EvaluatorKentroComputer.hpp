#include "../../grammar/libsAntlr4.hpp"

class EvaluatorKentroComputer : public KentroComputerBaseVisitor
{
public:
/*    virtual antlrcpp::Any visitProg(KentroComputerParser::ProgContext* ctx) override;

    virtual antlrcpp::Any visitPrintExpr(KentroComputerParser::PrintExprContext* ctx) override;

    virtual antlrcpp::Any visitAssign(KentroComputerParser::AssignContext* ctx) override;

    virtual antlrcpp::Any visitBlank(KentroComputerParser::BlankContext* ctx) override;
    virtual antlrcpp::Any visitAddSub(KentroComputerParser::AddSubContext* ctx) override;
    virtual antlrcpp::Any visitMulDiv(KentroComputerParser::MulDivContext* ctx) override;

    virtual antlrcpp::Any visitAtomic(KentroComputerParser::AtomicContext* ctx) override;

    virtual antlrcpp::Any visitUnaryMinus(KentroComputerParser::UnaryMinusContext* ctx) override;

    virtual antlrcpp::Any visitPower(KentroComputerParser::PowerContext* ctx) override;*/
    virtual std::any visitParens(KentroComputerParser::ParensContext* ctx) override;

    virtual std::any visitNumber(KentroComputerParser::NumberContext* ctx) override;

};