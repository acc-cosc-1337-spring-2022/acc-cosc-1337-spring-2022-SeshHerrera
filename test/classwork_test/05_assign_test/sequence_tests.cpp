#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../src/classwork/05_assign/sequence.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("testing gc content"){

	REQUIRE(get_gc_content("AGCTATAG") == (.375));
	REQUIRE(get_gc_content("CGCTATAG") == (.50));
}


TEST_CASE("test reverse string"){

	REQUIRE(get_reverse_string("AGCTATAG") == ("GATATCGA"));
	REQUIRE(get_reverse_string("CGCTATAG") == ("GATATCGC"));
}


TEST_CASE("test dna-complement"){

	REQUIRE(get_dna_complement("AAAACCCGGT") == ("ACCGGGTTTT"));
	REQUIRE(get_dna_complement("CCCGGAAAAT") == ("ATTTTCCGGG"));
}
