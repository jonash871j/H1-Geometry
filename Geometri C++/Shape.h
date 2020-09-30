#pragma once

class Shape
{
protected:
    double a, b;

protected:
    Shape(double a, double b);

public:
    void SetA(double a);
    void SetB(double b);

public:
    double GetA();
    double GetB();
    virtual double GetCircumference();
    virtual double GetArea();
};
