#include "expressions.h"
double tax_rate = 0.0675;

//example
double get_sales_tax_amount(double meal_amount){
	
	return tax_rate * meal_amount;
}
double get_tip_amount(double meal_amount, double tip_rate){
	return meal_amount * tip_rate;
}
//write code for multiply_numbers function here
//function returns product of num1 and num2




