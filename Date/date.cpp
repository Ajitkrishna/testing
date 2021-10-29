#include "pch.h"
#include "date.h"

int Date::days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

Date::Date(int d, int m, int y)
{
	setDate(d, m, y);
}

void Date::setDate(int dd, int mm, int yy)
{
	month = (mm >= 1 && mm <= 12) ? mm : 1;
	year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

	if (month == 2 && leapyear(year))
		day = (dd >= 1 && dd <= 29) ? dd : 1;
	else
		day = (dd >= 1 && dd <= days[month]) ? dd : 1;
}

Date& Date::operator++()
{
	helpIncrement();
	return *this;
}

Date& Date::operator--()
{
	helpDecrement();
	return *this;
}

Date& Date::operator+=(int& additionalDays)
{
	for (int i = 0; i < additionalDays; i++)
		helpIncrement();
	return *this;

}

Date& Date::operator-=(int& additionalDays)
{
	for (int i = 0; i < additionalDays; i++)
		helpDecrement();
	return *this;

}

bool Date::leapyear(int testYear) const
{
	if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0))
		return true;
	else
		return false;
}

bool Date::endOfmonth(int testday) const
{
	if (month == 2 && leapyear(year))
		return testday == 29;
	else
		return testday == days[month];
}

void Date::helpIncrement()
{
	if (!endOfmonth(day))
		day++;
	else
		if (month < 12)
		{
			month++;
			day = 1;
		}
}

void Date::helpDecrement()
{
	if (day == 1)
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			day = 31;
			month--;
		}
		else if (month == 3)
		{
			if (leapyear(year))
			{
				day = 29;
			}
			else {
				day = 28;
			}
			month--;
		}
		else if (month == 1)
		{
			day = 31;
			month = 12;
			year--;
		}
		else if (month == 2)
		{
			day = 31;
			month--;
		}
		else
		{
			day = 30;
			month--;
		}
	}
 else
   {
    day--;
   }
}

ostream& operator<<(ostream& output, const Date& d)
{
	output << d.day << " " << d.month << " " << d.year << " ";
	
	return output;
}