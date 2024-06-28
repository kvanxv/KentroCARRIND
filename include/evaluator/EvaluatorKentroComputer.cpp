#include "../../grammar/libsAntlr4.hpp"
#include "EvaluatorKentroComputer.hpp"
#include "antlr4-runtime.h"
/*antlrcpp::Any EvaluatorKentroComputer::visitAssign(KentroComputerParser::AssignContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitBlank(KentroComputerParser::BlankContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitAtomic(KentroComputerParser::AtomicContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitUnaryMinus(KentroComputerParser::UnaryMinusContext* ctx) {}*/


std::any EvaluatorKentroComputer::visitPower(KentroComputerParser::PowerContext* ctxPower)
{
    double base = std::any_cast<double>(visit(ctxPower->expr(0)));
    double exponent = std::any_cast<double>(visit(ctxPower->expr(1)));

    return std::pow(base, exponent);
}


std::any EvaluatorKentroComputer::visitIdImplicitMultiply(KentroComputerParser::IdImplicitMultiplyContext *ctxIdImplicitMultiply)
{
    double number = std::stod(ctxIdImplicitMultiply->number()->getText());
    double parenthesisExpr = std::any_cast<double>(visit(ctxIdImplicitMultiply->expr()));

    return number * parenthesisExpr;
}


std::any EvaluatorKentroComputer::visitImplicitMultiply (KentroComputerParser::ImplicitMultiplyContext* ctxImplicitMultiply)
{

    double left_expr = std::any_cast<double>(visit(ctxImplicitMultiply->expr(0)));
    double right_expr = std::any_cast<double>(visit(ctxImplicitMultiply->expr(1)));

    return left_expr * right_expr;
}


std::any EvaluatorKentroComputer::visitMulDiv(KentroComputerParser::MulDivContext* ctxMultDiv)
{
    double left_operand = std::any_cast<double>(visit(ctxMultDiv->expr(0)));
    double right_operand = std::any_cast<double>(visit(ctxMultDiv->expr(1)));

    if(ctxMultDiv->op->getType() == KentroComputerLexer::MUL) { return left_operand * right_operand; }
    else if(ctxMultDiv->op->getType() == KentroComputerLexer::DIV) { return left_operand / right_operand; }
    else return std::runtime_error("MULT_DIV01: ERROR WITH THIS FUNCTION");
}

std::any EvaluatorKentroComputer::visitProg(KentroComputerParser::ProgContext* ctxProg)
{
    double result = 0.0;
    for (auto stat : ctxProg->stat())
    {
        result = std::any_cast<double>(visit(stat));
    }
    return result;
}


std::any EvaluatorKentroComputer:: visitPrintExpr(KentroComputerParser::PrintExprContext* ctxPrintExpr)
{
/*    double value = std::any_cast<double>((ctxPrintExpr->expr()));
    std::cout << value << std::endl;
    return 0;*/
    return visit(ctxPrintExpr->expr());
}

std::any EvaluatorKentroComputer::visitAddSub(KentroComputerParser::AddSubContext *ctxAddSub)
{
    double left_operand = std::any_cast<double>(visit(ctxAddSub->expr(0)));
    double right_operand = std::any_cast<double>(visit(ctxAddSub->expr(1)));

    if(ctxAddSub->op->getType() == KentroComputerLexer::ADD) { return left_operand + right_operand; }
    else if(ctxAddSub->op->getType() == KentroComputerLexer::SUB) { return left_operand - right_operand; }
    else return std::runtime_error("ADD_SUB01: ERROR WITH THIS FUNCTION");
}

std::any EvaluatorKentroComputer::visitParens(KentroComputerParser::ParensContext* ctxParenthesis)
{
    return visit(ctxParenthesis->expr());
}

std::any EvaluatorKentroComputer::visitNumber(KentroComputerParser::NumberContext* ctxVisitNumber)
{
    if(ctxVisitNumber->INT()) { return static_cast<double>(std::stod(ctxVisitNumber->INT()->getText())); }
    else if (ctxVisitNumber->FLOAT()) { return std::stod(ctxVisitNumber->FLOAT()->getText()); }
    else return std::runtime_error("NUM01: Input is not a representation of a number");
}