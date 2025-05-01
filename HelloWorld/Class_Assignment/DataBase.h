#pragma once
#include <iostream>
#include <ostream>
#include <fstream>
#include "Charmander.h"
#include "Squirtle.h"
#include <Vector>
using namespace std;

class Database{
public:
vector<unique_ptr<Pokemon>> objects;
~Database(); // Destructor
void Create(Pokemon::eType type);
unique_ptr<Pokemon> Create(int type);
void DisplayAll();
void Display(const std::string& name);
void Display(Pokemon:: eType type);
void Load(const string& filename);
void Save(const string& filename);
};
