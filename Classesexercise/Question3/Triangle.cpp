#include "Triangle.h" // This is a Triangle.cpp file

namespace shapes {
    Triangle::Triangle() : base(0.0), height(0.0) {
        // Default constructor
    }

    Triangle::Triangle(double b, double h) : base(b), height(h) {
        // Overloaded constructor
    }

    Triangle::~Triangle() {
        // Destructor
    }

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }
}
