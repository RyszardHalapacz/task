#include "player.h"
#include <iostream>
namespace game{
    player::player(std::string name):
    _name(name),
    _throw  (0),
    _points  (0),
    _turn  (0)
    {
         srand (time(NULL));
    };
    void player::throw_cubes()
    { 
        _turn++;
        bool gaming = true;
        short int i = 1;
        while(gaming && i <=10)
        {
            auto points_in_turn = (rand() % 6 + 1) + (rand() % 6 + 1);
            switch (points_in_turn)
            {
                case 7:
                case  11:
                {
                    gaming = (i==1)?true:false;
                    _points+=points_in_turn;
                    break;
                }
                case 2:
                case 12: 
                {
                    gaming = (i==1)?true:false;
                    _points=(points_in_turn==2)?(_points+2+9*12):(_points+12+9*12);
                    break;
                }
                case 5:
                {
                    _points+=points_in_turn;
                    gaming = false;
                }           
                default:
                {
                    _points+=(points_in_turn/i);
                    break;
                }
            }      
            i++; 
        } ;
    }
}