//
//  laptop.cpp
//  дз 4
//
//  Created by Егор Джемлиханов on 18.09.2024.
//

#include "laptop.hpp"
#include<iostream>
using namespace std;
 

laptop::laptop(const char* n, double pr, const char* mcpu, double prcpu, ram* r, gpu* g, ssd* s)
    : cpu(mcpu, prcpu), ram(r), gpu(g), ssd(s)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    price = pr;

}

double laptop::GetPrice()
{
    return price + cpu.GetPrice() + gpu->GetPrice() + ram->GetPrice() + ssd->GetPrice();
}

void laptop::Output()
{
    cout << "Model: " << name << endl;
    cout << "Cpu: " << cpu.GetModel() << endl;
    cout << "Ram: " << ram->GetModel() << " Price: " << ram->GetPrice() << endl;
    cout << "Gpu: " << gpu->GetModel() << " Price: " << gpu->GetPrice() << endl;
    cout << "Ssd: " << ssd->GetModel() << " Price: " << ssd->GetPrice() << endl;
    cout << "Laptop price = " << GetPrice() << " $\n";
}

laptop::~laptop()
{
    delete[] name;
    delete ram;
    delete gpu;
    delete ssd;
}
