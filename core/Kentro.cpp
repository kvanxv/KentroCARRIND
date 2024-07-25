/* MAIN HEADER/CPP FOR BACKBONE OF KENTRO. PLEASE DO NOT MANIPULATE UNLESS STRUCTURE IS KNOWN.
 * CREATOR: CARRANZA, KEVIN, F.
 */

#include "Kentro.hpp"

#include "KentroComputer.hpp"
#include "KentroFiscus.hpp"
void Kentro::Kentro::printMainMenu() // CHANGED FUNCTION
{
    std::filesystem::path mainMenuExecutableDirectory = std::filesystem::current_path();
    std::filesystem::path mainMenuFileDirectory = mainMenuExecutableDirectory / "data" / "MainMenu.txt";

    std::ifstream mainMenuFile {mainMenuFileDirectory};

    if(!mainMenuFile.is_open())
    {
        throw std::runtime_error("Failed to open MainMenu.txt");
    }
    else if(mainMenuFile.is_open())
    {
        std::string fileTextOutput; // CHANGED
        while(std::getline(mainMenuFile, fileTextOutput))
        {
            std::cout << fileTextOutput << std::endl;
        }
    }

    mainMenuFile.close();
}

int Kentro::Kentro::usersMainMenuOption() //CHANGED
{
    std::string mainMenuOptionString;
    int mainMenuOption {0};

    while(mainMenuOption == 0)
    {
        std::cout << "<user>";
        std::getline(std::cin, mainMenuOptionString);

        try
        {
            mainMenuOption = std::stoi(mainMenuOptionString);
            if(mainMenuOption > 2) // handles error handling
            {
                throw std::invalid_argument("Not a applicable option. Choose new option.");
            }

        }
        catch(const std::exception &excptn)
        {
            std::cerr << "Error: " << excptn.what() << "\nTry Again.\n";
        }
    }
    return mainMenuOption;
}

void Kentro::Kentro::usersMainMenu() // FIX FUNCTION RETURN (CHANGED!)
{
    Kentro::printMainMenu();

    int usersOption = Kentro::usersMainMenuOption();

    auto it = KentroComputer_mapOptions.find(usersOption);

    if(it != KentroComputer_mapOptions.end())
    {
        auto func = it->second;
        return func();
    }
    else if(it == KentroComputer_mapOptions.end())
    {
        []() { throw std::runtime_error("Could not find option:"); }; // throws exception when user error is expected. let user retry option
    }
}


const std::unordered_map<int, std::function<void()>> Kentro::Kentro::KentroComputer_mapOptions
        {
                {1, KentroComputer::KentroComputer_run}
        };