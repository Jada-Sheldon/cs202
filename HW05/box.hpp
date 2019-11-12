#pragma once
#ifndef BOX_HPP
#define BOX_HPP

#include <string>

class Box {
public:
	virtual void print() const = 0;
	virtual std::string type() const = 0;
	int setWidth(int widthSize);
	int setHeight(int heightSize);
	int getWidth() const;
	int getHeight() const;
private:
	int _width;
	int _height;
};

class FilledBox : public Box {
public:

private:

};

class HollowBox : public Box {
public:

private:

};

class CheckeredBox : public Box {
public:

private:

};

#endif // BOX_HPP