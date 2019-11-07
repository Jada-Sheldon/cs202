
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

template <typename Thing>

Thing twice(const Thing& x) {
	return x + x;
}

string twice(const char* x) {
	string y(x);
	return y + y;

}

int main()
{
	cout << twice(2) << endl;
	cout << twice(2.3) << endl;
	cout << twice(string("Hello")) << endl;
	cout << endl;
	const char* x = "world";
	cout << twice(x) << endl;
}

