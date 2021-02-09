#include "convertor.h"

#include <gtest.h>


TEST(test_lib, test_1)
{
	Convertor c;
	arabic ar;
	ar.value = 1;
	c.ConvertToRoman(ar);
	EXPECT_TRUE("I", c.get_roman().value);
}

TEST(test_lib, test_10)
{
	Convertor c;
	arabic ar;
	ar.value = 10;
	c.ConvertToRoman(ar);
	EXPECT_TRUE("X", c.get_roman().value);
}

TEST(test_lib, test_5)
{
	Convertor c;
	arabic ar;
	ar.value = 5;
	c.ConvertToRoman(ar);
	EXPECT_TRUE("V", c.get_roman().value);
}

TEST(test_lib, test_7)
{
	Convertor c;
	arabic ar;
	ar.value = 7;
	c.ConvertToRoman(ar);
	EXPECT_TRUE("XII", c.get_roman().value);
}

TEST(test_lib, test_75)
{
	Convertor c;
	arabic ar;
	ar.value = 75;
	c.ConvertToRoman(ar);
	EXPECT_TRUE("LLV", c.get_roman().value);
}
TEST(test_lib, test_I)
{
	Convertor c;
	roman r;
	r.value = "I";
	c.ConvertToArabic(r);
	EXPECT_TRUE(1, c.get_arabic().value);
}
TEST(test_lib, test_VIII)
{
	Convertor c;
	roman r;
	r.value = "VIII";
	c.ConvertToArabic(r);
	EXPECT_TRUE(8, c.get_arabic().value);
}
TEST(test_lib, test_III)
{
	Convertor c;
	roman r;
	r.value = "III";
	c.ConvertToArabic(r);
	EXPECT_TRUE(3, c.get_arabic().value);
}
TEST(test_lib, test_X)
{
	Convertor c;
	roman r;
	r.value = "X";
	c.ConvertToArabic(r);
	EXPECT_TRUE(10, c.get_arabic().value);
}
TEST(test_lib, test_XL)
{
	Convertor c;
	roman r;
	r.value = "XL";
	c.ConvertToArabic(r);
	EXPECT_TRUE(40, c.get_arabic().value);
}
TEST(test_lib, test_wrong_number1)
{
	Convertor c;
	roman r;
	r.value = "IIIIII";
	r = c.check(r);
	EXPECT_TRUE("VI", r.value);
}
TEST(test_lib, test_wrong_number2)
{
	Convertor c;
	roman r;
	r.value = "XXXXXXX";
	r = c.check(r);
	EXPECT_TRUE("LXX", r.value);
}
TEST(test_lib, test_number_is_correct)
{
	Convertor c;
	roman r;
	r.value = "XIII";
	r = c.check(r);
	EXPECT_TRUE("XIII", r.value);
}
