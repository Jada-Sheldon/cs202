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

void HollowBox::print(std::ostream& os) const
{
	//copy code over
}

std::string HollowBox::type() const
{
	return "Hollow";
}

void CheckeredBox::print(std::ostream& os) const
{
	//copy code over
}

std::string CheckeredBox::type() const
{
	return "Checkered";
}
