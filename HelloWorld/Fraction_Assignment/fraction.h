#pragma once

namespace mathlib 
{
	class Fraction 
	{
	public:
		Fraction(int n, int d);
		~Fraction();
		int getNumerator();
		void setNumerator(int i);
		int Getdenominator();
		void setDenominator(int i);
		Fraction& operator +(Fraction& f,Fraction& p);
		Fraction operator -();
		Fraction operator *();
		Fraction operator /(Fraction& frac1);
		bool operator ==(Fraction& frac);
		bool operator !=(Fraction& frac);
		bool operator <=(Fraction& frac);
		bool operator >=(Fraction& frac);
		bool operator >(Fraction& frac);
		bool operator <(Fraction& frac);
		void operator <<(Fraction& frac);
		void operator >>(Fraction& frac);
		Fraction simplify();
		void toDouble();
	private:
		int numerator;
		int denominator=0;
	};
}
