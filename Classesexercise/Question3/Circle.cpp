#include "Circle.h" //This is a cpp file for a circle

namespace shapes {
    Circle::Circle() : radius(0.0) {
        // Default constructor
    }

    Circle::Circle(double r) : radius(r) {
        // Overloaded constructor
    }

    Circle::~Circle() {
        // Destructor
    }

    double Circle::getRadius() const {
        return radius;
    }
}
