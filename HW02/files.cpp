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
	ifstream ifile;
	ifile.open(fileName);
	string line;
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
			getline(ifile, line);
			istringstream istring(line);
			int id;
			istring >> id;
			if (!istring) {
				os << "error\n";
				istring.clear();
				istring.ignore('\n');
				continue;
			}
			os << id << "\n";
		}
	}
}

void numberChase(const string& fileName, ostream& os) {
	ifstream ofile(fileName, std::ios::binary);

}