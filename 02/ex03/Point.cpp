#include "Point.hpp"

Point::Point()
	: x(0), y(0) {
	
}

Point::Point(float x, float y)
	: x(x), y(y) {
	
}

Point::Point(const Point& another) 
	: x(another.x), y(another.y) {
	
}

Point::~Point(){
	
}

Point& Point::operator=(const Point&){
	return *this;
}

Fixed Point::get_x() const{
	return x;
}

Fixed Point::get_y() const{
	return y;
}
