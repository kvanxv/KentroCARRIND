#pragma once
#include "../include/libs.hpp"

class KentroComputer
{
public:
    KentroComputer() = default;
    ~KentroComputer() = default;
    std::string getComputationInputString() { return KentroComputer_computationInputString; }

public:
    void KentroComputer_userInterface(); // CLI
    static void KentroComputer_run();
    void KentroComputer_nonVariableArithmetic(const std::string& Arithmetic_computationInputString); // calculates normal expressions
    void KentroComputer_topMenu(); // display extra option

private:
    std::string KentroComputer_computationInputString;

};