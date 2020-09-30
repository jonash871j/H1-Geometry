#pragma once
#include "Shape.h"

class Parallelogram : public Shape
{
private:
    double angle;

public:
    Parallelogram(double a, double b, double angle);

public:
    double GetAngle();
    double GetCircumference() override;
    double GetArea() override;

public:
    void SetAngle(double angle);
};