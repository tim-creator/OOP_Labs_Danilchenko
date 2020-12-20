#pragma once

#define _USE_MATH_DEFINES 
#include "Point.h"
#include <string>
#include <cmath>

using std::string;

class Shape {
public:

	Shape();
	Shape(const Shape& toCopy);
	Shape(string name, int size, const Point* points);
	
	Shape& operator=(const Shape& equate);

	virtual bool exist() const = 0;
	virtual double area() const = 0;
	
	void move(double xOff, double yOff);
	void rotate(double degree);

	int size() const;
	string name() const;
	Point center() const;
	double distance(std::pair<Point, Point> a) const;
	std::pair<Point, Point>* sides() const;
	bool lieSame(std::pair<Point, Point> a, std::pair<Point, Point> b) const;
	bool parallel(std::pair<Point, Point> a, std::pair<Point, Point> b) const;

	std::pair<double, double> kb(std::pair<Point, Point> a) const;

	Point showPoint(int index) const;

	virtual ~Shape();

private:

	string _name;

	int _size;
	Point* _points;

protected:

	void existCheck() const ;

};