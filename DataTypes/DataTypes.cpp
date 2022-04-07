#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string name;
	char initial = NULL;
	unsigned short age;
	bool isAdult; // cannot use cin on a bool
	int zip = 0;
	float wage;
	unsigned int daysWorked = 0;
	short hoursWorkedPerDay[7] = { 0,0,0,0,0,0,0 };
	const float TAX = 0.1f;
	short totalHours = 0;

	cout << "Enter First Name: ";
	cin >> name;

	cout << "\nEnter Last Initial: ";
	cin >> initial;

	cout << "\nEnter Age: ";
	cin >> age;

	if (age > 18){
		isAdult = true;
	}else{
		isAdult = false;
	}

	cout << "\nEnter Zip Code: ";
	cin >> zip;

	cout << "\nEnter Wage: ";
	cin >> wage;

	cout << "\nEnter Days Worked: ";
	cin >> daysWorked;

	for (int count = 0; count < daysWorked; count++){
		cout << "\nEnter hours worked for day " << (count + 1) << ": ";
		cin >> hoursWorkedPerDay[count];
		totalHours += hoursWorkedPerDay[count];
	}

	cout << "\n" << name << " worked for " << totalHours << " hours at $" << wage << " an hour.";
	cout << "\n Gross Income: $" << (totalHours * wage);
	cout << "\n Net Income: $" << (totalHours * wage) - ((totalHours * wage) * TAX);
	cout << "\n\n";


	// (name) worked (hours) hours at (wage) an hour.
	// gross income (before tax)
	// net income (after tax)
}

