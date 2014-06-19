#ifndef _TIME_H_
#define _TIME_H_
#include <iostream>

class Time
{
	private:
		int hours;
		int mins;
	public:
		Time()
		{ hours = mins = 0;}
		Time(int h, int m)
		{hours = h; mins = m;}
		void show() const
		{std::cout << hours << " hours, " << mins<< " mins";}
		
		Time sum(const Time & t) const;
		
		Time operator+(const Time & t) const;

		Time operator*(double n) const;
};


#endif
