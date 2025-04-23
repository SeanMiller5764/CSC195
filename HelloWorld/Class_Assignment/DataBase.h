#pragma once
#include <iostream>,<ostream>
#include "Charmander.h"
#include "Squirtle.h"
#include <Vector>
using namespace std;

class Database{
public:
vector<Pokemon*> objects;
~Database(); // Destructor
void Create(Pokemon::eType type);
void DisplayAll();
void Display(const std::string& name);
void Display(Pokemon:: eType type);

};
