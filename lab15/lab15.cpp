// lab15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Wrapper.hpp"
#include <string>

int main()
{

	Wrapper<int> w{ 2 };
	Wrapper<std::string>  s{ "Hello world!" };

	std::cout << w << " " << s << std::endl;
}


