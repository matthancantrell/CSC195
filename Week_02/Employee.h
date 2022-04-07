#pragma once
class Employee
{
public: // public variables
	const float TAX = 0.1;
	char name[31]; // array of char 30 length with null terminator, adding the 31st for the null terminator
	int age = 0;
	
public: // public methods
	Employee();
	void Write();
	void Read();

protected:

private:



};

