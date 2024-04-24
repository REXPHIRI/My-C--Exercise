#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the area of a square
float calculateSquareArea(float side) {
    return side * side;
}

int main() {
    int choice;
    float base, height, length, width, side;

    cout << "Please select the area of the shape to calculate : " << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
	cout << "4. Quit Program" << endl;
	
    cout << "Enter selection : ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << calculateTriangleArea(base, height) << " square units" << endl;
            break;
        case 2:
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << " square units" << endl;
            break;
        case 3:
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "Area of the square: " << calculateSquareArea(side) << " square units" << endl;
            break;
			
        default:
            cout << "Your input was : " << choice << " which is invalid input please enter a valid input !!! "<< endl;
    }

    return 0;
}