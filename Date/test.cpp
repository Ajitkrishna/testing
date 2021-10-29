#include "pch.h"
#include "date.h"
#include "gtest/gtest.h"
#include<iostream>

TEST(TestDate, check1)
{
	int a = 1;
	int b = 1;
	int c = 2000;
	Date d1(a,b,c);
	cout << "date is :";
	cout << d1;
	++d1;
	cout << "new date is :" << d1 << "\n";
	Date d2(2,1,2000);

	ASSERT_EQ(d1.day, d2.day);
	ASSERT_EQ(d1.month, d2.month);
	ASSERT_EQ(d1.year, d2.year);
 
}
TEST(TestDate, check2)
{
	int a = 1;
	int b = 1;
	int c = 2000;
	Date d1(a, b, c);
	cout << "date is :";
	cout << d1;
	--d1;
	cout << "new date is :" << d1 << "\n";
	Date d2(31,12,1999);
	
	ASSERT_EQ(d1.day, d2.day);
	ASSERT_EQ(d1.month, d2.month);
	ASSERT_EQ(d1.year, d2.year);

}



TEST(TestDate, check3)
{
	int a = 5;
	Date d1(6,1,2000);
	Date d2(1, 1, 2000);
    cout<<(d1.operator-=(a));
	ASSERT_EQ(d1.day, d2.day);
	ASSERT_EQ(d1.month, d2.month);
	ASSERT_EQ(d1.year, d2.year);

}
TEST(TestDate, check4)
{
	int a = 5;
	Date d1(1, 1, 2000);
	Date d2(6, 1, 2000);
	cout<<(d1.operator+=(a));

	ASSERT_EQ(d1.day, d2.day);
	ASSERT_EQ(d1.month, d2.month);
	ASSERT_EQ(d1.year, d2.year);

}