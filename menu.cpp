#include "menu.h"
#include "consts.h"

Menu::Menu()
{
    createMenu();
}

void Menu::createMenu()
{
    int pick = 0;
    do
    {
        pick = menuOptions();
        switch (pick) {
        case Choice::SEQUENCE_CONTAINERS:
        {
            sequenceContainerMenuPiece();
            break;
        }
        case Choice::ASSOCIATE_CONTAINERS:
        {
            associateContainerMenuPiece();
            break;
        }
        case Choice::EXIT_APPLICATION:
        {
            std::cout << ConstStrings::CLOSE_APP_MSG;
            break;
        }
        default:
            break;
        }
    } while (pick != Choice::EXIT_APPLICATION);
}

int Menu::menuOptions()
{
    int pick = 0;
    std::string stars = std::string(28, '*');
    std::cout << "\t" << stars << "\n";
    std::cout << "\t" << ConstStrings::MENU_OPTION_SEQUENCE;
    std::cout << "\t" << ConstStrings::MENU_OPTION_ASSOCIATE;
    std::cout << "\t" << ConstStrings::MENU_OPTION_EXIT;
    std::cout << "\t" << stars << "\n";
    while(!(std::cin >> pick))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << ConstStrings::INVALID_INPUT;
    }
    return pick;
}

void Menu::sequenceContainerMenuPiece()
{
    int numberOfObjects = 0;
    std::cout << "\n\tPlease enter number of object for the sequence containers: ";
    std::cin >> numberOfObjects;
    std::cout << std::endl;
    std::unique_ptr<SequenceContainers> seq(new SequenceContainers(numberOfObjects));
    std::cout << "\n\n\n";
}

void Menu::associateContainerMenuPiece()
{
    int numberOfObjects = 0;
    std::cout << "\n\tPlease enter number of object for the associate containers: ";
    std::cin >> numberOfObjects;
    std::cout << std::endl;
    std::unique_ptr<AssociativeContainers> seq(new AssociativeContainers(numberOfObjects));
    std::cout << "\n\n\n";
}
