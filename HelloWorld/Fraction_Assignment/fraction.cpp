#include "fraction.h"
#include <iostream>

using namespace mathlib;

Fraction::Fraction(int n, int d) 
{
	setNumerator(n);
	setDenominator(d);
}
int Fraction::getNumerator() 
{
	return numerator;
}
int Fraction::Getdenominator() 
{
	return denominator;
}
void Fraction::setNumerator(int i)
{
	std::cin >> numerator;
}
void Fraction::setDenominator(int i) 
{
	while (denominator == 0) 
	{
		std::cout << "please enter a number greater or less than 0";
		std::cin >> denominator;
	}
}
Fraction& Fraction::operator +(Fraction& p,Fraction& d)
{
	Fraction f(1, 1);
	int i = p.getNumerator() + d.getNumerator();
	int n = p.Getdenominator() + d.Getdenominator();
	f.setNumerator(i);
	f.setDenominator(n);
	return f;
}


