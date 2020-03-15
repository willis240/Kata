// kataTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "kata.hpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Add, passed the empty string")
{
	INFO("Add(\"\") == 0");
	REQUIRE(Add("") == 0);
}

TEST_CASE("Add, passed 2 nums in string")
{
	INFO("Add(\"3,2\") == 5");
	REQUIRE(Add("3,2") == 5);

	INFO("Add(\"37,82\") == 37 + 82");
	REQUIRE(Add("37,82") == (37 + 82));
}
