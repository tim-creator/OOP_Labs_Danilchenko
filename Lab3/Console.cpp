#include "Console.h"
#include <iostream>
#include <algorithm>
#include "Fabric.h"

using std::cin;
using std::cout;
using std::copy;

enum _commands_ {
	_exit_, _create_, _area_, _center_, _rotate_, _move_, _info_, _commands_
};

Console::Console()
	: _size(0), _figures(new Shape*[_size]) {}

Console::~Console() {
	delete[] _figures;
}

void Console::commands() const {
	cout << "Command list: \n";
	cout << _exit_ <<": exit \n";
	cout << _create_ <<": create figure\n";
	cout << _area_ << ": find area of figure\n";
	cout << _center_ << ": find center of figure\n";
	cout << _rotate_ << ": rotate figure\n";
	cout << _move_ << ": move figure\n";
	cout << _info_ << ": show information about figure\n";
	cout << _commands_ << ": commands list\n";
}

void Console::createF() {
	Shape** buffer = new Shape*[_size + 1];
	copy(_figures, _figures + _size, buffer);
	delete[] _figures;
	_figures = buffer;

	int select;
	cout << "1)Triangle\n2)Parallelogram\nSelect figure:";
	cin >> select;
	Point* points = nullptr;
	int size;
	
	if (select == 1) size = 3;
	else if (select == 2) size = 4;
	else {
		cout << "No such figures.\n";
		return;
	}
	
	points = new Point[size];
	cout << "Enter info: \n";
	for (int i = 0; i < size; ++i) {
		cout << "x" << i + 1 << ": ";
		cin >> points[i]._x;
		cout << "y" << i + 1 << ": ";
		cin >> points[i]._y;
		cout << "\n";
	}
	Shape* new_f = Factory::create(points, size);
	if (new_f != nullptr) {
		_figures[_size++] = new_f;
	}
	else {
		cout << "Figure hasn't been created. Figure doesn't exist.\n";
	}
}

bool Console::checkIndex(int index) const {
	return index < _size;
}

void Console::fA() const {
	cout << "Enter index of figure: ";
	int index;
	cin >> index;
	if (checkIndex(--index)) {
		cout << _figures[index]->area() << "\n";
	}
	else {
		cout << "Index more than size.\n";
	}
}

void Console::fC() const {
	cout << "Enter index of figure: ";
	int index;
	cin >> index;
	if (checkIndex(--index)) {
		Point c = _figures[index]->center();
		cout << "x: "<< c._x << "\ny: " << c._y << "\n";
	}
	else {
		cout << "Index more than size.\n";
	}
}

void Console::info() const {
	cout << "Enter index of figure: ";
	int index;
	cin >> index;
	if (checkIndex(--index)) {
		cout << _figures[index]->name() << "\n";
		cout << "Points: \n";
		for (int i = 0; i < _figures[index]->size(); ++i) {
			Point current = _figures[index]->showPoint(i);
			cout << i + 1 << ": x" << i + 1 << ": "<< current._x << " " << "|y" << i + 1 << ": "<< current._y << "\n";
		}
	}
	else {
		cout << "Index more than size.\n";
	}
}

void Console::rotate() const {
	cout << "Enter index of figure: ";
	int index;
	cin >> index;
	if (checkIndex(--index)) {
		double degree;
		cout << "Enter degree to rotate: ";
		cin >> degree;
		_figures[index]->rotate(degree);
	}
	else {
		cout << "Index more than size.\n";
	}
}

void Console::move() const {
	int index;
	cout << "Enter index io figure: ";
	cin >> index;
	if(!checkIndex(--index)) cout << "Index more than size.\n";
	cout << "Enter offset\n";
	double x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	_figures[index]->move(x, y);
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
			createF();
			break;
		case _area_:
			fA();
			break;
		case _center_:
			fC();
			break;
		case _info_:
			info();
			break;
		case _rotate_:
			rotate();
			break;
		case _move_:
			move();
			break;
		case _commands_:
			commands();
			break;
		default:
			cout << "No such command.\n";
			break;
		}
	}
}
