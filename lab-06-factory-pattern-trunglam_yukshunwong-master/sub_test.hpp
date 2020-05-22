#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "sub.hpp"
#include "gtest/gtest.h"
#include "Mock.hpp"


TEST(SubTest, PosSubInputs) {
	Base* num1 = new PositiveOpMock();
	Base* num2 = new PositiveOpMock();
	Sub* test = new Sub(num1, num2);
	EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "7 - 7");
}

TEST(SubTest, PosSubZeroInput) {
        Base* num1 = new PositiveOpMock();
        Base* num2 = new ZeroOpMock();
        Sub* test = new Sub(num1, num2);
        EXPECT_EQ(test->evaluate(), 7);
	EXPECT_EQ(test->stringify(), "7 - 0");
}


TEST(SubTest, PosSubNegInput) {
        Base* num1 = new PositiveOpMock();
        Base* num2 = new NegativeOpMock();
        Sub* test = new Sub(num1, num2);
        EXPECT_EQ(test->evaluate(), 14);
	EXPECT_EQ(test->stringify(), "7 - -7");
}

TEST(SubTest, SubWithAdd) {
        Base* num1 = new NegativeOpMock();
        Base* num2 = new NegativeOpMock();
        Sub* test = new Sub(num1, num2);
	EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "-7 - -7");
}
TEST(SubTest, SubWithDiv) {
        Base* num = new PositiveOpMock();
        Base* div = new DivMock();
        Sub* test = new Sub(num, div);
	EXPECT_EQ(test->evaluate(), 6);
        EXPECT_EQ(test->stringify(), "7 - 7 / 7");
}

TEST(SubTest, SubWithMult) {
        Base* num = new PositiveOpMock();
        Base* mult = new MultMock();
        Sub* test = new Sub(num, mult);
	EXPECT_EQ(test->evaluate(), -42);
        EXPECT_EQ(test->stringify(), "7 - 7 * 7");
}

#endif //__SUB_TEST_HPP__
