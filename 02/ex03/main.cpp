#include "Point.hpp"

void is_in_triangle(Point const point) {
	Point const a(0, 0);
	Point const b(7, 0);
	Point const c(0, 8);

	std::cout << bsp(a, b, c, point) << std::endl;
}

int main(){
	{
		Point const point(0, 0);
		is_in_triangle(point); // 1
	}

	{
		Point const point(7, 0);
		is_in_triangle(point); // 1
	}
	
	{
		Point const point(0, 8);
		is_in_triangle(point); // 1
	}

	{
		Point const point(1, 1);
		is_in_triangle(point); // 1
	}

	{
		Point const point(3, 2);
		is_in_triangle(point); // 1
	}

	{
		Point const point(-1, 1);
		is_in_triangle(point); // 0
	}

	{
		Point const point(-100, 100);
		is_in_triangle(point); // 0
	}

	{
		Point const point(5, 5);
		is_in_triangle(point); // 0
	}

	return 0;
}