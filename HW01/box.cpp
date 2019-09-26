// Jada Sheldon

#include "box.hpp"
#include <iostream>
#include <string>
using std::string;

int Box::setWidth(int widthSize) {
	width = widthSize;
	return width;
}

int Box::setHeight(int heightSize) {
	height = heightSize;
	return height;
}

int Box::getWidth() const {
	return width;
}

int Box::getHeight() const {
	return height;
}

string Box::type() const {
	if (full == true) {
		return "Filled";
	}
	else {
		return "Hollow";
	}
}

void Box::print(ostream & stream) const {

}

Box::Box() : width(1), height(1), full(true) {

}

Box::Box(int userWidth, int userHeight) : full(true) {

}

Box::Box(int userWidth, int userHeight, bool userType) {

}