#include "Exception.h"
#include <sstream>

Exception::Exception(const Shape& a) {
	std::ostringstream sstr;
	sstr << "Shape [" << a.name() << "] with " << a.size() << " can't be used";
	_aboutS = sstr.str();
}

const string Exception::about() const noexcept {
	return _aboutS.c_str();
}