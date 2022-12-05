#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test one die roll")
{
	die die;

	die.roll();
	bool valid_roll = die.rolled_value() >= 1 && die.rolled_value() <= 6;

	REQUIRE(valid_roll);
}

TEST_CASE("Test 10 dice rolls")
{
	die die;

	for(int i = 0; i < 10; i++)
	{
		die.roll();
		bool valid_roll = die.rolled_value() >= 1 && die.rolled_value() <= 6;

		REQUIRE(valid_roll);
	}
}