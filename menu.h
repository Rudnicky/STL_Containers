#ifndef MENU_H
#define MENU_H
#include "sequencecontainers.h"
#include "associativecontainers.h"
#include<limits>

class Menu
{
private:
    void createMenu();
    int menuOptions();
    void sequenceContainerMenuPiece();
    void associateContainerMenuPiece();

    enum Choice { SEQUENCE_CONTAINERS = 1,
                  ASSOCIATE_CONTAINERS = 2,
                  EXIT_APPLICATION = 3 };
public:
    Menu();
};

#endif // MENU_H
