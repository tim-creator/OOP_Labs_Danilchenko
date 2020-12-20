#include "Ball.h"

Ball::Ball()
	: _radius(0.0) {}

Ball::Ball(double radius)
	: _radius(radius) {}

double Ball::findVolume() const {
	return 4 * M_PI * _radius * _radius * _radius / 3;
}

double Ball::findSurfaceArea() const {
	return 4 * M_PI * _radius * _radius;
}

Ball::~Ball() {}