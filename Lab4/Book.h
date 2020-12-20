#pragma once
#include <string>
#include <algorithm>
#include <iterator>

using std::sort;
using std::string;
using std::set_intersection;

class Book {
public:

	Book() = default;
	Book(const string& title, const string& author, const int& year, const int& count);

	bool operator==(Book compare);

	int id() const;
	void add(int value);
	int getYear() const;
	int count() const;
	string getTitle() const;
	string getAuthor() const;

	~Book() = default;

private:
	
	int _year;
	int _count;
	string _title;
	string _author;

	int _id;
	static int _idCounter;

};