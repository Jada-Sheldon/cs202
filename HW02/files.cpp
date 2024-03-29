//Jada Sheldon

#include "files.hpp"
#include <iostream>
using std::cout;
using std::endl;
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
	string line;
	while (true) {
		ifile.open(fileName);
		string name;
		getline(is, name);
		if (!is) {
			if (is.eof()) {
				return 0;
			}
			else {
				cout << "something went wrong" << endl;
				return -1;
			}
		}
		else {
			while (true) {
				if (!ifile) {
					if (ifile.eof()) {
						os << "error\n";
						break;
					}
					else {
						std::cout << "something went wrong" << std::endl;
						return -1;
					}
				}
				else {
					getline(ifile, line);
					istringstream istring(line);
					string nameId;
					int id;
					istring >> nameId >> id;
					if (name == nameId) {
						os << id << "\n";
						break;
					}
				}
			}
			ifile.close();
		}
	}
}

void numberChase(const string& fileName, ostream& os) {
	int rounds = 0;
	int oldspot;
	while (true) {
		ifstream ofile;
		ofile.open(fileName, std::ios::binary);
		if (!ofile) {
			cout << "wrong" << endl;
		}
		int spot;
		for (int i = 0; i <= rounds; i++) {
			ofile.read(reinterpret_cast<char*>(&spot), sizeof(int));
		}
		rounds = spot;
		oldspot = spot;
		os << oldspot << "\n";
		if (oldspot < 0) {
			break;
		}
		ofile.close();
	}
}