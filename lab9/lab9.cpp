// lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StaticExample.hpp"

int main()
{
	std::cout << StaticExample::getNum() << std::endl;
	StaticExample E1;
	std::cout << E1.getNum() << std::endl;
	std::cout << StaticExample::getNum() << std::endl;
}

