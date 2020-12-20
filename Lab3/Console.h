#pragma once
#include "Triangle.h"
#include "Parallelogram.h"

class Console {
public:
	
	Console();

	void run();

	~Console();

private:

	int _size;
	Shape** _figures;

	void commands() const;
	void createF();
	void fA() const;
	void fC() const;
	bool checkIndex(int index) const;
	void info() const;
	void rotate() const;
	void move() const;

};