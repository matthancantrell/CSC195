#include <iostream>

int main()
{
    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = -2;

    // ^ Making variables

    std::cout << "Hello World!\n"; // Print "Hello World"

    std::cout << "Vali = "; 
    std::cout << iVal1;
    // ^^ these two lines print the test "Vali = " and the value of iVal1
    std::cout << "\n shVal2 ";
    std::cout << shVal2;
    std::cout << "\nVal3 = " << iVal3;

    std::cout << "\n \n memory location of iVal1 = ";
    std::cout << &iVal1;
    std::cout << "\n memory location of shVal2 = " << &shVal2;
    std::cout << "\n memory location of iVal3 = " << &iVal3;
    
    std::cout << "\n sizeof(iVal1) = " << sizeof(iVal1);

    std::cout << "\n Diff for V1 and V3 is " << (&iVal1 - &iVal3);

    int* ptr = NULL;
    ptr = &iVal1;

    std::cout << "\n value of ptr = " << ptr;
    std::cout << "\n address of ptr = " << &ptr;

    *ptr = 3; // Changes the value at the memory address of iVal1, manipulating a separate value through the pointer

    std::cout << "\n Value of iVal1 = " << iVal1;
    std::cin >> iVal1;

    std::cout << "\n\n *** END OF PROGRAM *** \n";
}

