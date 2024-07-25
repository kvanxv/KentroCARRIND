#include "SymbolComputation.hpp"

namespace SymbolComputation {





    std::any Polynomial::visitTermComponent(SymbolComputationParser::TermComponentContext *ctx)
    {
        double coefficient = 1.0;
        int exponent = 0;

        try
        {
            if (ctx->coefficient() && ctx->variable() && ctx->exponent()) // Ax^n
            {
                coefficient = std::stod(ctx->coefficient()->getText());
                exponent = std::stoi(ctx->exponent()->INT()->getText());
            }
            else if (ctx->variable() && ctx->exponent()) // x^n
            {
                coefficient = 1.0;
                exponent = std::stoi(ctx->exponent()->INT()->getText());
            }
            else if (ctx->coefficient() &&  ctx->variable()) // bx
            {
                coefficient = std::stod(ctx->coefficient()->getText());
                exponent = 1;
            }
            else if (ctx->coefficient()) // constants (c)
            {
                coefficient = std::stod(ctx->coefficient()->getText());
                exponent = 0;
            }
            else if (ctx->variable()) // x
            {
                coefficient = 1.0;
                exponent = 1;
            }

            std::cout << "Processed term: coefficient = " << coefficient << ", exponent = " << exponent << std::endl;
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << "Invalid argument: " << e.what() << std::endl;
        }
        catch (const std::out_of_range &e)
        {
            std::cerr << "Out of range: " << e.what() << std::endl;
        }

        identifyMaxExponent(exponent);
        termComponents[exponent] += coefficient;

        return coefficient;
    }

    /*std::any Polynomial::visitProgram(SymbolComputationParser::ProgramContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitStatement(SymbolComputationParser::StatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitExpr(SymbolComputationParser::ExprContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitAddExpr(SymbolComputationParser::AddExprContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitMulExpr(SymbolComputationParser::MulExprContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitPrimary(SymbolComputationParser::PrimaryContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitParensAddExpr(SymbolComputationParser::ParensAddExprContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitCoefficient(SymbolComputationParser::CoefficientContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitVariable(SymbolComputationParser::VariableContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any Polynomial::visitExponent(SymbolComputationParser::ExponentContext *ctx) override
    {
        return visitChildren(ctx);
    }*/

    void Polynomial::identifyMaxExponent(int potentialMaxExponent)
    {
        maxExponent = std::max(potentialMaxExponent, maxExponent);
    }


    double Polynomial::solve(std::string& polynomialInput, char variable)
    {
        double result{0};
        return result;
    }
} // SymbolComputation
