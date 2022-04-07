#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.1f;

void Employee::Read() {
	cout << "\nEnter first name: ";
	cin >> name;

	cout << "\nEnter age: ";
	cin >> age;

	cout << "\nEnter zip code: ";
	cin >> zip;

	cout << "\nEnter wage: ";
	cin >> wage;

	cout << "\nEnter days worked this week: ";
	cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++){
		cout << "\nEnter hours worked on day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];
		totalHours += hoursWorkedPerDay[i];
	}

	grossIncome = (totalHours * wage);
	netIncome = grossIncome - (grossIncome * TAX);

};

void Employee::Write() {
	cout << "\n\nName: " << name;
	cout << "\nAge: " << age;
	cout << "\nZip Code: " << zip;
	cout << "\nWage: $" << wage;
	cout << "\nNumber of days worked: " << daysWorked;
	cout << "\nHours Worked: " << totalHours;
	cout << "\nGross Income: $" << grossIncome;
	cout << "\nNet Income: $" << netIncome;
};

