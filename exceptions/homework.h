#pragma once
#ifndef HOMEWORK_H
#define HOMEWORK_H

class Homework {
public:
	void setAmountOfHomework(int homeworkAmount);
	int getAmountOfHomework() const;
	Homework();
	Homework (const Homework & original);
	Homework(int amountOfHomework);
	~Homework();

private:
	int _amountOfHomework;
};

void Changes(Homework& day);

void notReallyChanged(Homework day);

void cannotChange(const Homework& day);

#endif