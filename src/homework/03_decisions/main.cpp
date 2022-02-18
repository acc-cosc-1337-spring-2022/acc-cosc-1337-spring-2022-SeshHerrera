#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"


int main() 
{
	int userChoise, grade;
	string letter;
	
	cout << "        MAIN MENU           \n" <<
			"1-Letter grade using if     \n" <<
			"2-Letter grade using switch \n" <<
			"3-Exit                      \n"
			"\n";

	cin >> userChoise;
	cout << "\n";


	switch (userChoise)
	{
	case 1:
		cout << "Enter your grade score: ";
		cin >> grade;

		letter = get_letter_grade_using_if(grade);
		cout << "your grade is: " << letter;
		break;

	case 2:
		cout << "Enter your grade score: ";
		cin >> grade;

		letter = get_letter_grade_using_switch(grade);
		cout << "your grade is: " << letter;
		break;

	case 3:
		break;

	default:
		cout << "The number you enter is out of range \n";
		break;
	}
	return 0;
}