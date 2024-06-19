#include "../../include/evaluator/EvaluatorKentroComputer.hpp"

#include "antlr4-runtime.h"
#include "../../grammar/libsAntlr4.hpp"
#include "../../include/libs.hpp"

#include "TestKentro.hpp"



















void Test::TestKentroComputer::tokenOutput()
{
    antlr4::ANTLRInputStream input("(344(345))");
    KentroComputerLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }
}


void Test::TestKentroComputer::testVisitNumber() // test structure of tree. need number from past implementation
{
    std::string input = "(344(345))";
    antlr4::ANTLRInputStream input_stream(input);
    KentroComputerLexer lexer(&input_stream);
    antlr4::CommonTokenStream tokens(&lexer);
    KentroComputerParser parser(&tokens);

    antlr4::tree::ParseTree* tree = parser.expr();

    std::string treeStrucuture = tree->toStringTree(&parser);



    std::cout << "The parsed input is: " << treeStrucuture << std::endl;
}

void Test::TestKentroComputer::testVisitNumberReal() // test structure of tree. need number from past implementation
{
    std::string input = "-45.65";
    antlr4::ANTLRInputStream input_stream(input);
    KentroComputerLexer lexer(&input_stream);
    antlr4::CommonTokenStream tokens(&lexer);
    KentroComputerParser parser(&tokens);

    antlr4::tree::ParseTree* tree = parser.number();

    EvaluatorKentroComputer visitor;
    std::any resultAny = visitor.visit(tree);  // type changed to std::any
    double result = std::any_cast<double>(resultAny);

    std::cout << "The parsed input is: " << result << std::endl;
}

void Test::TestKentroComputer::testExpressionEvaluation()
{
    std::string testInput = "(((3.14 + (2 * 3 - 1) / (4^(2 - 1) + 1)) * 2.71828) + 6)(2 + 3) - 4";

    antlr4::ANTLRInputStream input(testInput);
    KentroComputerLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    KentroComputerParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.prog();

    EvaluatorKentroComputer visitor;
    try {
        std::any result = visitor.visit(tree);
        auto value = std::any_cast<double>(result);
        std::cout << "Result: " << std::setprecision(10) << value << std::endl;
    }
    catch(const std::bad_any_cast& e) {
        std::cerr << "Exception caught: " << e.what() << '\n'
                  << "Value stored in std::any cannot be converted to the required type (double in this case).\n";
    }
    catch(const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }
    catch(...) {
        std::cerr << "Unknown exception caught\n";
    }
}