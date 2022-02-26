#include <iostream>
#include "dna.h"
#include "string"


//write include statements

//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int userChoice;
	char finalAnswer;
	
	
	do
	{
		do
		{
			cout << "1-Factorial\n"
				 << "2-Greatest Common Divisor\n"
				 << "3-Exit\n";
			cin >> userChoice;
			cout << "\n";

			if (userChoice == 1)
			{
				int a;
				cout << "pick a number to factorial. ";
				cin >> a;
				int sum = factorial(a);
				
				cout << sum << "\n" << "\n";
			}

			else if (userChoice == 2)
			{
				int a, b;
				cout << "pick two numbers to find the greatest common factor. ";
				cin >> a >> b;
				int total = gcd(a, b);

				cout << total << "\n" << "\n";
			}
			
			


		} while (userChoice != 3);

		cout << "are you sure you want to exit? (y / n) ";
		cin >> finalAnswer;
	
	} while (finalAnswer != 'y');
	
	

	return 0;
}