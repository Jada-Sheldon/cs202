// Jada Sheldon

#pragma once
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include <sstream>
using std::ostream;

class Box {
public:
	void setWidth();
	void setHeight();
	void getWidth();
	void getHeight();
	string filled();
	void print(ostream&);

private:
	bool full;

};

#endif