#pragma once


class Animal 
{
public:
	Animal() 
	{
		m_limbs = 0;
		m_ptr = new int(25);
	}
	Animal(int limb) 
	{
		m_limbs = limb;
	}

	~Animal() 
	{
		delete m_ptr;
	}
	virtual void Travel();
	int GetLimbs() { return m_limbs; }
	void setLimbs(int limbs) { m_limbs = limbs; }
protected:
	int m_limbs;
	int* m_ptr = nullptr;
};