#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee workers[2];

    //for (int count = 0; count < sizeof(workers); count++) {
    //    workers[count].Read();
    //}

    Employee* emPtr = new Employee();

    cout << sizeof(Employee);
    void* ptr = malloc(10);
    int myInt = 5;
    int* intPtr;
    intPtr = &myInt;

}

