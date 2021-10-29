#include<iostream>
#include<sstream>
using namespace std;
using std::ostream;
using std::istream;

class Date
{
	friend ostream &operator<<(ostream&, const Date&);
	friend istream& operator<<(istream&, const Date&);
public:
	Date(int m = 1, int d = 1, int y = 1900);
	void setDate(int, int, int);//set month,day,year
	Date& operator++();
	Date& operator--();
	Date& operator+=(int&);
	Date& operator-=(int&);
	bool leapyear(int)const;
	bool endOfmonth(int)const;

	int day;
	int month;
	int year;
private:
	static int days[];
	void helpIncrement();
	void helpDecrement();
};