#include "Time.h"


Time Time::sum(const Time & t) const
{
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours + sum.mins/60;
	sum.mins %= 60;
		return sum;
}
Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours + sum.mins/60;
	sum.mins %= 60;
	return sum;
}

Time Time::operator*(double n) const
{
	Time result;
	int totalmins = hours*n*60 + mins*n;
	result.hours = totalmins/60;
	result.mins = totalmins%60;
	return result;
}

std::ostream & operator<<(std::ostream & os, const Time t)
{
	os << t.hours << " hours, " << t.mins<< " mins";
	return os;
}
