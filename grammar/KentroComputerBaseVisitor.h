
// Generated from KentroComputer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "KentroComputerVisitor.h"


/**
 * This class provides an empty implementation of KentroComputerVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KentroComputerBaseVisitor : public KentroComputerVisitor {
public:

  virtual std::any visitProg(KentroComputerParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExpr(KentroComputerParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(KentroComputerParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlank(KentroComputerParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdImplicitMultiply(KentroComputerParser::IdImplicitMultiplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(KentroComputerParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(KentroComputerParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(KentroComputerParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomic(KentroComputerParser::AtomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryMinus(KentroComputerParser::UnaryMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicitMultiply(KentroComputerParser::ImplicitMultiplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPower(KentroComputerParser::PowerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(KentroComputerParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }


};

