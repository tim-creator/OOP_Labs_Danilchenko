#pragma once
#include "Shape.h"

class Parallelogram :public Shape {
public:

	Parallelogram() = delete;
	Parallelogram(const Point* points);

	bool exist() const override;
	double area() const override;

};