#include "Point.hpp"

float area(Point const a, Point const b, Point const c){
	float val = (
		((a.get_x().toFloat() - c.get_x().toFloat()) * (b.get_y().toFloat() - c.get_y().toFloat()) -
		(b.get_x().toFloat() - c.get_x().toFloat()) * (a.get_y().toFloat() - c.get_y().toFloat()))
	) / 2.0f;
	return (val < 0) ? val * -1.0f : val;
}

bool are_equal(float a, float b){
	float eps = 1e-6;
	float diff = (a < b) ? b - a : a - b;
	return (diff < eps);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	float full_area = area(a, b, c);
	float area_a = area(point, b, c);
	float area_b = area(a, point, c);
	float area_c = area(a, b, point);

	return (are_equal(full_area, area_a + area_b + area_c));
}
