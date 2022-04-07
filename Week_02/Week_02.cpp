#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee workers[2];

    for (int count = 0; count < sizeof(workers); count++) {
        workers[count].Read();
    }

}

