// Square.h
#pragma once

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square(); // Default constructor
        Square(double side); // Overloaded constructor
        ~Square(); // Destructor

        // Accessor method
        double getSideLength() const;
    };
}
 