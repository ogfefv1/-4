//
//  main.cpp
//  дз 4
//
//  Created by Егор Джемлиханов on 17.09.2024.
//

#include <iostream>
#include "laptop.hpp"
#include "cpu.hpp"
#include "gpu.hpp"
#include "ram.hpp"
#include "ssd.hpp"

using namespace std;

int main()
{
    ram* ram1 = new ram("Gigabyte Aorus", 200);
    gpu* gpu1 = new gpu("ASUS GEFORCE RTX3050", 500);
    ssd* ssd1 = new ssd("kingston ", 150);

    laptop laptop1("macbook air", 1000, "M1", 300, ram1, gpu1, ssd1);
    cout << "ноут 1 детали:" << endl;
    laptop1.Vihod();
    cout << endl;

    ram* ram2 = new ram("Corsair", 250);
    gpu* gpu2 = new gpu("AMD Radeon RX 580", 450);
    ssd* ssd2 = new ssd("Samsung 970 EVO", 200);

    laptop laptop2("lenovo", 900, "Ryzen 4", 280, ram2, gpu2, ssd2);
    cout << "ноут 2 детали:" << endl;
    laptop2.Vihod();
    cout << endl;

    ram* ram3 = new ram("HyperX Fury", 300);
    gpu* gpu3 = new gpu("Asus GeForce GTX 1660", 600);
    ssd* ssd3 = new ssd("WD Black", 180);

    laptop laptop3("msi", 1500, "Intel i5", 400, ram3, gpu3, ssd3);
    cout << "ноут 3 детали:" << endl;
    laptop3.Vihod();
    cout << endl;

    return 0;
} 
