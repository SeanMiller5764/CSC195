#pragma once
#include "Animal.h"

class Snake : public Animal 
{
public:
	void Travel() override;
	Snake() 
	{
		m_limbs = 0;
		has_Venom = false;
		std::cout << "Snake Constructer\n";
	}
	void setHas_Vemon(bool has_V) { has_Venom = has_V; }
	void Speak() override;
protected:
	bool has_Venom;
};