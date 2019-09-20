// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

string readFile(string fileName) {
	std::ifstream ifile("example.txt");
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

int getInteger(string userInput) {
	int numOfLines;
	while (true) {
		getline(cin, userInput);
		istringstream str(userInput);
		str >> numOfLines;
		if (!str) {
			cout << "input is not valid. please try again" << endl;
			str.clear();
			str.ignore('\n');
			continue;
		}
		else {
			break;
		}
	}
	return numOfLines;
}

int main()
{

	cout << "enter a number." << endl;
	string userInput;
	int lines = getInteger(userInput);


	std::ofstream fout("example.txt", std::ios::app);
	string Message;
	cout << "type a message You want to repeat" << endl;
	getline(cin, Message);
	for (int i = 0; i <= lines; i++){
		fout << Message << endl;
	}
	fout.close();


	cout << readFile("example.txt");

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
