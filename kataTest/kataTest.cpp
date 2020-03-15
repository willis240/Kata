// kataTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "kata.hpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Add()")
{
	INFO("Add("") == 0");
	REQUIRE(Add("") == 0);
}

