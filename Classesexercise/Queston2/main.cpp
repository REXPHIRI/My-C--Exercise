#include <iostream>
#include "rectangle.h"

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	Rectangle rec;
	float length;
	float width;
	cout << "Enter rectangle dimension" <<endl;
	cout <<"Length: ";
	cin >> length; //prompt the user to enter the length of the Rectangle
	cout <<"Width: "; 
	cin >> width; //Prompt the user to enter the width of the Rectangle


	//assigning values using setter method from Rectangle class
	rec.setLength(length);
	rec.setWidth(width);

	Rectangle rec1(width, length);

	//calculating area
	cout <<"Area (rec): "<< rec.area() << endl;

	//from the overloaded constractor
	cout <<"Area (rec1): " << rec1.area() << endl;

	return 0;
}