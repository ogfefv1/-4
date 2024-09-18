//
//  laptop.hpp
//  дз 4
//
//  Created by Егор Джемлиханов on 18.09.2024.
//






#pragma once
#include "cpu.hpp"
#include "gpu.hpp"
#include "ram.hpp"
#include "ssd.hpp"

class laptop
{
    char* name;
    double price;
    cpu cpu;
    ram* ram;
    gpu* gpu;
    ssd* ssd;
public:
    laptop(const char* n, double pr, const char* mcpu, double prcpu, ram* r, gpu* g, ssd* s);
    double PoluchitZenu();
    void Vihod();
    ~laptop();
};
