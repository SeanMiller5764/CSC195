#pragma once
#include <iostream>
namespace ost
{

	class Point
	{
	public:
		float x, y;
	public:
		Point() : x{ 0 }, y{ 0 } {}
		Point(float x, float y) : x{ x }, y{ y } {}
		void Write(std::ostream& ostream);
		void Add(Point& point);
		
	}
	;
}
;

