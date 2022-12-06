#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test one die roll")
{
	Die die;

	die.roll();
	bool valid_roll = die.rolled_value() >= 1 && die.rolled_value() <= 6;

	REQUIRE(valid_roll);
}

TEST_CASE("Test 10 dice rolls")
{
	Die die;

	for(int i = 0; i < 10; i++)
	{
		die.roll();
		bool valid_roll = die.rolled_value() >= 1 && die.rolled_value() <= 6;

		REQUIRE(valid_roll);
	}
}

TEST_CASE( "Test two die rolls")
{
	Die die1, die2;
	Roll roll(die1, die2);
	
	roll.roll_die();
	bool valid_roll = roll.roll_value() >= 2 && roll.roll_value() <= 12;

	REQUIRE(valid_roll);
}

TEST_CASE("Test 10 dice rolls with two die")
{
	Die die1, die2;
	Roll roll(die1, die2);

	for(int i = 0; i < 10; i++)
	{
		roll.roll_die();
		bool valid_roll = roll.roll_value() >= 2 && roll.roll_value() <= 12;

		REQUIRE(valid_roll);
	}
}