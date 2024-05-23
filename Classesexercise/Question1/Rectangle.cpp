// Rectangle.cpp

#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

Rectangle::~Rectangle() {
    // Destructor
}

void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double wid) {
    width = wid;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::calculateArea() const {
    return length * width;
}
