#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include <string>
#include <fstream>

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
	virtual void Read(ifstream& istream);
	virtual void Write(ostream& ostream);
	virtual void Write(ofstream & ostream);
	string GetName();
	virtual eType GetType() = 0;
	friend istream& operator>>(istream& istream, Pokemon& poke);
	friend ostream& operator<<(ostream& istream, Pokemon& poke);
};
