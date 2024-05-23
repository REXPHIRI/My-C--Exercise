// Triangle.h
#pragma once

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle(); // Default constructor
        Triangle(double b, double h); // Overloaded constructor
        ~Triangle(); // Destructor

        // Accessor methods
        double getBase() const;
        double getHeight() const;
    };
}
