#include "convertor.h"
#include <string>
int main() {
	Convertor test;
	arabic test_A;
	for (int i = 1; i <= 50; i++)
	{
		test_A.value = i;
		test.ConvertToRoman(test_A);
		test.printAR();
		test.ConvertToArabic(test.get_roman());
		test.printRA();
	}
	std::cout << "___________________" << std::endl;
	test_A.value = 1724;	
	test.ConvertToRoman(test_A);	
	test.printAR();
	roman number;
	number.value = "MMMCCCXXXVIII";
	test.ConvertToArabic(number); 
	test.printRA();
	roman check;
	std::cout << "6 = ";
	check.value = "IIIIII";
	check = test.check(check);
	std::cout << check.value;
	return 0;
}