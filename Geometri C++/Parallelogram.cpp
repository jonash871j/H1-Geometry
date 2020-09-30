#include "Parallelogram.h"
#include <math.h>

double Parallelogram::GetAngle()
{
	return angle;
}

void Parallelogram::SetAngle(double angle)
{
	this->angle = angle;
}

Parallelogram::Parallelogram(double a, double b, double angle) : Shape(a, b)
{
	this->angle = angle;
}

double Parallelogram::GetCircumference()
{
	return (a * 2) + (b * 2);
}
double Parallelogram::GetArea()
{
	return a * b * sin(angle * 3.1415 / 180);
}
