#include "Pokemon.h"

istream& operator>>(istream& istream, Pokemon& poke)
{
	poke.Read(cout, istream);
	return istream;
}

ostream& operator<<(ostream& ostream, Pokemon& poke)
{
	poke.Write(ostream);
	return ostream;
}

void Pokemon::Write(ostream& ostream)
{
	ostream << "Name: " << name << endl;
}
void Pokemon::Read(ostream& ostream, istream& istream) 
{
	ostream << "Enter name: ";
	istream >> name;
}
void Pokemon::Read(ifstream& istream)
{
	istream >> name;
}
void Pokemon::Write(ofstream& ostream)
{
	ostream << name << endl;
}

string Pokemon::GetName() 
{
	return name;
}