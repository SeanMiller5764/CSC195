#include "Pokemon.h"

void Pokemon::Write(ostream& ostream)
{
	ostream << "Name: " << name << endl;
}
void Pokemon::Read(ostream& ostream, istream& istream) 
{
	ostream << "Enter name: ";
	istream >> name;
}
string Pokemon::GetName() 
{
	return name;
}