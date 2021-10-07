#include "Solution.h"

int Solution::addDigits(int num)
{
	while (true) {
		if(num < 10)
			return num;
		num=(num/10)+(num%10);
	}
	return num;
}

int Solution::inputData()
{
	std::cout << "input : ";
	std::cin >> input_num;
	if (input_num < 0) {
		std::cout << "error"<<std::endl;
		std::system("cls");
		inputData();
	}
	return input_num;
}

void Solution::outputData(int num)
{
	std::cout << "output : " << num<<std::endl;
	std::system("pause");
}


