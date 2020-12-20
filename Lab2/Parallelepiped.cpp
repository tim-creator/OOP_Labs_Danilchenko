#include "Parallelepiped.h"

Parallelepiped::Parallelepiped()
	: _side1(0.0), _side2(0.0), _height(0.0) {}

Parallelepiped::Parallelepiped(double side1, double side2, double height)
	: _side1(side1), _side2(side2), _height(height) {}

double Parallelepiped::findVolume() const {
	return _side1 * _side2 * _height;
}

double Parallelepiped::findSurfaceArea() const {
	return 2 * (_side1 * _side2 + _side1 * _height + _side2 * _height);
}

Parallelepiped::~Parallelepiped() {}