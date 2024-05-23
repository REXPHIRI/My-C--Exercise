#include "rectangle.h" // This is the cpp header file for  Rectangle

using namespace std;
Rectangle::Rectangle() {
	//constractor
	m_length = 0;
	m_width = 0;
}
Rectangle::Rectangle(const float &width, const float &length) {
	//overloaded constructor
	m_length = 0;
	m_width = 0;
	setWidth(width);
	setLength(length);

}
Rectangle::~Rectangle() {
	//destractor
}
//setting the length
void Rectangle::setLength(const float &length) {
	if(m_length != length) {
		m_length = length;
	}
}
void Rectangle::setWidth(const float &width){
	if(m_width != width) {
		m_width = width;
	}

}

//set the getters
float Rectangle::getLength()const {
	return m_length;
}
float Rectangle::getWidth()const {
	return m_width;
}

//calculating area
float Rectangle::area() {
	return getWidth() * getLength();
}