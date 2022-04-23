#pragma once
#include <string>

#include <iterator>
#include <exception>
#include <map>
#include <iostream>
#include <stdlib.h>    
#include <time.h>
#include <vector>
#include <algorithm>

enum codes{
    EAN_8=1,
    EAN_12=2
};
std::map<codes,std::vector<int>> map_codes= { {EAN_8,{8,7,9,10}},
                                     {EAN_12,{13,12,14,15}}
                                    };
std::string check_code (std::string& code, short int num)
{
     auto it = std::find_if(code.begin(),
                code.end(),
                [](auto it) 
                    {return ((static_cast<int>(it)<48 ||
                            static_cast<int>(it)>57)?true:false);
                        });
    if(it != code.end())  throw std::exception("code EAN_8 is wrong") ;
    if( std::count_if(map_codes[(codes)num].begin(),
                    map_codes[(codes)num].end(),
                    [&](auto it) { return (it == code.size()? true:false);})==0)
     {
         throw std::exception("Wrong size of code");
     };
    
    if(code.length()>map_codes[(codes)num].front()) 
    {
        code.resize(code.size() - 2);
    }
    if(code.size()%2!=0 && num==1)
    {
         code = '0'+code;
        return code;
    } else if (code.size()%2!=1 && num==2)
     {
         code = '0'+code;
        return code;

    } 
    return code;
}  ;

    