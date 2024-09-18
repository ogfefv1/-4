//
//  ssd.cpp
//  дз 4
//
//  Created by Егор Джемлиханов on 18.09.2024.
//

#include "ssd.hpp"
#include <iostream>

ssd::ssd(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy(model, m);
    price = pr;
}

const char* ssd::GetModel()
{
    return model;
}

double ssd::GetPrice()
{
    return price;
}

void ssd::SetPrice(double pr)
{
    price = pr;
}

ssd::~ssd()
{
    delete[] model;
}
