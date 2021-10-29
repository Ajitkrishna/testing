#include "pch.h"
#include "gtest/gtest.h"
#include "area.h"

TEST(Area,Areaofrectangle1) //test for pass

{
  Area a1;
  float l = 2, b = 2;
  float area = l * b;
  EXPECT_EQ(area,a1.Areaofrect(l,b));
}
TEST(Area, Areaofrectangle2)

{
	Area a1;
	float l = 3.5, b = 4.6;
	float area = l * b;
	EXPECT_EQ(area, a1.Areaofrect(l, b));
}

TEST(Area, AreaofCircle1)

{
	Area a1;
	float radius=2.4;
	float area = (3.14*radius * radius);
	EXPECT_EQ(area, a1.Areaofcrc(radius));
	cout << "Area of circle is: " << area << "\n" << "Area of circle1 is: " << a1.Areaofcrc(radius);
}
TEST(Area, Areaofsquare1)

{
	Area a1;
	float side = 5;
	float area = side * side;
	EXPECT_EQ(area, a1.Areaofsqr(side));
	cout << "side is: " << side << "\n" << "Area of Square is: " << a1.Areaofsqr(side);
}

TEST(Area, Areaoftriangle1)

{
	Area a1;
	float base = 5;
	float height = 5;
	float area = (0.5*base*height);
	EXPECT_EQ(area, a1.Areaoftrl(base,height));
	cout <<"Area of Triangle is: " << a1.Areaoftrl(base, height);
}