#include "Fabric.h"

Shape* Factory::create(const Point* points, int size) {
	Shape* f = nullptr;
	if (size == 3) {
		Triangle t(points);
		if (t.exist()) {
			f = new Triangle(points);
		}
	}
	else if (size == 4) {
		Parallelogram p(points);
		if (p.exist()) {
			f = new Parallelogram(points);
		}
	}
	return f;
}