#include <iostream>
#include"Dog.h"
using namespace std;

int main()
{
    Animal animal;
    animal.Travel();

    Dog dog;
    dog.Travel();

    Animal* ptranimal = new Animal;
    ptranimal->Travel();

    Animal* ptrdog = new Dog;
    ptrdog->Travel();

    cout<< animal.GetLimbs() << endl;

}
