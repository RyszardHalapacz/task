#pragma once
#include <map>
enum month{
    January =1 ,
    February =2,
    March =3,
    April =4,
    May=5,
    June =6,
    July =7,
    August =8,
    September=9 ,
    October =10,
    November =11,
    December =12 
};
std::map<month,short int> day_month = {
    {January ,31 },
    {February ,28},
    {March ,31},
    {April ,30},
    {May,31},
    {June ,30},
    {July ,31},
    {August ,30},
    {September,31 },
    {October ,30},
    {November ,31},
    {December ,30} 
    };
    bool special_year(short int year)
    {
        return ((year%4==0) && (year%100!=0) || year %400==0); 
    };
bool check_date(short int day,short int month_num, short int year)
{
    if(year <= 2001 || year >=2099 ) return false;
    if(month_num <1 || month_num> 12) return false;
    if(special_year(year) && ((month)month_num==month::February)) 
    {
        return ((day <= day_month[(month)month_num] +1) && day>0) ;
    }
    else return ((day <= day_month[(month)month_num]) && day>0);
};
