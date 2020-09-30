#include "Shape.h"

Shape::Shape(double a, double b) : a(a), b(b)
{}

double Shape::GetA()
{
    return a;
}
double Shape::GetB()
{
    return b;
}

void Shape::SetA(double a)
{
    this->a = a;
}
void Shape::SetB(double b)
{
    this->b = b;
}

double Shape::GetCircumference()
{
    return (a * 2) + (b * 2);
}
double Shape::GetArea()
{
    return a * b;
}
