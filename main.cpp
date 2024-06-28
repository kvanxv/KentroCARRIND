#include "core/Kentro.hpp"
#include "core/KentroComputer.hpp"
#include "include/evaluator/EvaluatorKentroComputer.hpp"

#include "antlr4-runtime.h"
#include "grammar/libsAntlr4.hpp"
#include "include/libs.hpp"
#include "include/test/TestKentro.hpp"
#include "core/KentroFiscus.hpp"

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
