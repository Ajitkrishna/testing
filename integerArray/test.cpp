#include "pch.h"
#include "gtest/gtest.h"
#include "m.h"
#include <iostream>

TEST(Arraytest,checklength) 
{
	Array integers1(3);
	int a = integers1.getSize();
    EXPECT_EQ(3, a);
    EXPECT_TRUE(true);
}

TEST(Arraytest, check2)
{
	Array integers1(3);
	Array integers2(3);
	std::cout << "enter array";
	std::cin >> integers1 >> integers2;
	ASSERT_EQ(integers1, integers2);
}

TEST(Arraytest, check3)
{
	Array integers1(4);
	Array integers2(4);
	std::cout << "enter array";
	std::cin >> integers1 >> integers2;
	ASSERT_EQ(integers1, integers2);
}