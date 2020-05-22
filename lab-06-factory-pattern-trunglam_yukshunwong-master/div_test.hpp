#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

#include "Mock.hpp"


TEST(DivTest, DivNonZeroInputs) {
	Base* oper1 = new PositiveOpMock();
	Base* oper2 = new PositiveOpMock();
	Div* test = new Div(oper1, oper2);
	EXPECT_EQ(test->evaluate(), 1);
	EXPECT_EQ(test->stringify(), "7 / 7");
}

TEST(DivTest, DivZeroInput) {
        Base* oper1 = new ZeroOpMock();
        Base* oper2 = new PositiveOpMock();
        Div* test = new Div(oper1, oper2);
        EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "0 / 7");
}

TEST(DivTest, DivNegativeInput) {
        Base* oper1 = new PositiveOpMock();
        Base* oper2 = new NegativeOpMock();
        Div* test = new Div(oper1, oper2);
        EXPECT_EQ(test->evaluate(), -1);
	EXPECT_EQ(test->stringify(), "7 / -7");
}

TEST(DivTest, DivandAddChild) {
        Base* oper1 = new PositiveOpMock();
        Base* add = new AddMock();
        Div* test = new Div(oper1, add);
	EXPECT_EQ(test->evaluate(), .5);
        EXPECT_EQ(test->stringify(), "7 / 7 + 7");
}

TEST(DivTest, DivandSubChild) {
        Base* oper1 = new PositiveOpMock();
        Base* minus = new MinusMock();
        Div* test = new Div(minus, oper1);
	EXPECT_EQ(test->evaluate(), 0);
        EXPECT_EQ(test->stringify(), "7 - 7 / 7");
}

TEST(DivTest, DivandMultChild) {
        Base* oper1 = new PositiveOpMock();
        Base* div = new DivMock();
        Div* test = new Div(oper1, div);
	EXPECT_EQ(test->evaluate(), 7);
        EXPECT_EQ(test->stringify(), "7 / 7 / 7");
}

TEST(DivTest, DivisionByZero) {
	Base* oper1 = new PositiveOpMock();
	Base* zero = new ZeroOpMock();
	Div* test = new Div(oper1, zero);
	EXPECT_ANY_THROW(test->evaluate());
	EXPECT_ANY_THROW(test->stringify());	
}
#endif //__DIV_TEST_HPP__
