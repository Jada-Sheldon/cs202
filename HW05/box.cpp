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


void FilledBox::print(std::ostream& os) const
{
	for (int i = 0; i < getHeight(); i++) {
		for (int j = 0; j < getWidth(); j++) {
			os << "x";
		}
		os << "\n";
	}
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
	for (int i = 0; i < getHeight(); i++) {
		if (i == 0 || i == getHeight() - 1) {
			for (int j = 0; j < getWidth(); j++) {
				os << "x";
			}
		}
		else {
			for (int j = 0; j < getWidth(); j++) {
				if (j == 0 || j == getWidth() - 1) {
					os << "x";
				}
				else {
					os << " ";
				}
			}
		}
		os << "\n";
	}
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
	for (int i = 0; i < getHeight(); i++) {
		for (int j = 0; j < getWidth(); j++) {
			if (i % 2 != 0) {
				if (j % 2 != 0) {
					os << "x";
				}
				else {
					os << " ";
				}
			}
			else {
				if (j % 2 != 0) {
					os << " ";
				}
				else {
					os << "x";
				}
			}

		}
		os << "\n";
	}
}

std::string CheckeredBox::type() const
{
	return "Checkered";
}

CheckeredBox::CheckeredBox(int width, int height) : Box(width, height)
{
}
