#include "KentroComputer.hpp"
#include <antlr4-runtime.h>


/*void KentroComputer::KentroComputer_run()
{
    KentroComputer calculator;
    while(true)
    {

        calculator.KentroComputer_userInterface();
        //calculator.KentroComputer_nonVariableArithmetic(calculator.getComputationInputString());
    }
}*/





std::string KentroComputer::getComputationInputString() { return KentroComputer_computationInputString; }

void KentroComputer::KentroComputer_userInterface()
{
    std::cin >> KentroComputer_computationInputString;

}

/*double KentroComputer::KentroComputer_nonVariableArithmetic(const std::string& arithmetic_computationInputString)
{
    antlr4::ANTLRInputStream userComputationInputString{arithmetic_computationInputString};
    antlr4_KentroComputerLexer Lexer_userComputationInputString{&userComputationInputString};
    antlr4::CommonTokenStream Tokens_userComputationInputString{&Lexer_userComputationInputString};
    antlr4_KentroComputerParser Parser_userComputationInputString{&Tokens_userComputationInputString};

    antlr4_KentroComputerParser::ExpressionContext* Tree_userComputationInputString = Parser_userComputationInputString.expression();

}*/





/*
KentroComputer KentroComputer::KentroComputer_findSolution(std::string& computationInputString)
{

}*/
