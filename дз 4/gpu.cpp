//
//  gpu.cpp
//  дз 4
//
//  Created by Егор Джемлиханов on 18.09.2024.
//

#include "gpu.hpp"
#include <iostream>

gpu::gpu(const char* m, double pr)
{
    model = new char[strlen(m) + 1];
    strcpy(model,  m);
    price = pr;
}


const char* gpu::GetModel()
{
    return model;
}

double gpu::GetPrice()
{
    return price;
}

void gpu::SetPrice(double pr)
{
    price = pr;
}

gpu::~gpu()
{
    delete[] model;
}
