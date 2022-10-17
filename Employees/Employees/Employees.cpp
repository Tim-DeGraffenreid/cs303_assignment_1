// Employees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Professional.h"
#include "Nonprofessional.h"
#include <iostream>

int main()
{
    Professional p(4001);
    Nonprofessional np(45, 22.50);
    p.print();
    np.print();

}

