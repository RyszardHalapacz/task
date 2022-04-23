#include <iostream>
#include "include/game.h"
#include <string>
#include <memory>
int main()
{
    game::game myGame(5);
    myGame.prepare_game<std::string>(std::string("First")
    ,std::string("second"),std::string("lost"));
    myGame.start_game();
    myGame.print_winers();
    return 0;
}