#include <iostream>
#include "Person.h"
using namespace std;

int Square(int i) {
	return i = i * i;
}

void Double(int* i) {
	*i = *i * 2;
}

int main()
{
   cout << "Hello World!\n";

   // **REFERENCE**

   int intVar = 5; // Declaring an int variable with a value of 5
   int* intRef = &intVar; // Declaring an int reference with the value of intVar;

   cout << "\n Value of intVar: " << intVar;

   *intRef = 2; // Accessing the reference and changing the value
   cout << "\n Value of intVar after changing through reference: " << intVar; // printing the value of the altered int var
   // changing the reference value set the value to the int variable

   cout << "\n Memory location of intVar: " << &intVar;
   cout << "\n Memory location of intRef: " << &intRef;
   // the addresses are different

	// **REFERENCE PARAMETERS**

	intVar = Square(intVar);
	cout << "\n Value of intVar after passed through Square: " << intVar;

	// **POINTER VARIABLE**

	int* intPtr = nullptr;
	intPtr = &intVar;

	cout << "\n intPtr's value being the memory address of intVar: " << intPtr;
	// it is outputting to the space in memory occupied by intVar
	cout << "\n intPtr being dereferenced: " << *intPtr;

   // **POINTER PARAMETER**

   Double(intPtr);

   cout << "\n Dereference intPtr: " << *intPtr;
   cout << "\n intVar: " << intVar;
   // yes, the value changed

   //**ALLOCATION/DEALLOCATION**

   int* intPtr2 = new int;
   *intPtr2 = 69;
   cout << "\n Value of intPtr2: " << *intPtr2;
   intPtr2 = NULL;
   delete intPtr2;

   //**STRUCTURE**

   Person *people = new Person[2];
   for (int i = 0; i < 2; i++)
   {
	   cout << "\n Enter name for person " << i+1 << ": ";
	   cin >> people[i].name;

	   cout << "\n Enter id for person " << i+1 << ": ";
	   cin >> people[i].id;
   }

   for (int i = 0; i < 2; i++)
   {
	   cout << "\n " << people[i].name;
	   cout << "\n " << people[i].id;
   }

   people = NULL;
   delete people;

   cout << "\n\n\n *** END OF PROGRAM *** \n\n\n";
}

