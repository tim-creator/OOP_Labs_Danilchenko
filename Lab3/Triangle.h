#pragma once
#include "Shape.h"

class Triangle:public Shape {
public:

	Triangle() = delete;
	Triangle(const Point* points);

	bool exist() const override;
	double area() const override;

};