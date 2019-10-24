#include "homework.h"
#include <iostream>
using std::cout;
using std::endl;


void Homework::setAmountOfHomework(int amountOfHomework) {
	 _amountOfHomework = amountOfHomework;
}

int Homework::getAmountOfHomework() const {
	return _amountOfHomework;
}

Homework::Homework():_amountOfHomework(1){
	cout << "created a default Homework, Amount of assignments is " << _amountOfHomework << endl;
}


Homework::Homework(const Homework & original): _amountOfHomework(original._amountOfHomework) {
	cout << "copied a Homework, Amount of assignments is " << _amountOfHomework << endl;
}

Homework::Homework( int amountOfHomework) :  _amountOfHomework{ amountOfHomework } {
	cout << "Created a Homework called Wednesday, Amount of assignments is " << _amountOfHomework << endl;
}

Homework::~Homework() {
	cout << "destroyed a Homework" << endl;
}

void Changes(Homework & day) {
	day.setAmountOfHomework(0);
	cout << "Wednesday passed by reference" << endl;
}

void notReallyChanged(Homework day) {
	day.setAmountOfHomework(5);
	cout << "passed by value" << endl;
}

void cannotChange(const Homework& day) {
	cout << day.getAmountOfHomework() << " cannot be changed" << endl;
}