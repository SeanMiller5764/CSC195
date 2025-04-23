#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;
class Pokemon 
{
public:
enum eType
{
	Charmander,
	Squirtle,
	Blubasaur
};
	eType type;
	string name;
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	string GetName();
	virtual eType GetType() = 0;
};
