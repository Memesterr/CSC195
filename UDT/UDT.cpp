// UDT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Functions.h"
#include "Employee.h"
using namespace std;

int main()
{
    f();
    Employee employees[5];
    unsigned int numEmployees;
    cout << "Number of Employees (Must be less than 5): ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++)
    {
    employees[i].Read();
    }
    
    for (int i = 0; i < numEmployees; i++)
    {
    employees[i].Write();
    }
}