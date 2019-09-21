// Lab4Fixed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <sstream>
using std::istringstream;
using std::ostringstream;
using std::string;
#include <fstream>

string fileRead(string fileName) {
	std::ifstream ifile(fileName);
	string fileInput;
	string fileline;
	while (true) {
		getline(ifile, fileline);
		if (!ifile) {
			if (ifile.eof()) {
				break;
			}
			else {
				cout << "something went wrong." << endl;
			}
		}
		else {
			fileInput += fileline + "\n";
		}
	}
	return fileInput;
}




int main()
{
	std::ofstream fout("example.txt", std::ios::app);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file