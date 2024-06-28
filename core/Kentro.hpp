/* MAIN HEADER/CPP FOR BACKBONE OF KENTRO. PLEASE DO NOT MANIPULATE UNLESS
 * STRUCTURE IS KNOWN. CREATOR: CARRANZA, KEVIN, F.
 */
#pragma once
#include "../include/libs.hpp"

namespace Kentro
{
    class Kentro
    {
    public:
      Kentro() = default;
      ~Kentro() = default;

      static void printMainMenu();
      static int usersMainMenuOption();
      static void usersMainMenu();

    private:
      const static std::unordered_map<int, std::function<void()>> KentroComputer_mapOptions;
    };
} // namespace Kentro