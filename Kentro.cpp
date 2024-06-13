/* MAIN HEADER/CPP FOR BACKBONE OF KENTRO. PLEASE DO NOT MANIPULATE UNLESS STRUCTURE IS KNOWN.
 * CREATOR: CARRANZA, KEVIN, F.
 *
 */

#include "Kentro.hpp"



/*
std::unordered_map<int, std::function<KentroComputer()>> Kentro::mainMenuOptionMap =
        {
                {1 , KentroComputer::KentroComputer_userInterface}
        };

*/

void Kentro::Kentro::mainMenu() // really it would return an option so a function lets say
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

   int usersMainMenuOption = Kentro::usersMainMenuOption();
}


int Kentro::Kentro::usersMainMenuOption()
{
    int mainMenuOption {0};

    while(true)
    {
        std::cin >> mainMenuOption;

        try
        {
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

/*
std::function<void()> Kentro::mainMenuOption()
{
    int returnOption {};

    std::cin >> returnOption;

    //integrate finding the function in map. probably wont use map since then the second optino would be something
    //differeant like 'Kentro Graph'

}*/
