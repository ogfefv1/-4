//
//  ssd.hpp
//  дз 4
//
//  Created by Егор Джемлиханов on 18.09.2024.
//



#pragma once
#include <cstring>

class ssd
{
    char* model;
    double price;
public:
    ssd(const char* m, double pr);
    const char* GetModel();
    double GetPrice();
    void SetPrice(double pr);
    ~ssd();
};
