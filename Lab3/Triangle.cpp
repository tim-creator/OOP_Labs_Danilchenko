#include "Triangle.h"

Triangle::Triangle(const Point* points)
	: Shape("Triangle", 3, points) {}

bool Triangle::exist() const {
	std::pair<Point, Point>* s = sides();

	double A = distance(s[0]);
	double B = distance(s[1]);
	double C = distance(s[2]);

	delete[] s;

	return (A + B > C && C + A > B && B + C > A);
}

double Triangle::area() const {
	std::pair<Point, Point>* s = sides();

	double A = distance(s[0]);
	double B = distance(s[1]);
	double C = distance(s[2]);

	delete[] s;

	double p = (A + B + C) / 2;

	return sqrt(p * (p - A) * (p - B) * (p - C));
}