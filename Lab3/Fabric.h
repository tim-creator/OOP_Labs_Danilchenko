#pragma once

#include "Shape.h"
#include "Triangle.h"
#include "Parallelogram.h"

class Factory {
public: 
	
	static Shape* create(const Point* points, int size);

};