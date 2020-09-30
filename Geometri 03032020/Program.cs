using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        Square square = new Square(32);
        Rectangle rectangle = new Rectangle(24, 8);
        Parallelogram parallelogram = new Parallelogram(3, 5, 20);
        Trapeze trapeze = new Trapeze(10, 9, 8, 9);
        Triangle triangle = new Triangle(16, 32);

        List<Shape> shapes = new List<Shape>() { square, rectangle, parallelogram, trapeze, triangle };

        for (int i = 0; i <  shapes.Count; i++)
            Console.WriteLine(shapes[i].ToString() + ": O = " + shapes[i].GetCircumference() + " | A = " + shapes[i].GetArea());
    }
}
