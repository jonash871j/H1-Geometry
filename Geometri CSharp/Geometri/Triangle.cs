using System;

class Triangle : Shape
{
    private double c;
    public double C
    {
        get { return c; }
        set { c = value; }
    }

    public Triangle(double a, double b) : base(a, b)
    {
        c = Math.Sqrt(Math.Pow(a, 2) + Math.Pow(b, 2));
    }

    public override double GetArea()
    {
        return 0.5 * a * b;
    }

    public override double GetCircumference()
    {
        return a + b + c;
    }
}