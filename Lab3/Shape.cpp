#include "Shape.h"
#include "Exception.h"
#include <algorithm>

Shape::Shape()
	: _name(""), _size(0), _points(new Point[_size]){}

Shape::Shape(string name, int size, const Point* points)
	: _name(name), _size(size), _points(new Point[_size]) {
	std::copy(points, points + size, _points);
}

Shape::Shape(const Shape& toCopy)
	: Shape(toCopy._name, toCopy._size, toCopy._points){}

Shape& Shape::operator=(const Shape& equate) {
	if (this == &equate) return *this;
	if (_points != nullptr) {
		delete[] _points;
	}
	_size = equate._size;
	_points = new Point[_size];
	std::copy(equate._points, equate._points + _size, _points);
	return *this;
}

void Shape::move(double xOff, double yOff){
	Point off(xOff, yOff);
	for (int i = 0; i < _size; ++i) {
		_points[i] += off;
	}
}

void Shape::rotate(double degree) {
	double angle = ((degree) * M_PI / 180.0);
	for (int i = 0; i < _size; ++i) {
		double EPS = 1e-6;
		double x = _points[i]._x * cos(angle) - _points[i]._y * sin(angle);
		double y = _points[i]._x * sin(angle) + _points[i]._y * cos(angle);
		if (x > -EPS && x < EPS) x = 0.0;
		if (y > -EPS && y < EPS) y = 0.0;
		_points[i] = Point(x, y);
	}
}

int Shape::size() const {
	return _size;
}

string Shape::name() const {
	return _name;
}

Point Shape::center() const {
	double _xB = 0.0,
		_yB = 0.0;
	for (int i = 0; i < _size; ++i) {
		_xB += _points[i]._x;
		_yB += _points[i]._y;
	}
	return Point(_xB / _size, _yB / _size);
}

double Shape::distance(std::pair<Point, Point> a) const {
	return sqrt((a.first._x - a.second._x) * (a.first._x - a.second._x) + (a.first._y - a.second._y) * (a.first._y - a.second._y));
}

std::pair<Point, Point>* Shape::sides() const {
	std::pair<Point, Point>* sides = new std::pair<Point, Point>[_size];
	for (int i = 0; i < _size - 1; ++i) {
		sides[i] = { _points[i], _points[i + 1] };
	}
	sides[_size - 1] = { _points[_size - 1], _points[0] };
	return sides;
}

std::pair<double, double> Shape::kb(std::pair<Point, Point> a) const {
	double k;
	if ((a.first._x - a.second._x) != 0) {
		k = (a.first._y - a.second._y) / (a.first._x - a.second._x);
	}
	else {
		k = INFINITY;
	}
	double b;
	if (k == INFINITY) {
		b = 0;
	}
	else {
		b = a.first._y - a.first._x * k;
	}
	return { k, b };
}

bool Shape::lieSame(std::pair<Point, Point> a, std::pair<Point, Point> b) const {
	double EPS = -1e9;
	std::pair<double, double> koef1 = kb(a);
	std::pair<double, double> koef2 = kb(b);
	if (std::abs(koef1.first - koef2.first) < EPS && std::abs(koef1.second - koef2.second < EPS)) {
		return true;
	}
	return false;
}

bool Shape::parallel(std::pair<Point, Point> a, std::pair<Point, Point> b) const {
	double EPS = 1e-9;
	std::pair<double, double> koef1 = kb(a);
	std::pair<double, double> koef2 = kb(b);
	if (koef1.first == INFINITY && koef2.first == INFINITY) return true;
	if (std::abs(koef1.first - koef2.first) < EPS && std::abs(koef1.second - koef2.second) > EPS) {
		return true;
	}
	return false;
}

Point Shape::showPoint(int index) const{
	return _points[index];
}

Shape::~Shape() {
	if (_points != nullptr) { 
		delete[] _points; 
	}
}

void Shape::existCheck() const {
	if (!exist()) {
		throw Exception(*this);
	}
}