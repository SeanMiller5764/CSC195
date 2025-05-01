#include"Squirtle.h"

string Squirtle::GetName() 
{
	return name;
}

Pokemon::eType Squirtle::GetType() 
{
	return eType::Squirtle;
}
void Squirtle::Write(std::ostream& ostream)
{
	Pokemon::Write(ostream); // Call base class Write 
	ostream << "isWearingSunglasses: " << isWearingSunglasses << endl;
}
void Squirtle::Read(std::ostream& ostream, std::istream& istream)
{
	Pokemon::Read(ostream, istream); // Call base class Read 
	ostream << "Enter isWearingSunglasses: ";
	istream >> isWearingSunglasses;
}
void Squirtle::Read(ifstream& istream)
{
	Pokemon::Read(istream);
	istream >> isWearingSunglasses;
}
void Squirtle::Write(ofstream& ostream)
{
	Pokemon::Write(ostream);
	ostream << isWearingSunglasses << endl;
}