#include "Book.h"

int Book::_idCounter = 1;

Book::Book(const string& title, const string& author, const int& year, const int& count) :
	_title(title), _author(author), _year(year), _count(count), _id(_idCounter++)
{}

bool Book::operator==(Book compare) {
	return (_title == compare._title
		&& _author == compare._author
		&& _year == compare._year);
}

int Book::id() const {
	return _id;
}

void Book::add(int value) {
	_count += value;
	return;
}

int Book::getYear() const {
	return _year;
}

int Book::count() const {
	return _count;
}
string Book::getTitle() const {
	return _title;
}

string Book::getAuthor() const {
	return _author;
}
