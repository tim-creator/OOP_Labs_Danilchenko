#include "Library.h"

void Library::addBook(Book book) {
	_books.insert({ book.id(), book });
	auto itYear = _booksByYear.find(book.getYear());
	auto itCount = _booksByCount.find(book.count());
	auto itTitle = _booksByTitle.find(book.getTitle());
	auto itAuthor = _booksByAuthor.find(book.getAuthor());
	if (itYear != _booksByYear.end()) {
		itYear->second.insert(book.id());
	}
	else {
		_booksByYear[book.getYear()] = set<int>();
		_booksByYear[book.getYear()].insert(book.id());
	}
	if (itCount != _booksByCount.end()) {
		itCount->second.insert(book.id());
	}
	else {
		_booksByCount[book.count()] = set<int>();
		_booksByCount[book.count()].insert(book.id());
	}
	if (itTitle != _booksByTitle.end()) {
		itTitle->second.insert(book.id());
	}
	else {
		_booksByTitle[book.getTitle()] = set<int>();
		_booksByTitle[book.getTitle()].insert(book.id());
	}
	if (itAuthor != _booksByAuthor.end()) {
		itAuthor->second.insert(book.id());
	}
	else {
		_booksByAuthor[book.getAuthor()] = set<int>();
		_booksByAuthor[book.getAuthor()].insert(book.id());
	}
	return;
}

vector<Book*> Library::getBooks(int type, ...) {
	vector<Book*> books;
	va_list p;
	__crt_va_start(p, type);
	switch (type) {
	case 1: {
		string title = __crt_va_arg(p, string);
		books = booksByTitle(title);
		break;
	}
	case 2: {
		string author = __crt_va_arg(p, string);
		books = booksByAuthor(author);
		break;
	}
	case 3: {
		int year = __crt_va_arg(p, int);
		books = booksByYear(year);
		break;
	}
	case 4: {
		int count = __crt_va_arg(p, int);
		books = booksByCount(count);
		break;
	}
	default:
		break;
	}
	__crt_va_end(p);
	return books;
}

vector<Book*> Library::booksByYear(const int& year) {
	vector<Book*> books;
	auto it = _booksByYear.find(year);
	if (it == _booksByYear.end()) {
		return books;
	}
	for (set<int>::iterator itSet = it->second.begin(); itSet != it->second.end(); ++itSet) {
		books.push_back(&_books[*itSet]);
	}
	return books;
}

vector<Book*> Library::booksByCount(const int& count) {
	vector<Book*> books;
	auto it = _booksByCount.find(count);
	if (it == _booksByCount.end()) {
		return books;
	}
	for (set<int>::iterator itSet = it->second.begin(); itSet != it->second.end(); ++itSet) {
		books.push_back(&_books[*itSet]);
	}
	return books;
}

vector<Book*> Library::booksByTitle(const string& title) {
	vector<Book*> books;
	auto it = _booksByTitle.find(title);
	if (it == _booksByTitle.end()) {
		return books;
	}
	for (set<int>::iterator itSet = it->second.begin(); itSet != it->second.end(); ++itSet) {
		books.push_back(&_books[*itSet]);
	}
	return books;
}

vector<Book*> Library::booksByAuthor(const string& author) {
	vector<Book*> books;
	auto it = _booksByAuthor.find(author);
	if (it == _booksByAuthor.end()) {
		return books;
	}
	for (set<int>::iterator itSet = it->second.begin(); itSet != it->second.end(); ++itSet) {
		books.push_back(&_books[*itSet]);
	}
	return books;
}
