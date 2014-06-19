#include "Time.h"


Time Time::sum(const Time & t) const
{
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours + sum.mins/60;
	sum.mins %= 60;



	return sum;

}