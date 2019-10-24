#pragma once
#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <ostream>

class Complex {
public:
	Complex(double real);
	Complex(double real, double image);
	double getReal() const;
	double getImag() const;
private:
	double _real;
	double _imag;
};

std::ostream& operator<<(std::ostream&, const Complex&);

Complex operator+=(const Complex& lhs, const Complex& rhs);

Complex operator+(const Complex & lhs, const Complex& rhs);

#endif // !COMPLEX_HPP
