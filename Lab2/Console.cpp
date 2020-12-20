#include "Console.h"
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::copy;

enum command {
	_exit_, _create_, _findVolume_, _findSurface_, _showCommands_
};

void Console::commands() const {
	cout << "Commands list:\n";
	cout << _exit_ << ": Exit.\n";
	cout << _create_ << ": Create figure.\n";
	cout << _findVolume_ << ": Find volume of i-th figure.\n";
	cout << _findSurface_ << ": Find surface area of i-th figure.\n";
	cout << _showCommands_ << ": Show commands\n";
}

void Console::createFigure() {
	cout << "1)Ball\n2)Cone\n3)Parallelepiped\nEnter figure: ";
	int ans;
	cin >> ans;
	Body** buffer = new Body*[_size + 1];
	copy(_figures, _figures + _size, buffer);
	delete[] _figures;
	_figures = buffer;
	if (ans == 1) {
		double radius;
		cout << "Enter radius value: ";
		cin >> radius;
		_figures[_size++] = new Ball(radius);
	}
	else if (ans == 2) {
		double radius, height;
		cout << "Enter radius and height values: ";
		cin >> radius >> height;
		_figures[_size++] = new Cone(height, radius);
	}
	else if (ans == 3) {
		double side1, side2, height;
		cout << "Enter values of base sides and height: ";
		cin >> side1 >> side2 >> height;
		_figures[_size++] = new Parallelepiped(side1, side2, height);
	}
	else {
		cout << "No such figures!\n";
	}
}

bool Console::checkIndex(int index) const{
	if (index >= _size) {
		cout << "Index more than size of figures.\n";
		return false;
	}
	return true;
}

void Console::findVolume() const {
	cout << "Enter index of figure: ";
	int index;
	cin >> index;
	index--;
	if (checkIndex(index)) {
		cout << _figures[index]->findVolume() << "\n";
	}
}

void Console::findSurfaceArea() const {
	cout << "Enter index of figure: ";
	int index;
	cin >> index;
	index--;
	if (checkIndex(index)) {
		cout << _figures[index]->findSurfaceArea() << "\n";
	}
}

void Console::run() {
	commands();
	int request = 1;
 	while (request) {
		cout << "Enter command number: ";
		cin >> request;
		switch (request) {
		case _exit_:
			cout << "Goodbye.\n";
			break;
		case _create_:
			createFigure();
			break;
		case _findVolume_:
			findVolume();
			break;
		case _findSurface_:
			findSurfaceArea();
			break;
		case _showCommands_:
			commands();
			break;
		default:
			cout << "No such command.\n";
			break;
		}
	}
}

Console::~Console() {
	delete[] _figures;
}