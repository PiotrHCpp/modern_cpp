#include "Square.hpp"
#include <iostream>

Square::Square(double x, Color c)
    : Rectangle(x, x, c)
{}

Square::Square(const Square &other)
    : Rectangle(other.getX(), other.getX(), other.getColor())
{}

double Square::getArea()
{
    return getX() * getX();
}

double Square::getPerimeter()
{
    return 4 * getX();
}

void Square::print()
{
    std::cout << "Square:      x: " << getX() << std::endl
              << "          area: " << getArea() << std::endl
              << "     perimeter: " << getPerimeter() << std::endl
              << "         Color: " << static_cast<int>(getColor()) << std::endl << std::endl;
}
