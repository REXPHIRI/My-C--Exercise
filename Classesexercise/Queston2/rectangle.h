#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle
{
public:
	Rectangle();
	Rectangle(const float &width, const float &length);
	~Rectangle();

	//setters
	void setLength(const float &length);
	void setWidth(const float &width);

	//getters
	float getLength()const;
	float getWidth()const;

	//other methoses
	float area();
private:
	float m_length;
	float m_width;
	
};



#endif