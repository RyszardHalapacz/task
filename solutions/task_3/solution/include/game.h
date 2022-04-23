#pragma once
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>
#include "player.h"
namespace game
{
    class game
    {
        public:
        game(int numbers);
        ~game(){};
        void start_game();
        void print_winers();
        std::vector<player> _vec_players;
        private:
        int _numbers_turn;

        public:
        template<typename T, typename... Tpack>
        void prepare_game(T argument, Tpack... other)
        {
            _vec_players.push_back(player(argument));
            if constexpr (sizeof...(Tpack)>0) 
            prepare_game(other...);
        }
    };
}