#include <gtest/gtest.h>
#include "timesThree.cpp"

TEST(testTimesThree, integerTests)
{
  EXPECT_EQ(0, timesThree(0));
  EXPECT_EQ(36, timesThree(12));
}

TEST(testTimesThree, doubleTests)
{
  EXPECT_DOUBLE_EQ(12.9, timesThree(4.3));
  EXPECT_NEAR(12.900001, timesThree(4.3), 1e-5);
}

int main(int argc, char* argv[])
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}