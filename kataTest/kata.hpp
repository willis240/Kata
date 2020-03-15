//kata.hpp

#ifndef KATA_HPP
#define KATA_HPP

#include<iostream>
#include<string>
#include<sstream>

int Add(std::string nums)
{
	if (nums == "")
		return 0;
	std::string firstNum = "";
	std::string secondNum = "";
	bool commaCheck = false;
	for (auto i : nums)
	{
		if(!commaCheck)
			firstNum += i;
		if (commaCheck)
			secondNum += i;
		if (i == ',')
			commaCheck = true;
	}
	std::istringstream firstConvert(firstNum);
	int firstInt = 0;
	firstConvert >> firstInt;
	std::istringstream secondConvert(secondNum);
	int secondInt = 0;
	secondConvert >> secondInt;
	return (firstInt + secondInt);
}

#endif