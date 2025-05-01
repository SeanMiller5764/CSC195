#pragma once
#include "Pokemon.h"
class Charmander :public Pokemon 
{
public:
	eType type;
	string name;
	bool isFiretype = true;
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	virtual void Read(ifstream& istream);
	virtual void Write(ofstream& ostream);
	string GetName();
	eType GetType() override;
};
