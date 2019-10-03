#pragma once
#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex {
public:
	Complex(double real);
	Complex(double real, double image);

private:
	double _real;
	double _imag;
};

#endif // !COMPLEX_HPP
