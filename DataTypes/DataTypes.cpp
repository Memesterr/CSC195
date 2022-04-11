// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "DataTypes.h"

using namespace std;

int main()
{
    const float TAX = 0.99;
    string name;
    char initial;
    bool isAdult;
    float wage = 0;
    float hoursWorkedPerDay[7];
    unsigned short age;
    unsigned short totalHours = 0;
    unsigned int grossIncome;
    unsigned int netIncome;
    unsigned int daysWorked;
    unsigned int zipcode;

    cout << "Enter First Name: ";
    cin >> name;

    cout << "Enter First Initial: ";
    cin >> initial;

    cout << "Enter Age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You're an Adult!\n";
        isAdult = true;
    }
    else {
        cout << "You're a Child! How Did You Get This Job?\n";
        isAdult = false;
    }

    cout << "Enter Zipcode: ";
    cin >> zipcode;

    cout << "Enter Wage: ";
    cin >> wage;

    cout << "Enter Days You Worked This Week: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        cout << "Enter Hours You Worked on Day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
    }

    for (int i = 0; i < daysWorked; i++)
    {
        totalHours += hoursWorkedPerDay[i];
    }
    cout << "You Worked a Total of " << totalHours << " Hours.\n";

    grossIncome = totalHours * wage;
    netIncome = grossIncome - (grossIncome * TAX);

    cout << "\nEmployee Name: " << name << 
        "\nFirst Initial: " << initial << 
        "\nAge: " << age << 
        "\nZipcode: " << zipcode << endl << 
        name << " Worked " << totalHours << " Hours at " << wage << " Dollars Per Hour."
        "\nDays Worked This Week: " << daysWorked <<
        "\nTaxes Are at an All Time High of: " << TAX * 100 << "%"
        "\nYour Gross Income is: " << grossIncome <<
        "\nYour Net Income is: " << netIncome << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
