#pragma once

#include "Library.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>


using std::cin;
using std::cout;
using std::string;
using std::istream;
using std::ifstream;

class Console {
public:

	Console() = default;

	void run(const string& fileName);

	~Console() = default;

private:

	Library _lib;

	void commands() const;
	Book readBook(istream& fin);
	void fileParse(const string& file_to_input);
	void printVector(const vector<Book*>& books) const;
	void getBook();

};

