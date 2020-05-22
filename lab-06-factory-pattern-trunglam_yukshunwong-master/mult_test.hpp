#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

#include "Mock.hpp"


TEST(MultTest, MultNonZeroInput) {
	Base* oper1 = new PositiveOpMock();
	Base* oper2 = new PositiveOpMock();
	Mult* test = new Mult(oper1, oper2);
	EXPECT_EQ(test->evaluate(), 49);
	EXPECT_EQ(test->stringify(), "7 * 7");
}

TEST(MultTest, MultZeroInputs) {
        Base* oper1 = new ZeroOpMock();
        Base* oper2 = new PositiveOpMock();
        Mult* test = new Mult(oper1, oper2);
        EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "0 * 7");
}

TEST(MultTest, MultNegativeInputs) {
        Base* oper1 = new PositiveOpMock();
        Base* oper2 = new NegativeOpMock();
        Mult* test = new Mult(oper1, oper2);
        EXPECT_EQ(test->evaluate(), -49);
	EXPECT_EQ(test->stringify(), "7 * -7");
}

TEST(MultTest, MultandAddChild) {
        Base* oper1 = new PositiveOpMock();
        Base* add = new AddMock();
        Mult* test = new Mult(oper1, add);
	EXPECT_EQ(test->evaluate(), 98);
        EXPECT_EQ(test->stringify(), "7 * 7 + 7");
}

TEST(MultTest, MultandSubChild) {
        Base* oper1 = new PositiveOpMock();
        Base* minus = new MinusMock();
        Mult* test = new Mult(oper1, minus);
	EXPECT_EQ(test->evaluate(), 0);
        EXPECT_EQ(test->stringify(), "7 * 7 - 7");
}

TEST(MultTest, MultandDivChild) {
        Base* oper1 = new PositiveOpMock();
        Base* div = new DivMock();
        Mult* test = new Mult(oper1, div);
	EXPECT_EQ(test->evaluate(), 7);
        EXPECT_EQ(test->stringify(), "7 * 7 / 7");
}

#endif //__MULT_TEST_HPP__
