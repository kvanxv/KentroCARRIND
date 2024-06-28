#include "KentroComputer.hpp"
#include <antlr4-runtime.h>
#include "../grammar/libsAntlr4.hpp"
#include "../include/evaluator/EvaluatorKentroComputer.hpp"
#include "Kentro.hpp"

KentroComputer calculator;

void KentroComputer::KentroComputer_userInterface()
{
    std::getline(std::cin, KentroComputer_computationInputString);
}

void KentroComputer::KentroComputer_nonVariableArithmetic(const std::string& arithmetic_computationInputString)
{
    antlr4::ANTLRInputStream input(arithmetic_computationInputString);
    KentroComputerLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    KentroComputerParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.prog();

    EvaluatorKentroComputer visitor;
        std::any result = visitor.visit(tree);
        auto value = std::any_cast<double>(result);
        std::cout << "\nResult: " << std::setprecision(10) << value << std::endl;

}

void KentroComputer::KentroComputer_run()
{
    calculator.KentroComputer_userInterface();

    auto start = std::chrono::high_resolution_clock::now();

    calculator.KentroComputer_nonVariableArithmetic(calculator.getComputationInputString());

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    //std::cout << "Time User is in KentroComputer: " << duration.count() << " microsecond" << std::endl;
}