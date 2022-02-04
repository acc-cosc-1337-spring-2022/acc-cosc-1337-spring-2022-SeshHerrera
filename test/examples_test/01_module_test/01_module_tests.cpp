#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "numbers.h"
#include "vars.h"
#include "input.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("test echo variable", "test echoes"){
	REQUIRE(5 == echo_variable(5));
	REQUIRE(6 == echo_variable(6));
	REQUIRE(7 == echo_variable(7));

}

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("test get total function"){
	REQUIRE(10 == get_total(2, 5.00));
	REQUIRE(55 == get_total(10, 5.5));
}


/*test case add_to_double_1 with 1 as parameter*/
TEST_CASE("test get total function"){
	REQUIRE(1.9 == add_to_double_1(1));
}

/*test case add_to_double_2 with 0 as parameter*/


/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

