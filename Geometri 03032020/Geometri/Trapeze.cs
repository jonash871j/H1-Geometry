using System;

class Trapeze : Shape
{
    private double c, d;
    public double C
    {
        get { return c; }
        set { c = value; }
    }
    public double D
    {
        get { return d; }
        set { d = value; }
    }

    public Trapeze(double a, double b, double c, double d) : base(a, b)
    {
        C = c;
        D = d;
    }
    public double GetHeight()
    {
        double s = (a + b - c + d) / 2;
        return (2 / (a - c)) * (Math.Sqrt(s * (s - a + c) * (s - b) * (s - d)));
    }
   
    public override double GetArea()
    {
        return 0.5 * (a + c) * GetHeight();
    }

    public override double GetCircumference()
    {
        return a + b + c + d;
    }
}
