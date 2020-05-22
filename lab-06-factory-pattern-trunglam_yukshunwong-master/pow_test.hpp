#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

#include "Mock.hpp"


TEST(PowTest, PositivePowerInputs) {
	Base* num = new PositiveOpMock();
	Base* pow = new PositiveOpMock();
	Pow* test = new Pow(num, pow);
	EXPECT_EQ(test->evaluate(), 823543);
	EXPECT_EQ(test->stringify(), "7 ** 7");
}

TEST(PowTest, PosIntToZeroPowerInputs) {
        Base* num = new PositiveOpMock();
        Base* pow = new ZeroOpMock();
        Pow* test = new Pow(num, pow);
        EXPECT_EQ(test->evaluate(), 1);
	EXPECT_EQ(test->stringify(), "7 ** 0");
}

TEST(PowTest, NegIntToPosPowerInput) {
        Base* num = new NegativeOpMock();
        Base* pow = new PositiveOpMock();
        Pow* test = new Pow(num, pow);
        EXPECT_EQ(test->evaluate(), -823543 );
	EXPECT_EQ(test->stringify(), "-7 ** 7");
}


TEST(PowTest, powWithDivMock) {
        Base* num = new PositiveOpMock();
        Base* div = new DivMock();
        Pow* test = new Pow(num, div);
	EXPECT_EQ(test->evaluate(), 7);
        EXPECT_EQ(test->stringify(), "7 ** 7 / 7");
}

TEST(PowTest, powWithAddMock) {
        Base* num = new PositiveOpMock();
        Base* add = new AddMock();
        Pow* test = new Pow(num, add);
	EXPECT_EQ(test->evaluate(), 678223072849);
        EXPECT_EQ(test->stringify(), "7 ** 7 + 7");
}

#endif //__POW_TEST_HPP__
