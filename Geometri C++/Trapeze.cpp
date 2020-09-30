#include "Trapeze.h"
#include <math.h>

double Trapeze::GetC()
{
	return c;
}

double Trapeze::GetD()
{
	return d;
}

void Trapeze::SetC(double c)
{
	this->c = c;
}

void Trapeze::SetD(double d)
{
	this->d = d;
}

Trapeze::Trapeze(double a, double b, double c, double d) : Shape(a, b)
{
	this->c = c;
	this->d = d;
}

double Trapeze::GetHeight()
{
	double s = (a + b - c + d) / 2;
	return (2 / (a - c)) * (sqrt(s * (s - a + c) * (s - b) * (s - d)));
}

double Trapeze::GetArea()
{
	return 0.5 * (a + c) * GetHeight();
}

double Trapeze::GetCircumference()
{
	return a + b + c + d;
}
