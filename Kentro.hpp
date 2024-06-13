/* MAIN HEADER/CPP FOR BACKBONE OF KENTRO. PLEASE DO NOT MANIPULATE UNLESS STRUCTURE IS KNOWN.
 * CREATOR: CARRANZA, KEVIN, F.
 */
#pragma once

#include "include/libs.hpp"
#include "KentroComputer.hpp"
namespace Kentro
{
    class Kentro
    {
    public:

        Kentro() = default;
        ~Kentro();

        static void mainMenu();
        static int usersMainMenuOption();
    };
}

