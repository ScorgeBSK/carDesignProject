#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"
#include <sstream>

TEST(RandTest, EvaluateRandomValue) {
	Rand* test = new Rand();	
	EXPECT_EQ(test->evaluate(), test->value);	
}

TEST(RandTest, StringifyRandomValue) {
	Rand* test = new Rand();
	std::ostringstream strs;
	strs << test->value;
	std::string str = strs.str();

	EXPECT_EQ(test->stringify(), str);
}

TEST(RandTest, CheckLessThanOneHundred) {
	Rand* test = new Rand();
	EXPECT_LT(test->evaluate(),100);

}

#endif //__RAND_TEST_HPP__

