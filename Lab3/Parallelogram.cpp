#include "Parallelogram.h"

Parallelogram::Parallelogram(const Point* points)
	: Shape("Parallelogram", 4, points) {}

bool Parallelogram::exist() const {
	std::pair<Point, Point>* s = sides();
	
	bool res = true;

	if ((!(parallel(s[0], s[2]) && parallel(s[1], s[3])))
		|| (!(distance(s[0]) == distance(s[2]) && distance(s[1]) == distance(s[3])))) {
		res = false;
	}

	delete[] s;

	return res;
}

double Parallelogram::area() const {
	std::pair<Point, Point>* s = sides();

	Point a = s[0].first;
	Point b = s[0].second;
	Point c = s[1].second;

	double ab = distance({ a, b });
	double bc = distance({ b, c });
	double ca = distance({ c, a });

	double angle = acos(sqrt((ca * ca - ab * ab - bc * bc) / (2 * ab * bc)));

	double area = ab * bc * sin(angle);

	delete[] s;

	return area;
}