#include "core/Kentro.hpp"
#include "core/KentroComputer.hpp"
#include "include/evaluator/EvaluatorKentroComputer.hpp"

#include <antlr4-runtime.h>
#include "grammar/libsAntlr4.hpp"
#include "include/libs.hpp"
#include "include/test/TestKentro.hpp"
#include "core/KentroFiscus.hpp"

#include "include/lexer/SymbolComputationLexer.h"
#include "include/lexer/SymbolComputationParser.h"
#include "include/lexer/SymbolComputation.hpp"

using namespace antlr4;
using namespace SymbolComputation;

int main()
{
    std::string polynomial = "3x^2 + 2x - 5";

    // Initialize ANTLR input stream
    ANTLRInputStream input(polynomial);

    // Initialize lexer
    SymbolComputationLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Initialize parser
    SymbolComputationParser parser(&tokens);

    // Parse the expression
    SymbolComputationParser::ProgramContext *tree = parser.program();

    // Create Polynomial visitor instance and visit the tree
    Polynomial polyVisitor;
    polyVisitor.visit(tree);

    // Print the term components and the maximum exponent
    for (const auto &term : polyVisitor.termComponents)
    {
        std::cout << "Coefficient for x^" << term.first << " is " << term.second << std::endl;
    }
    std::cout << "Maximum exponent found: " << polyVisitor.getMaxExponent() << std::endl;

    return 0;
}




/*int main()
{
    KentroFiscus::BlackSholesModel BSM;

    BSM.KentroFiscus_inputBlackSholesModelEU();
    std::cout << "int1CDF: " << BSM.calculateIntermediateD1() << std::endl;
    std::cout << "int2CDF: " << BSM.calculateIntermediateD2() << std::endl;
    std::cout << "call1CDF: " << BSM.calculateCallCDFD1() << std::endl;
    std::cout << "call2CDF: " << BSM.calculateCallCDFD2() << std::endl;
    std::cout << "put1CDF: " << BSM.calculatePutCDFD1() << std::endl;
    std::cout << "put2CDF: " << BSM.calculatePutCDFD2() << std::endl;
    std::cout << "CALL: " << BSM.calculateCallOptionPrice() << std::endl;
    std::cout << "PUT: " << BSM.calculatePutOptionPrice() << std::endl;
    return 0;
}*/

/*int main()
{
    Kentro::Kentro::usersMainMenu();
}*/




/*int main() // TEST
{
    auto start = std::chrono::high_resolution_clock ::now();

    Test::TestKentroComputer::testExpressionEvaluation();

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by function: " << duration.count() << " microsecond" << std::endl;
    return 0;
}*/
