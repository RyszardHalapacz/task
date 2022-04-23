
#include "game.h"

namespace game
{
    game::game(int numbers):
    _numbers_turn(numbers){};
     void game::start_game()
     {
         for(auto i=0;i<_numbers_turn;i++)
         {
            for(auto it= _vec_players.begin();it!=_vec_players.end();it++)
            {
                it->throw_cubes();
            }
         }
     };
     void game::print_winers()
     {
         std::cout <<std::endl<<" All result"<<std::endl;
         for(auto it = _vec_players.begin(); it!=_vec_players.end();it++)
         {
             std::cout << it->get_names() <<" "<< it->get_points()<<::std::endl;
         }
        std::sort(_vec_players.begin(),
                    _vec_players.end(),
                    [](player & l,player & r)
                    {
                        return l.get_points() < r.get_points();                                                           
                    });
         std::cout << "Winers is: "<< _vec_players.front().get_names(); 
        
    };
}
