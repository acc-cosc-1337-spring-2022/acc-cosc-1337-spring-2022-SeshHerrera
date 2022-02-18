#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
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



	/*string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade) * credit_hours;
	sum_credit_hours += credit_hours;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;

	cout << "Enter letter grade: ";
	cin >> letter_grade;
	cout << "Enter credit hours: ";
	cin >> credit_hours;
	sum_credit_points += get_grade_points(letter_grade)  * credit_hours;
	sum_credit_hours += credit_hours;


	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << "GPA: " << gpa;

	return 0;
	*/
}