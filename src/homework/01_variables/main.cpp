//write include statements
#include "variables.h"
#include <iostream>
//write namespace using statement for cout
using std::cout; using std::cin;


int main()
{
	int num, result1, result2;
	int num1 = 4;

	cout << "Enter a number to multiply with 5:  ";
	cin >> num;

	result1 = multiply_numbers(num);
	result2 = multiply_numbers(num1);

	cout << result1 << "\n";
	cout << result2 << "\n";

	return 0;
}
