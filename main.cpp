#include "core/Kentro.hpp"
#include "core/KentroComputer.hpp"
#include "include/evaluator/EvaluatorKentroComputer.hpp"

#include "antlr4-runtime.h"
#include "grammar/libsAntlr4.hpp"
#include "include/libs.hpp"
#include "include/test/TestKentro.hpp"

int main()
{
    Kentro::Kentro::usersMainMenu();
}




/*int main() // TEST
{
    auto start = std::chrono::high_resolution_clock ::now();

    Test::TestKentroComputer::testExpressionEvaluation();

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by function: " << duration.count() << " microsecond" << std::endl;
    return 0;
}*/
