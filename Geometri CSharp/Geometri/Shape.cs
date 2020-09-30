
public abstract class Shape
{
    protected double a, b;

    public double A
    {
        get { return a; }
        set { a = value; }
    }
    public double B
    {
        get { return b; }
        set { b = value; }
    }


    protected Shape(double a, double b)
    {
        A = a;
        B = b;
    }

    public virtual double GetCircumference()
    {
        return (a * 2) + (b * 2);
    }
    public virtual double GetArea()
    {
        return a * b;
    }
}
