#include <iostream>
#include"Dog.h"
#include "Snake.h"
#include <vector>
using namespace std;

int main()
{
    //Animal animal;
    //animal.Travel();

    Dog dog;
    dog.Travel();
    cout << dog.GetLimbs() << endl;

    //Animal* ptranimal = new Animal;
    //ptranimal->Travel();

    //cout<< animal.GetLimbs() << endl;

    Snake python;
    python.Travel();
    python.setHas_Vemon(true);
    cout << python.GetLimbs() << endl;

    //containers with classes
    vector<Animal*> animals;

    animals.push_back(new Dog);
    animals.push_back(new Dog);
    animals.push_back(new Snake);

    //iterate to implemate methods
    cout << "____________________________" << endl;
    for(Animal* ani:animals)
    {
        ani->Speak();
        
    }

    for (Animal* ani : animals)
    {
        delete ani;//deleting memory on heap

    }
    animals.clear();// clearing empty pointers
}
