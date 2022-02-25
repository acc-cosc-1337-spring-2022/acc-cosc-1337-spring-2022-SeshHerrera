#include "decisions.h"
//write include statement for decisions header

using std::string;

/*using if statment*/
string get_letter_grade_using_if(int grade) {

	if (grade >= 90 && grade <= 100){
		return "A";
	}
	else if (grade >= 80 && grade <= 89){
		return "B";
	}
	else if (grade >= 70 && grade <= 79){
		return "C";
	}
	else if (grade >= 60 && grade <= 69){
		return "D";
	}
	else {
		return "F";
	}
}

/*using switch statment*/
string get_letter_grade_using_switch(int grade) {
	switch (grade)
	{
	
		case 90 ... 100:
			return "A";

		case 80 ... 89:
			return "B";

		case 70 ... 79:
			return "C";

		case 60 ... 69:
			return "D";
		
		case 0 ... 59:
			return "F";
		
		default:
			break;
	}
}