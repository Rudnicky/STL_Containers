#include <iostream>
#include <cstdio>
#include "menu.h"

using namespace std;

int main(int argc, char *argv[])
{
    std::unique_ptr<Menu> menu(new Menu());
    return 0;
}
