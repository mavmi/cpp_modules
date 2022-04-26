#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
public:
	Point();
	Point(float x, float y);
	Point(const Point& another);
	~Point();

	Point& operator=(const Point& another);
	
	Fixed get_x() const;
	Fixed get_y() const;

private:
	Fixed const x;
	Fixed const y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif