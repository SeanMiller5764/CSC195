#include"Charmander.h"
string Charmander::GetName()
{
	return name;
}

Pokemon::eType Charmander::GetType()
{
	return eType::Charmander;
}
void Charmander::Write(std::ostream& ostream)
{
	Pokemon::Write(ostream); // Call base class Write 
	ostream << "IsFireType: " << isFiretype<< endl;
}
void Charmander::Read(std::ostream& ostream, std::istream& istream)
{
	Pokemon::Read(ostream, istream); // Call base class Read 
	ostream << "Enter IsFireType: ";
	istream >> isFiretype;
}