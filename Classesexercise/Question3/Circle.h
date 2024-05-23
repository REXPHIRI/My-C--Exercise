// Circle.h
#pragma once

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle(); // Default constructor
        Circle(double r); // Overloaded constructor
        ~Circle(); // Destructor

        // Accessor method
        double getRadius() const;
    };
}
