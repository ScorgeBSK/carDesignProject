#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
    EXPECT_EQ(test->stringify(), "8");
}

TEST(OpTest, EvaluateOpZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "0");
}

TEST(OpTest, OpNegative) {
    Op* test = new Op(-1);
    EXPECT_EQ(test->evaluate(), -1);
    EXPECT_EQ(test->stringify(), "-1");
}

TEST(OpTest, OpDouble) {
    Op* test = new Op(8.5);
    EXPECT_EQ(test->evaluate(), 8.5);
    EXPECT_EQ(test->stringify(), "8.5");
}

TEST(OpTest, BlankInput) {
    Op* test = new Op();
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "0");
}


#endif //__OP_TEST_HPP__
