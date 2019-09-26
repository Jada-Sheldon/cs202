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

string Box::type(){

}

void Box::print(ostream & stream) const {

}