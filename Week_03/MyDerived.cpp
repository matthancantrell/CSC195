#include <iostream>
#include "MyDerived.h"
using namespace std;


int MyDerived::AddSomething(int intVal) {
	return MyBase::AddSomething(intVal) + 1; // reference to parent class

	// returns intVal + 2;
}

