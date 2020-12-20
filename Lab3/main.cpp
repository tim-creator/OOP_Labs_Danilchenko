#include "Console.h"

int main() {
	try {
		Console console;
		console.run();
	}
	catch (std::exception) {
		throw std::exception("Error");
	}
	return 0;
}