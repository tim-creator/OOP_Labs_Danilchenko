#include "Cone.h"

Cone::Cone()
	: _height(0.0), _radius(0.0) {}

Cone::Cone(double height, double radius)
	: _height(height), _radius(radius) {}

double Cone::findVolume() const {
	return M_PI * _radius * _radius * _height / 3;
}

double Cone::findSurfaceArea() const {
	double l = sqrt(_radius * _radius + _height * _height);
	return M_PI * _radius * (_radius + l);
}

Cone::~Cone() {}