#pragma once
#include "Animal.h"
class Dog:public Animal 
{
public:
	Dog() {
		m_limbs = 5;
		isSpotted = false;
		std::cout << "Dog Constructer\n";
	}
	void Travel() override;
	void Speak() override;
protected:
	bool isSpotted;
};
