#pragma once
#include "Pokemon.h"
#include<fstream>


class Squirtle:public Pokemon
{
public:
	eType type;
	string name;
	bool isWearingSunglasses = true;
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Read(ifstream& istream);
	virtual void Write(ostream& ostream);
	virtual void Write(ofstream& ostream);
	string GetName();
	eType GetType() override;
};

