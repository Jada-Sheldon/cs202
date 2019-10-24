#include "money.hpp"

#include <iostream>
#include <cmath>

void Money::setCents(int cents) {
	_cents = cents;
}

int Money::getCents() const{
	return _cents;
}

bool Money::getNeg() const {
	return _neg;
}

Money::Money(): _cents(0), _neg(false)
{
}

Money::Money(int dollars, int cents):_cents(abs(dollars)*100 + cents), _neg(dollars < 0 || cents < 0)
{
}

Money::Money(double dollarCents): _cents(abs(dollarCents)*100+0.5), _neg(dollarCents <0)
{
}

Money& Money::operator+=(const Money& rhs)
{
	_cents += rhs.getCents();
	return *this;
}

Money& Money::operator-=(const Money& rhs)
{
	_cents -= rhs.getCents();
	return *this;
}

Money& Money::operator*=(const Money& rhs)
{
	double dollars = (1.0 / 100.0) * _cents;
	dollars *= (rhs._cents / 100.0);
	return *this;
}

Money& Money::operator/=(const Money& rhs)
{
	_cents /= rhs._cents;
	return *this;
}

Money operator+(const Money& lhs, const Money& rhs)
{
	Money temp{ lhs };
	temp += rhs;
	return temp;
}

Money operator-(const Money& lhs, const Money& rhs)
{
	Money temp{ lhs };
	temp -= rhs;
	return temp;
}

Money operator*(const Money& lhs, const Money& rhs)
{
	Money temp{ lhs };
	temp *= rhs;
	return temp;
}

Money operator/(const Money& lhs, const Money& rhs)
{
	Money temp{ lhs };
	temp /= rhs;
	return temp;
}

bool operator<(const Money& lhs, const Money& rhs)
{
	return lhs.getCents() < rhs.getCents();
}

bool operator>(const Money& lhs, const Money& rhs)
{
	return rhs < lhs;
}

bool operator<=(const Money& lhs, const Money& rhs)
{
	return !(rhs < lhs);
}

bool operator>=(const Money& lhs, const Money& rhs)
{
	return !(lhs < rhs);
}

bool operator==(const Money& lhs, const Money& rhs)
{
	return lhs.getCents() == rhs.getCents();
}

bool operator!=(const Money& lhs, const Money& rhs)
{
	return !(lhs == rhs);
}

std::ostream& operator<<(std::ostream& os, const Money& rhs)
{
	double dollar = rhs.getCents() / 100.00;
	if (rhs == 0) {
		os << "$0.00";
	}
	else if (!rhs.getNeg()) {
		os << "$" << dollar;
	}
	else {
		os << "-$" << dollar;
	}
	return os;
}


