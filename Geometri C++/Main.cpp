#include <iostream>
#include <vector>

#include "Square.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Trapeze.h"
#include "Triangle.h"

int main()
{
    Square* square = new Square(32);
    Rectangle* rectangle = new Rectangle(24, 8);
    Parallelogram* parallelogram = new Parallelogram(3, 5, 20);
    Trapeze* trapeze = new Trapeze(10, 9, 8, 9);
    Triangle* triangle = new Triangle(16, 32);

    std::cout << "\n- Square\n";
    std::cout << "O = " << square->GetCircumference() << "\n";
    std::cout << "A = " << square->GetArea() << "\n";

    std::cout << "\n- Rectangle\n";
    std::cout << "O = " << rectangle->GetCircumference() << "\n";
    std::cout << "A = " << rectangle->GetArea() << "\n";

    std::cout << "\n- Parallelogram\n";
    std::cout << "O = " << parallelogram->GetCircumference() << "\n";
    std::cout << "A = " << parallelogram->GetArea() << "\n";

    std::cout << "\n- Trapeze\n";
    std::cout << "O = " << trapeze->GetCircumference() << "\n";
    std::cout << "A = " << trapeze->GetArea() << "\n";

    std::cout << "\n- Triangle\n";
    std::cout << "O = " << triangle->GetCircumference() << "\n";
    std::cout << "A = " << triangle->GetArea() << "\n";
}