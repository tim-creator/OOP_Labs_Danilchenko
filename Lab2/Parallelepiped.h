#pragma once
#include "Body.h"

class Parallelepiped:public Body {
public:

	Parallelepiped();
	Parallelepiped(double side1, double side2, double height);
	double findVolume() const override;
	double findSurfaceArea() const override;
	~Parallelepiped();

private:

	double _side1;
	double _side2;
	double _height;

};