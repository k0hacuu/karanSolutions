#include <iostream>
#include <math.h>

//Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go.

int main(void)
{
	int digits;
	double pi = atan(1)*4;
	std::cout << "Enter desired PI digit amount, with a limit of 69" << std::endl;
	std::cin >> digits;
	if (digits > 0 && digits < 70)
	{
		std::cout << std::to_string(digits)
	}
	return 0;
}