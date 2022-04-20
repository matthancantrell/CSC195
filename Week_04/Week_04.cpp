#include <iostream>
using namespace std;
// Param is by value and is a copy
void AddByValue(int param) {
    param = param + 1;
}

void AddByPointer(int* ptr) {
    *ptr = *ptr + 1;
}

void AddByRef(int& ref) {
    ref = ref + 1;
}

int main() {
    cout << " Hello World!\n";
    int iVal = 5;
    cout << " Initial Value: " << iVal;

    AddByValue(iVal);
    cout << "\n After AddByValue() iVal = " << iVal;

    AddByPointer(&iVal);
    cout << "\n After AddByPointer() iVal = " << iVal;

    AddByRef(iVal);
    cout << "\n After AddByRef() iVal = " << iVal;

    int& ref = iVal;
    ref++;
    cout << "\n After ++ iVal = " << iVal;

    cout << "\n\n\n *** END OF PROGRAM *** \n\n\n";
}

