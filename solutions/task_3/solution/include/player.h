#pragma once
#include <stdlib.h>    
#include <time.h>
#include <chrono>
#include <thread>
#include <string>
#include <iostream>
namespace game
{
class player
{
    public:
    player(std::string name);
    ~player(){};
    void throw_cubes();
    int get_points(){return _points;};
    std::string get_names(){return _name;};
  

    private:
    int _throw;
    int _points;
    int _turn;
    bool _gaming = true;
    std::string _name ;   
};
}