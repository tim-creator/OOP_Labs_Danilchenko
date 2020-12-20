#include "Point.h"

Point::Point()
	: _x(0.0), _y(0.0) {}

Point::Point(const double& x, const double& y)
	: _x(x), _y(y) {}

bool Point::operator==(Point compare) const {
	return (_x == compare._x && _y == compare._y);
}

Point& Point::operator+=(Point add) {
	_x += add._x;
	_y += add._y;
	return *this;
}