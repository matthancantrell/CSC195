#include <iostream>
#include "MyDerived.h"
#include "Config.h"
using namespace std;


int main()
{
    std::cout << "Hello World!\n";
    MyDerived der = MyDerived();
    cout << der.AddSomething(3);

    Config conf;
    conf.moreStuff = 6;
    conf.something = 42;

    Config *people[2];
    people[0] = new Config();
    people[1] = new Config();

    people[0]->id = 1;

    cout << "\nEnter your name: ";
    cin >> people[0]->name;

    cout << "\n" << people[0]->name;

}
