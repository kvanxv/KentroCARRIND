#pragma once
#include "include/libs.hpp"

class KentroComputer
{
public:

    KentroComputer() = default;
    ~KentroComputer();


    void KentroComputer_userInterface(); // CLI

    void KentroComputer_run();

    double KentroComputer_nonVariableArithmetic(const std::string& Arithmetic_computationInputString); // calculates normal expressions






    void KentroComputer_topMenu(); // display extra option

    KentroComputer KentroComputer_findSolution(std::string& findSolutionComputationInputString); // will be the method for the program to parse the string and see what function we need to use




    std::string getComputationInputString(); // getter for expression user entered


private:
    std::string KentroComputer_computationInputString;
};



