#include "Kentro.hpp"
#include "KentroComputer.hpp"
#include "include/evaluator/EvaluatorKentroComputer.hpp"

#include "antlr4-runtime.h"
#include "grammar/libsAntlr4.hpp"
#include "include/libs.hpp"

void tokenOutput()
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


void testVisitNumber() // test structure of tree. need number from past implementation
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


int main()
{
    tokenOutput();
    return 0;
}