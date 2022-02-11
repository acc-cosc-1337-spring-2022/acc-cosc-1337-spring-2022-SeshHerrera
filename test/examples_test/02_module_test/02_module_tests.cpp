#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include  "../src/homework/02_expressions/expressions.h" 

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*Test case operator precedence 1 with function argument values 12, 6 and 3 returns 14*/
TEST_CASE("test operator precedence 1")
{
	REQUIRE(14 == operator_precedence_1(12, 6, 3));
}
/*Test case operator precedence 2 with function argument values 12, 6 and 3 returns 6*/
TEST_CASE("test operator precedence 2")
{
	REQUIRE(14 == operator_precedence_2(12, 6, 3));
}
/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case convert_to_double to show that multiplying int and double returns a double*/
TEST_CASE("Test covert to double returns double")
{
	REQUIRE( == convert_to_double(1, 5.25));
}
/*Test case convert double to int to show that a double converted to int truncates 
the decimal portion*/

/*Test case static cast double int to show that a double casted to int truncates
decimal portion*/

/*Test int overflow to show adding 1 to 2147483647 returns -2147483648*/

/*Test get radius of a circle with 10 to show that it returns 314.159*/

/*Test int data size */

/*Test multi assign addition*/

