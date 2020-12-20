#pragma once

#include <exception>
#include "Shape.h"

class Exception : public std::exception {
public:

	Exception(const Shape& a);
	const std::string about() const noexcept;

private:

	string _aboutS;

};