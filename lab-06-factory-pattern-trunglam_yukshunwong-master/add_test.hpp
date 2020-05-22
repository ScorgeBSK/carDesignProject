#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "add.hpp"
#include "Mock.hpp"
#include "gtest/gtest.h"

TEST(AddTest, AddZero){
	Base* num1 = new PositiveOpMock();
	Base* num2 = new ZeroOpMock();
	Add* addTest = new Add(num1, num2);
	EXPECT_EQ(addTest->evaluate(),7);
	EXPECT_EQ(addTest->stringify(), "7 + 0");
}
TEST(AddTest, AddBothPosInputs) {
        Base* num1 = new PositiveOpMock();
        Base* num2 = new PositiveOpMock();
        Add* addTest = new Add(num1, num2);
        EXPECT_EQ(addTest->evaluate(), 14);
	EXPECT_EQ(addTest->stringify(), "7 + 7");
}
TEST(AddTest, AddPosAndNegInputs) {
        Base* num1 = new NegativeOpMock();
        Base* num2 = new PositiveOpMock();
        Add* addTest = new Add(num1, num2);
        EXPECT_EQ(addTest->evaluate(), 0);
	EXPECT_EQ(addTest->stringify(), "-7 + 7");
}
TEST(AddTest, AddBothNegInputs) {
	Base* num1 = new NegativeOpMock();
	Base* num2 = new NegativeOpMock();
	Add* addTest = new Add(num1, num2);
	EXPECT_EQ(addTest->evaluate(), -14);
	EXPECT_EQ(addTest->stringify(), "-7 + -7");
}
TEST(AddTest, AddWithMultMock) {
        Base* num1 = new PositiveOpMock();
        Base* mult = new MultMock();
        Add* addTest = new Add(num1, mult);
        EXPECT_EQ(addTest->evaluate(), 56);
	EXPECT_EQ(addTest->stringify(), "7 + 7 * 7");
}
TEST(AddTest, AddWithDivMock) {
        Base* num1 = new PositiveOpMock();
        Base* div = new DivMock();
        Add* addTest = new Add(num1, div);
        EXPECT_EQ(addTest->evaluate(), 8);
	EXPECT_EQ(addTest->stringify(), "7 + 7 / 7");
}


#endif //__ADD_TEST_HPP__
