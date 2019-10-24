#pragma once
#ifndef MONEY_HPP
#define MONEY_HPP

#include <sstream>

class Money {
public:
	void setCents(int cents);
	int getCents() const;
	Money();
	Money(int dollars, int cents);
	Money(double dollerCents);
	Money& operator+=(const Money& rhs);
	Money& operator-=(const Money& rhs);
	Money& operator*=(const Money& rhs);
	Money& operator/=(const Money& rhs);
private:
	int _cents;
};

Money operator+(const Money& lhs, const Money& rhs);
Money operator-(const Money& lhs, const Money& rhs);
Money operator*(const Money& lhs, const Money& rhs);
Money operator/(const Money& lhs, const Money& rhs);
bool operator<(const Money& lhs, const Money& rhs);
bool operator>(const Money& lhs, const Money& rhs);
bool operator<=(const Money& lhs, const Money& rhs);
bool operator>=(const Money& lhs, const Money& rhs);
bool operator==(const Money& lhs, const Money& rhs);
bool operator!=(const Money& lhs, const Money& rhs);

std::ostream& operator<< (std::ostream & os, const Money& rhs);

#endif