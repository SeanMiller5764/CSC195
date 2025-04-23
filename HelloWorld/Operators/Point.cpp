#include "Point.h"
using namespace ost;

void Point::Write(std::ostream& ostream) 
{
	ostream << x;
	ostream << y;
}
void Point::Add(Point& point) 
{
	x += point.x;
	y += point.y;
}
