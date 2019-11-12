#pragma once
#ifndef BOX_HPP
#define BOX_HPP

#include <sstream>
#include <memory>

class Box {
public:
	virtual void print(std::ostream& os) const = 0;
	virtual std::string type() const = 0;
	int setWidth(int widthSize);
	int setHeight(int heightSize);
	int getWidth() const;
	int getHeight() const;
	Box(int width, int height);
private:
	int _width;
	int _height;
};

std::ostream& operator<<(std::ostream& os, const Box & b);

class FilledBox : public Box {
public:
	void print(std::ostream & os) const override;
	std::string type() const override;
	FilledBox();
	FilledBox(int width, int height);
private:

};

class HollowBox : public Box {
public:
	void print(std::ostream& os) const override;
	std::string type() const override;
	HollowBox();
	HollowBox(int width, int height);
private:

};

class CheckeredBox : public Box {
public:
	void print(std::ostream& os) const override;
	std::string type() const override;
	CheckeredBox();
	CheckeredBox(int width, int height);
private:

};

std::unique_ptr<Box> boxFactory(char c, int w, int h);

#endif // BOX_HPP