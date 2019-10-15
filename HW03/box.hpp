//Jada Sheldon

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
	//created function to see how many boxes seen
	static int howMany();
	int setWidth(int widthSize);
	int setHeight(int heightSize);
	int getWidth() const;
	int getHeight() const;
	string type() const;
	void print(ostream& os) const;
	Box();
	Box(int userWidth, int userHeight);
	//changed bool to enum
	Box(int userWidth, int userHeight, enum userType);
	~Box();

private:
	//declared int _howMany
	static int _howMany;
	//added enum type
	enum _type { HOLLOW, FILLED, CHECKERED };
	_type category;
	int _width;
	int _height;
};

#endif