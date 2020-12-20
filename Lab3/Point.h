#pragma once

struct Point {
	double _x;
	double _y;

	Point();
	Point(const double& x, const double& y);
	bool operator==(Point compare) const;
	Point& operator+=(Point add);
};