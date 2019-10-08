#pragma once
#ifndef STATICEXAMPLE_HPP
#define STATICEXAMPLE_HPP

class StaticExample {
public:
	static int getNum() {
		return num;
	}
	StaticExample() {
		num = 5;
	}
private:
	static int num;
};

#endif