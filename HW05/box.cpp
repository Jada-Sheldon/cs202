#include "box.hpp"

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

Box::Box(int width, int height) : _width{width}, _height{height}
{
}

std::ostream operator<<(std::ostream& os, const Box& b)
{
	b.print(os);
	return os;
}

//for filled box
void FilledBox::print(std::ostream& os) const
{
	//copy code over
}

std::string FilledBox::type() const
{
	return "Filled";
}

FilledBox::FilledBox(int width, int height) : Box(width, height)
{
}

void HollowBox::print(std::ostream& os) const
{
	//copy code over
}

std::string HollowBox::type() const
{
	return "Hollow";
}

HollowBox::HollowBox(int width, int height) : Box(width, height)
{
}

void CheckeredBox::print(std::ostream& os) const
{
	//copy code over
}

std::string CheckeredBox::type() const
{
	return "Checkered";
}

CheckeredBox::CheckeredBox(int width, int height) : Box(width, height)
{
}
