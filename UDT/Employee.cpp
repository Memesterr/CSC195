#include "Employee.h"

const float Employee::TAX = 0.99f;

void Employee::Read()
{
    std::cout << "Enter First Name: ";
    std::cin >> name;

    std::cout << "Enter Zipcode: ";
    std::cin >> zipcode;

    std::cout << "Enter Wage: ";
    std::cin >> wage;

    std::cout << "Enter Days You Worked This Week: ";
    std::cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        std::cout << "Enter Hours You Worked on Day " << i + 1 << ": ";
        std::cin >> hoursWorkedPerDay[i];
    }
}

void Employee::Write()
{
    for (int i = 0; i < daysWorked; i++)
    {
        totalHours += hoursWorkedPerDay[i];
    }
    std::cout << "You Worked a Total of " << totalHours << " Hours.\n";

    grossIncome = totalHours * wage;
    netIncome = grossIncome - (grossIncome * TAX);

    yearlyGrossIncome = grossIncome * 52;
    yearlyNetIncome = netIncome * 52;

    std::cout << "\nEmployee Name: " << name <<
        "\nAge: " << age <<
        "\nZipcode: " << zipcode << std::endl <<
        name << " Worked " << totalHours << " Hours This Week at " << wage << " Dollars Per Hour."
        "\nTaxes Are at an All Time High of: " << TAX * 100 << "%"
        "\nYour Weekly Gross Income is: " << grossIncome <<
        "\nYour Weekly Net Income is: " << netIncome <<
        "\nYour Yearly Gross Pay: " << yearlyGrossIncome <<
        "\nYour Yearly Net Pay: " << yearlyNetIncome << std::endl;
}