#include "EvaluatorKentroComputer.hpp"


/*antlrcpp::Any EvaluatorKentroComputer::visitProg(KentroComputerParser::ProgContext* ctx) {}
antlrcpp::Any EvaluatorKentroComputer:: visitPrintExpr(KentroComputerParser::PrintExprContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitAssign(KentroComputerParser::AssignContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitBlank(KentroComputerParser::BlankContext* ctx) {}
antlrcpp::Any EvaluatorKentroComputer::visitMulDiv(KentroComputerParser::MulDivContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitAtomic(KentroComputerParser::AtomicContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitUnaryMinus(KentroComputerParser::UnaryMinusContext* ctx) {}

antlrcpp::Any EvaluatorKentroComputer::visitPower(KentroComputerParser::PowerContext* ctx) {}*/



std::any  EvaluatorKentroComputer::visitParens(KentroComputerParser::ParensContext* ctxParenthesis)
{
    return visit(ctxParenthesis->expr());
}

std::any EvaluatorKentroComputer::visitNumber(KentroComputerParser::NumberContext* ctxVisitNumber)
{
    if(ctxVisitNumber->INT()) { return std::stoi(ctxVisitNumber->INT()->getText()); }
    else if (ctxVisitNumber->FLOAT()) { return std::stod(ctxVisitNumber->FLOAT()->getText()); }
    else return std::runtime_error("NUM01: Input is not a representation of a number");
}
