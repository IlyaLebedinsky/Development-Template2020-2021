#include <iostream>
#include <map>
struct roman
{
	std::string value;
};
struct arabic
{
	int value;
};

class Convertor
{
private:
	roman R;
	arabic A;
public:
	roman ConvertToRoman(const arabic& arabic_num);
	arabic ConvertToArabic(const roman& roman_num);
	roman get_roman();
	arabic get_arabic();
	roman check(const roman& roman_num);
	void printAR();
	void printRA();
};
