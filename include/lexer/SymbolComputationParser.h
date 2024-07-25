
// Generated from SymbolComputation.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  SymbolComputationParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, MUL_OP = 4, ADD_OP = 5, INT = 6, VAR = 7, 
    EXP = 8, WS = 9
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RulePolynomialExpr = 2, RuleMulExpr = 3, 
    RuleTermComponent = 4, RuleCoefficient = 5, RuleParensPolynomialExpr = 6, 
    RuleNumber = 7, RuleVariable = 8, RuleExponent = 9
  };

  explicit SymbolComputationParser(antlr4::TokenStream *input);

  SymbolComputationParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SymbolComputationParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class PolynomialExprContext;
  class MulExprContext;
  class TermComponentContext;
  class CoefficientContext;
  class ParensPolynomialExprContext;
  class NumberContext;
  class VariableContext;
  class ExponentContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PolynomialExprContext *> polynomialExpr();
    PolynomialExprContext* polynomialExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  PolynomialExprContext : public antlr4::ParserRuleContext {
  public:
    PolynomialExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulExprContext *> mulExpr();
    MulExprContext* mulExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD_OP();
    antlr4::tree::TerminalNode* ADD_OP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PolynomialExprContext* polynomialExpr();

  class  MulExprContext : public antlr4::ParserRuleContext {
  public:
    MulExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermComponentContext *> termComponent();
    TermComponentContext* termComponent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MUL_OP();
    antlr4::tree::TerminalNode* MUL_OP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulExprContext* mulExpr();

  class  TermComponentContext : public antlr4::ParserRuleContext {
  public:
    TermComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CoefficientContext *coefficient();
    VariableContext *variable();
    ExponentContext *exponent();
    ParensPolynomialExprContext *parensPolynomialExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermComponentContext* termComponent();

  class  CoefficientContext : public antlr4::ParserRuleContext {
  public:
    CoefficientContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *ADD_OP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CoefficientContext* coefficient();

  class  ParensPolynomialExprContext : public antlr4::ParserRuleContext {
  public:
    ParensPolynomialExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PolynomialExprContext *polynomialExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParensPolynomialExprContext* parensPolynomialExpr();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExponentContext : public antlr4::ParserRuleContext {
  public:
    ExponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *INT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExponentContext* exponent();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

