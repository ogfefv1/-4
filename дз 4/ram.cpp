//
//  ram.cpp
//  дз 4
//
//  Created by Егор Джемлиханов on 18.09.2024.
//

#include "ram.hpp"
#include <iostream>

ram::ram(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy(model, m);
    price = pr;
}

const char* ram::GetModel()
{
    return model;
}

double ram::GetPrice()
{
    return price;
}

void ram::SetPrice(double pr)
{
    price = pr;
}

ram::~ram()
{
    delete[] model;
}
