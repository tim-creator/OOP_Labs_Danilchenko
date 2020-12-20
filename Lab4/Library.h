#pragma once
#include "Book.h"
#include <map>
#include <set>
#include <vector>

using std::map;
using std::set;
using std::vector;

class Library{
public:

	Library() = default;

	void addBook(Book book);

	vector<Book*> getBooks(int type, ...);
	vector<Book*> booksByYear(const int& year);
	vector<Book*> booksByCount(const int& count);
	vector<Book*> booksByTitle(const string& title);
	vector<Book*> booksByAuthor(const string& author);
	
	~Library() = default;

private:

	map<int, Book> _books;

	map<int, set<int>> _booksByYear;
	map<int, set<int>> _booksByCount; 
	map<string, set<int>> _booksByTitle;
	map<string, set<int>> _booksByAuthor;

};

