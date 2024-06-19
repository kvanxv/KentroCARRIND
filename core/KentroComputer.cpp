#include "KentroComputer.hpp"
#include <antlr4-runtime.h>
#include "../grammar/libsAntlr4.hpp"
#include "../include/evaluator/EvaluatorKentroComputer.hpp"
#include "Kentro.hpp"

KentroComputer calculator;

void KentroComputer::KentroComputer_run()
{
    calculator.KentroComputer_userInterface();

    auto start = std::chrono::high_resolution_clock ::now();

    calculator.KentroComputer_nonVariableArithmetic(calculator.getComputationInputString());

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by function: " << duration.count() << " microsecond" << std::endl;
}





std::string KentroComputer::getComputationInputString() { return KentroComputer_computationInputString; }

void KentroComputer::KentroComputer_userInterface()
{
    //std::string inputExpression;
    std::getline(std::cin, KentroComputer_computationInputString);
    //KentroComputer_computationInputString = inputExpression;
}

void KentroComputer::KentroComputer_nonVariableArithmetic(const std::string& arithmetic_computationInputString)
{
    //std::stringstream stream;
    std::string testString(arithmetic_computationInputString);
    antlr4::ANTLRInputStream input(arithmetic_computationInputString);
    KentroComputerLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    KentroComputerParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.prog();

    EvaluatorKentroComputer visitor;
    //try {
        std::any result = visitor.visit(tree);
        auto value = std::any_cast<double>(result);
        std::cout << "\nResult: " << std::setprecision(10) << value << std::endl;
        //stream << std::fixed << std::setprecision(10) << value;
       // stream >> value;
        //return value;
    /*}
    catch(const std::bad_any_cast& e) {
        std::cerr << "Exception caught: " << e.what() << '\n'
                  << "Value stored in std::any cannot be converted to the required type (double in this case).\n";
    }
    catch(const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }
    catch(...) {
        std::cerr << "Unknown exception caught\n";
    }*/
}

/*
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
