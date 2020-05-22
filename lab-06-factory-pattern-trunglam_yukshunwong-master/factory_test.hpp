#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include "gtest/gtest.h"
#include "factory.hpp"

TEST(FactoryTest, FactoryWithDoubleDigits) {
  char* test_val[4];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"12";
  test_val[2] = (char*)"**";
  test_val[3] = (char*)"2";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 4);

	EXPECT_EQ(conversion->evaluate(), 144);
	EXPECT_EQ(conversion->stringify(), "12 ** 2");
}

TEST(FactoryTest, FactoryWithAddition) {
  char* test_val[4];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"8";
  test_val[2] = (char*)"+";
  test_val[3] = (char*)"2";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 4);

	EXPECT_EQ(conversion->evaluate(), 10);
	EXPECT_EQ(conversion->stringify(), "8 + 2");
}

TEST(FactoryTest, FactoryWithMultiplication) {
  char* test_val[4];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"8";
  test_val[2] = (char*)"*";
  test_val[3] = (char*)"2";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 4);

	EXPECT_EQ(conversion->evaluate(), 16);
	EXPECT_EQ(conversion->stringify(), "8 * 2");
}

TEST(FactoryTest, FactoryWithSubtraction) {
  char* test_val[4];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"8";
  test_val[2] = (char*)"-";
  test_val[3] = (char*)"2";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 4);

	EXPECT_EQ(conversion->evaluate(), 6);
	EXPECT_EQ(conversion->stringify(), "8 - 2");
}

TEST(FactoryTest, FactoryWithDivision) {
  char* test_val[4];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"8";
  test_val[2] = (char*)"/";
  test_val[3] = (char*)"2";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 4);

	EXPECT_EQ(conversion->evaluate(), 4);
	EXPECT_EQ(conversion->stringify(), "8 / 2");
}

TEST(FactoryTest, FactoryWithPow) {
  char* test_val[4];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"8";
  test_val[2] = (char*)"**";
  test_val[3] = (char*)"2";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 4);

	EXPECT_EQ(conversion->evaluate(), 64);
	EXPECT_EQ(conversion->stringify(), "8 ** 2");
}

TEST(FactoryTest, FactoryWithLargeTree) {
  char* test_val[6];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"8";
  test_val[2] = (char*)"+";
  test_val[3] = (char*)"2";
  test_val[4] = (char*)"+";
  test_val[5] = (char*)"2";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 6);

	EXPECT_EQ(conversion->evaluate(), 12);
	EXPECT_EQ(conversion->stringify(), "8 + 2 + 2");
}

TEST(FactoryTest, FactoryWithInvalidOperator) {
  char* test_val[4];
  test_val[0] = (char*)"./calculator";
  test_val[1] = (char*)"8";
  test_val[2] = (char*)"****";
  test_val[3] = (char*)"2";


  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 4);

  ASSERT_EQ(conversion, nullptr);
}

TEST(FactoryTest, FactoryWithEmptyInput) {
  char* test_val[1];
  test_val[0] = (char*)"./calculator";

  Factory* factory = new Factory();

  Base* conversion = factory->parse(test_val, 1);

  ASSERT_EQ(conversion, nullptr);
}

#endif
