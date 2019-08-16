#include <gtest/gtest.h>
#include "../code/timesFive.h"

TEST(test_timesFive, positiveIntegerTests)
{
  EXPECT_EQ(0, timesFive(0));
  EXPECT_EQ(5, timesFive(1));
  EXPECT_EQ(25, timesFive(5));
}

TEST(test_timesFive, negativeIntegerTests)
{
  EXPECT_EQ(-25, timesFive(-5));
}