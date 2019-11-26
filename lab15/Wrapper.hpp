#pragma once
#ifndef WRAPPER_HPP
#define WRAPPER_HPP


#include <iostream>

template <typename T>
class Wrapper{
	template <typename U>
	friend std::ostream& operator<< (std::ostream& os, const Wrapper<U> & w);
public:
	Wrapper(const T & thePrinted);
private:
	T _thePrinted;
};


template<typename T>
Wrapper<T>::Wrapper(const T& thePrinted): _thePrinted(thePrinted)
{
}

template <typename U>
std::ostream& operator<< (std::ostream& os, const Wrapper<U>& w) {
	os << w._thePrinted;
	return os;
}




#endif // !WRAPPER_HPP

