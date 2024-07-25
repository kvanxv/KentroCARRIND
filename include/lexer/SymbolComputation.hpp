#pragma once
#include "SymbolComputationBaseVisitor.h"
#include "SymbolComputationLexer.h"
#include "SymbolComputationParser.h"
#include "SymbolComputation.hpp"

#include <antlr4-runtime.h>
#include <string>



namespace SymbolComputation
{
    class Polynomial : public SymbolComputationBaseVisitor
    {
    public:
        Polynomial() : maxExponent(0), variableToSolve(';') {  }
    public:
        virtual std::any visitTermComponent(SymbolComputationParser::TermComponentContext *ctx) override;



        //virtual std::any visitMulExpr(SymbolComputationParser::MulExprContext *ctx) override;

        /*virtual std::any visitProgram(SymbolComputationParser::ProgramContext *ctx) override;


        virtual std::any visitStatement(SymbolComputationParser::StatementContext *ctx) override;

        virtual std::any visitExpr(SymbolComputationParser::ExprContext *ctx) override;

        virtual std::any visitAddExpr(SymbolComputationParser::AddExprContext *ctx) override;



        virtual std::any visitMulExpr(SymbolComputationParser::MulExprContext *ctx) override;


        virtual std::any visitPrimary(SymbolComputationParser::PrimaryContext *ctx) override;


        virtual std::any visitParensAddExpr(SymbolComputationParser::ParensAddExprContext *ctx) override;


        virtual std::any visitCoefficient(SymbolComputationParser::CoefficientContext *ctx) override;

        virtual std::any visitVariable(SymbolComputationParser::VariableContext *ctx) override;

        virtual std::any visitExponent(SymbolComputationParser::ExponentContext *ctx) override;*/
    public:
        double solve(std::string& polynomialInput, char variable);
        void identifyMaxExponent(int potentialMaxExponent);
        int getMaxExponent() { return maxExponent; }
        std::unordered_map<int, double> termComponents; // exp, coefficient

    private:
        int maxExponent;
        char variableToSolve;
    };
}