#include "Console.h"

enum {
	EXIT, SEARCH, COMMANDS
};

void Console::commands() const {
	cout << "-----------------------------------------\n";
	cout << "Command list: \n";
	cout << EXIT << ": exit\n";
	cout << SEARCH << ": search books\n";
	cout << COMMANDS << ": commands list\n";
	cout << "-----------------------------------------\n";
	return;
}

Book Console::readBook(istream& in) {
	string title;
	string author;
	int year;
	int count;
	in >> title >> author >> year >> count;
	return Book(title, author, year, count);
}

void Console::fileParse(const string& file_to_input) {
	ifstream in(file_to_input);
	int n;
	in >> n;
	for (int i = 0; i < n; ++i) {
		try {
			_lib.addBook(readBook(in));
		}
		catch (std::logic_error e) {
			cout << "There are mistakes in file: " << e.what() << '\n';
			exit(1);
		}
	}
	in.close();
	return;
}

void Console::printVector(const vector<Book*>& books) const {
	for (auto b : books) {
		cout << "-----------------------------------------\n";
		cout << "Author: " << b->getAuthor() << "\n";
		cout << "Title: " << b->getTitle() << "\n";
		cout << "Year: " << b->getYear() << "\n";
		cout << "Count: " << b->count() << "\n";
		if (b == *(--books.end())) cout << "-----------------------------------------\n";
	}
	return;
}

void Console::getBook()  {
	cout << "Criterions: \n";
	cout << "1)By title\n";
	cout << "2)By author\n";
	cout << "3)By year\n";
	cout << "4)By count\n";
	cout << "Enter search criterion: ";
	int category;
	cin >> category;
	vector<Book*> books;
	if (category == 1) {
		cout << "Enter title: ";
		string title;
		cin >> title;
		books = _lib.getBooks(category, title);
	}
	else if (category == 2) {
		cout << "Enter author name: ";
		string author;
		cin >> author;
		books = _lib.getBooks(category, author);
	}
	else if (category == 3) {
		cout << "Enter year: ";
		int year;
		cin >> year;
		books = _lib.getBooks(category, year);
	}
	else if (category == 4) {
		cout << "Enter count: ";
		int count;
		cin >> count;
		books = _lib.getBooks(category, count);
	}
	else {
		cout << "No suck category.\n";
		return;
	}
	//books = _lib->getBooks();
	printVector(books);
	return;
}

void Console::run(const string& fileName) {
	fileParse(fileName);
	commands();
	int request = 1;
  	while (request) {
		cout << "Enter command number: ";
		cin >> request;
		switch (request) {
		case EXIT:
			cout << "Goodbye.\n";
			break;
		case SEARCH:
			getBook();
			break;
		case COMMANDS:
			commands();
			break;
		default:
			cout << "No such command.\n";
			break;
		}
	}
	return;
}