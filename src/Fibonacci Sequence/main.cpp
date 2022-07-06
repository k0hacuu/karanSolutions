#include <iostream>
#include <math.h>
#include <string>

//Enter a number and have the program generate the Fibonacci sequence to that number or to the Nth number.

int main(void)
{
	int N;

	int num1 = 0, num2 = 1, num3;

	std::cout << "Enter desired amount of fibonacci numbers" << std::endl;
	std::cin >> N;
	for(int i = 0; i < N; i++){
		std::cout << std::to_string(num1) + ", ";
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}


	return 0;
}