//Jada Sheldon

#pragma once
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include <sstream>
using std::ostream;
#include <string>
using std::string;

/*
In order to add a new type of box you must change the << operator so it can print the new type
also you got to add the new type to Boxtype
also the type() function needs to have the new Boxtype added
*/


class Box {
	friend std::ostream& operator<<(std::ostream& os, const Box& boxPrint);
public:
	enum Boxtype { HOLLOW, FILLED, CHECKERED };
	//created function to see how many boxes seen
	static int howMany();
	int setWidth(int widthSize);
	int setHeight(int heightSize);
	int getWidth() const;
	int getHeight() const;
	Boxtype getType() const;
	string type() const;
	Box();
	Box(const Box& original);
	Box(int userWidth, int userHeight);
	//changed bool to enum
	Box(int userWidth, int userHeight, Boxtype userType); //figure out sometime
	~Box();

private:
	//declared int _howMany
	static int _howMany;
	//added enum type
	Boxtype category;
	int _width;
	int _height;
};

std::ostream& operator<<(std::ostream& os, const Box& boxPrint);


#endif