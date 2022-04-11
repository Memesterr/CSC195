#pragma once
#include <iostream>

class Employee
{
private:
	std::string name;
	static const float TAX;
	float wage = 0;
	int hoursWorkedPerDay[7];
	int grossIncome = 0;
	int netIncome = 0;
	int yearlyGrossIncome = 0;
	int yearlyNetIncome = 0;
	unsigned int age = 0;
	unsigned int zipcode;
	unsigned int daysWorked = 0;
	unsigned int totalHours = 0;

public:
	void Read();
	void Write();
};