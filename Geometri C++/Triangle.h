#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
    double c;

public: 
    Triangle(double a, double b);

public:
    void SetC(double c);

public:
    double GetC();
    double GetArea() override;
    double GetCircumference() override;
};

