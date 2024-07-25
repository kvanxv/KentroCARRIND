
// Generated from SymbolComputation.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SymbolComputationVisitor.h"


/**
 * This class provides an empty implementation of SymbolComputationVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SymbolComputationBaseVisitor : public SymbolComputationVisitor {
public:

  virtual std::any visitProgram(SymbolComputationParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(SymbolComputationParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPolynomialExpr(SymbolComputationParser::PolynomialExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulExpr(SymbolComputationParser::MulExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermComponent(SymbolComputationParser::TermComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCoefficient(SymbolComputationParser::CoefficientContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParensPolynomialExpr(SymbolComputationParser::ParensPolynomialExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(SymbolComputationParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(SymbolComputationParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExponent(SymbolComputationParser::ExponentContext *ctx) override {
    return visitChildren(ctx);
  }


};

