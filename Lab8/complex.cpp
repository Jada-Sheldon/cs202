#include "complex.hpp"

Complex::Complex(double real): _real(real), _imag(0){
}

Complex::Complex(double real, double image) : _real(real), _imag(image) {
}