//
//  cpu.cpp
//  дз 4
//
//  Created by Егор Джемлиханов on 18.09.2024.
//

#include "cpu.hpp"
#include <iostream>

cpu::cpu(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy(model, m);
    price = pr;
}

const char* cpu::GetModel()
{
    return model;
}

double cpu::GetPrice()
{
    return price;
}

void cpu::SetPrice(double pr)
{
    price = pr;
}

cpu::~cpu()
{
    delete[] model;
}
