#include "Square.h" // This is the Square.cpp file

namespace shapes {
    Square::Square() : sideLength(0.0) {
        // Default constructor
    }

    Square::Square(double side) : sideLength(side) {
        // Overloaded constructor
    }

    Square::~Square() {
        // Destructor
    }

    double Square::getSideLength() const {
        return sideLength;
    }
}
