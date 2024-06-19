/* MAIN HEADER/CPP FOR BACKBONE OF KENTRO. PLEASE DO NOT MANIPULATE UNLESS STRUCTURE IS KNOWN.
 * CREATOR: CARRANZA, KEVIN, F.
 *
 */

#include "Kentro.hpp"

void Kentro::Kentro::usersMainMenu()
{
    Kentro::printMainMenu();

    int usersOption = Kentro::usersMainMenuOption();

    auto it = KentroComputer_mapOptions.find(usersOption);

    if(it != KentroComputer_mapOptions.end())
    {
        auto func = it->second;
        func();
    }
    else if(it == KentroComputer_mapOptions.end())
    {
        []() { throw std::runtime_error("Could not find option:"); };
    }
    else []() { std::cerr << "ERROR WITH FUNCTION 'usersMainMenu()'"; };
}


void Kentro::Kentro::printMainMenu() // really it would return an option so a function lets say
{
    std::filesystem::path mainMenuExecutableDirectory = std::filesystem::current_path();
    std::filesystem::path mainMenuFileDirectory = mainMenuExecutableDirectory / "data" / "MainMenu.txt";

    std::ifstream mainMenuFile {mainMenuFileDirectory};
    std::string fileTextOutput;

    if(!mainMenuFile.is_open())
    {
        throw std::runtime_error("Failed to open MainMenu.txt");
    }

    if(mainMenuFile.is_open())
    {

        while(std::getline(mainMenuFile, fileTextOutput))
        {
            std::cout << fileTextOutput << std::endl;
        }
    }

    mainMenuFile.close();
}


int Kentro::Kentro::usersMainMenuOption()
{
    std::string mainMenuOptionString;
    int mainMenuOption {0};

    while(mainMenuOption == 0)
    {
        std::getline(std::cin, mainMenuOptionString);

        try
        {
            mainMenuOption = std::stoi(mainMenuOptionString);
            if(mainMenuOption > 1)
            {
                throw std::invalid_argument("Not a applicable option. Choose new option.");
            }
            else break;
        }
        catch(const std::exception &excptn)
        {
            std::cerr << "Error: " << excptn.what() << "\nTry Again.\n";
        }
    }
    return mainMenuOption;
}


//////////////////////////////////////////VARIABLES//////////////////////////////////////////
const std::unordered_map<int, std::function<void()>> Kentro::Kentro::KentroComputer_mapOptions
        {
                {1, KentroComputer::KentroComputer_run}
        };