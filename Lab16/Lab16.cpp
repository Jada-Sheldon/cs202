
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::remove;

int main()
{
	vector<int> algorithmTest{2, 1, 100, 321, 253, 21, 57, 84, 9, 5, 2};
	
	for (int i : algorithmTest) {
		cout << i << " ";
	}

	cout << endl;
	cout << endl;

	remove(algorithmTest.begin(), algorithmTest.end(), 100);
	algorithmTest.pop_back();

	for (int i : algorithmTest) {
		cout << i << " ";
	}

	cout << endl; 
	cout << endl;

	std::replace(algorithmTest.begin(), algorithmTest.end(), 321, 300 );

	for (int i : algorithmTest) {
		cout << i << " ";
	}
}
