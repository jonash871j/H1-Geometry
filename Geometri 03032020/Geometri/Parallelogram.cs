using System;

public class Parallelogram : Shape
{
    private double angle;
    public double Angle
    {
        get { return angle; }
        set { angle = value; }
    }

    public Parallelogram(double a, double b, double angle) : base(a, b)
    {
        Angle = angle;
    }

    public override double GetCircumference() 
    {
        return (a * 2) + (b * 2);
    }

    public override double GetArea() 
    {
        return a * b * Math.Sin(angle * 3.1415 / 180);
    }
}
