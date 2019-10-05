#include "files.hpp"
#include <iostream>
using std::istream;
using std::ostream;
using std::string;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <sstream>
using std::istringstream;

int getIdFromFile(const string & fileName, istream & is, ostream & os) {
	ofstream ifile(fileName);
	string line;
	getline(is, line);
	istringstream istring(line);
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
			int id;
			istring >> id;
			os << id << "\n";
			//read file
			
		}
	}
}

void numberChase(const string& fileName, ostream& os) {

}