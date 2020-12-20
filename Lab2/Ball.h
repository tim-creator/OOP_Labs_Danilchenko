#pragma once
#include "Body.h"

class Ball :public Body {
public:

	Ball();
	Ball(double radius);
	double findVolume() const override;
	double findSurfaceArea() const override;
	~Ball();

private:

	double _radius;

};