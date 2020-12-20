#pragma once
#include "Body.h"

class Cone :public Body {
public:

	Cone();
	Cone(double height, double radius);
	double findVolume() const override;
	double findSurfaceArea() const override;
	~Cone();

private:

	double _height;
	double _radius;
};