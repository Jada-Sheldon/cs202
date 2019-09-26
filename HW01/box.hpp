// Jada Sheldon

#pragma once
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include <sstream>
using std::ostream;
#include <string>
using std::string;

class Box {
public:
	int setWidth(int widthSize);
	int setHeight(int heightSize);
	int getWidth() const;
	int getHeight() const;
	string type();
	void print(ostream & stream) const;
	Box();
	Box(int userWidth, int userHeight);
	Box(int userWidth, int userHeight, bool userType);

private:
	bool full;
	int width;
	int height;
};

#endif