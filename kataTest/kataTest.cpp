// kataTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "kata.hpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Add")
{
	REQUIRE(Add() == 0)
}

