#include "complex.hpp"
#include <iostream>

Complex::Complex(double real): _real(real), _imag(0){
}

Complex::Complex(double real, double image) : _real(real), _imag(image) {
}

double Complex::getReal() const{
	return _real;
}

double Complex::getImag() const{
	return _imag;
}

std::ostream & operator<<(std::ostream & os, const Complex & num) {
	os << num.getImag();
	return os;
}

Complex operator+=(const Complex& lhs, const Complex& rhs) {
	double temp = lhs.getReal();
	temp += rhs.getReal();
	return temp;
}

Complex operator+(const Complex & lhs, const Complex& rhs) {
	Complex temp{ lhs };
	temp += rhs;
	return temp;
}

