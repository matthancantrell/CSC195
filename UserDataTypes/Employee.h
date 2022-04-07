#pragma once
class Employee
{

private:

	static const float TAX;
	char name[32];
	unsigned short age;
	unsigned long zip;
	float wage;
	int daysWorked = 0;
	short hoursWorkedPerDay[7] = { 0,0,0,0,0,0,0 };
	unsigned short totalHours = 0;

	float grossIncome = 0;
	float netIncome = 0;

public:

	void Read();
	void Write();

};

