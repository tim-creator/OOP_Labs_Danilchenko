#pragma once
#include "Parallelepiped.h"
#include "Cone.h"
#include "Ball.h"

class Console {
public:

	void run();
	void createFigure();
	void findVolume() const;
	void findSurfaceArea() const;
	~Console();

private:

	int _size = 0;
	Body** _figures = new Body*[_size];

	void commands() const;
	bool checkIndex(int index) const;

};