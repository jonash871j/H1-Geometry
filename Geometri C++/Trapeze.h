#pragma once
#include "Shape.h"

class Trapeze : public Shape
{
private:
    double c, d;

public:
    Trapeze(double a, double b, double c, double d);

public:
    void SetC(double c);
    void SetD(double d);

public:
    double GetC();
    double GetD();
    double GetHeight();
    double GetArea() override;
    double GetCircumference() override;
};

