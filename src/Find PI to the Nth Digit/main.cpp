#include <iostream>
#include <math.h>
#include <string>

//Enter a number and have the program generate PI up to that many decimal places. Keep a limit to how far the program will go.

int main(void)
{
	int digits;
	std::string pi = "3.141592653589793238462643383279502884197169399375105820974944592307816";
	std::cout << "Enter desired PI digit amount, with a limit of 69" << std::endl;
	std::cin >> digits;
	if (digits > 0 && digits < 70)
	{
		if(digits > 1) digits++;
		std::cout << pi.substr(0, digits);
	}
	return 0;
}