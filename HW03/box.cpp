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

Box::Boxtype Box::getType() const {
	return category;
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
Box::Box(int userWidth, int userHeight, Boxtype userType) : _width(userWidth), _height(userHeight), category(userType) {
	//added counter
	_howMany++;
}


//created destructor
Box::~Box() {
	//minus counter
	_howMany--;
}


//copy paste printer function then changed the if statement for a switch
//added Checkered option
std::ostream& operator<<(std::ostream& os, const Box& boxPrint) {
	Box::Boxtype usertype = boxPrint.getType();
	for (int i = 0; i < boxPrint.getHeight(); i++) {
		switch (usertype) {
		case Box::Boxtype::FILLED:
			for (int j = 0; j < boxPrint.getWidth(); j++) {
				os << "x";
			}
			os << "\n";
			break;
		case Box::Boxtype::HOLLOW:
			if (i == 0 || i == boxPrint.getHeight() - 1) {
				for (int j = 0; j < boxPrint.getWidth(); j++) {
					os << "x";
				}
			}
			else {
				for (int j = 0; j < boxPrint.getWidth(); j++) {
					if (j == 0 || j == boxPrint.getWidth() - 1) {
						os << "x";
					}
					else {
						os << " ";
					}
				}
			}
			os << "\n";
			break;
		case Box::Boxtype::CHECKERED:
			//create code to print checkered.

			for (int j = 0; j < boxPrint.getWidth(); j++) {
				if (i % 2 != 0) {
					if (j % 2 != 0) {
						os << "x";
					}
					else {
						os << " ";
					}
				}
				else {
					if (j % 2 != 0) {
						os << " ";
					}
					else {
						os << "x";
					}
				}
				
			}
			os << "\n";
			break;
		}
	}
	return os;
}