#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

class Body {
public:

	Body();
	virtual double findVolume() const = 0;
	virtual double findSurfaceArea() const = 0;
	virtual ~Body();
};