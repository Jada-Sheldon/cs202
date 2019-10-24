#include "money.hpp"

void Money::setCents(int cents) {
	_cents = cents;
}

int Money::getCents() const{
	return _cents;
}

Money::Money(): _cents(0)
{
}

Money::Money(int dollars, int cents):_cents(dollars*100 + cents)
{
}

Money::Money(double dollerCents): _cents(dollerCents*100+0.5)
{
}

Money& Money::operator+=(const Money& rhs)
{
	_cents += rhs.getCents();
}

Money operator+(const Money& lhs, const Money& rhs)
{
	Money temp{ lhs };
	temp += rhs;
	return temp;
}


