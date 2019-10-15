// Jada Sheldon

#include "box.hpp"
#include <iostream>
#include <string>
using std::string;
#include <sstream>
using std::ostringstream;


//defined _howMany int
int Box::_howMany = 0;


int Box::howMany() {
	return _howMany;
}

int Box::setWidth(int widthSize) {
	_width = widthSize;
	return _width;
}

int Box::setHeight(int heightSize) {
	_height = heightSize;
	return _height;
}

int Box::getWidth() const {
	return _width;
}

int Box::getHeight() const {
	return _height;
}

string Box::type() const {
	string types;
	switch (category) {
	case HOLLOW:
		types = "Hollow";
		break;
	case CHECKERED:
		types = "Checkered";
		break;
	case FILLED:
		types = "Filled";
		break;
	}
	return types;
}

void Box::print(ostream& os) const {
	for (int i = 0; i < _height; i++) {
		if (full == true) {
			for (int j = 0; j < _width; j++) {
				os << "x";
			}
			os << "\n";
		}
		else {
			if (i == 0 || i == _height - 1) {
				for (int j = 0; j < _width; j++) {
					os << "x";
				}
			}
			else {
				for (int j = 0; j < _width; j++) {
					if (j == 0 || j == _width - 1) {
						os << "x";
					}
					else {
						os << " ";
					}
				}
			}
			os << "\n";

		}
	}
}



//changed bool to enum type
Box::Box() : _width(1), _height(1), category(FILLED) {
	//added counter
	_howMany++;
}

//changed bool to enum type
Box::Box(int userWidth, int userHeight) : _width(userWidth), _height(userHeight), category(FILLED) {
	//added counter
	_howMany++;
}

//changed bool to enum type
Box::Box(int userWidth, int userHeight, enum userType) : _width(userWidth), _height(userHeight), category(userType) {
	//added counter
	_howMany++;
}


//created destructor
Box::~Box() {
	//minus counter
	_howMany--;
}