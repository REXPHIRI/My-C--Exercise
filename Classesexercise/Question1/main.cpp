// This is a main cpp file and it has also import the header file for triangle into the main function

#include <iostream>
#include "Rectangle.h"

int main() {
    double userLength, userWidth;

    // Create an instance of Rectangle
    Rectangle myRectangle;

    // Input length and width from the user
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> userLength;
    myRectangle.setLength(userLength);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> userWidth;
    myRectangle.setWidth(userWidth);

    // Calculate and display the area
    double area = myRectangle.calculateArea();
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
