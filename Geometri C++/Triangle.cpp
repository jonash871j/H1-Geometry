#include "Triangle.h"
#include <math.h>

Triangle::Triangle(double a, double b) : Shape(a, b)
{
	c = sqrt(pow(a, 2) + pow(b, 2));
}

void Triangle::SetC(double c)
{
	this->c = c;
}

double Triangle::GetC()
{
	return c;
}

double Triangle::GetArea()
{
	return 0.5 * a * b;
}

double Triangle::GetCircumference()
{
	return a + b + c;
}
