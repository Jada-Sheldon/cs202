#include "files.hpp"
#include <iostream>
using std::istream;
using std::ostream;
using std::string;
#include <fstream>
using std::ofstream;
using std::ifstream;

int getIdFromFile(const string & fileName, istream & is, ostream & os) {
	ofstream ifile(fileName);
	while (true) {
		if (!ifile) {
			if (ifile.eof()) {
				return 0;
			}
			else {
				std::cout << "something went wrong" << std::endl;
				return -1;
			}
		}
		else {
			//read file
		}
	}
}