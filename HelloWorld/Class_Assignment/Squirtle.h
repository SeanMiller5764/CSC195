#pragma once
#include "Pokemon.h"


class Squirtle:public Pokemon
{
public:
	eType type;
	string name;
	bool isWearingSunglasses = true;
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	string GetName();
	eType GetType() override;

};

