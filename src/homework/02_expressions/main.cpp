//write include statements
#include <iostream>
#include "expressions.h"

//write namespace using statement for cout
using std::cin; using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount,total;

	cout << "how much was the meal? ";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout << "how much did you tip? ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "total: " << total;

	return 0;
}
