#include <gtest/gtest.h>
#include "../code/timesFive.h"

TEST(test_timesFive, positiveDoubleTests)
{
    EXPECT_DOUBLE_EQ(7.5, timesFive(1.5));
    EXPECT_NEAR(7.5001, timesFive(1.5), 0.001);
}

TEST(test_timesFive, negativeDoubleTests)
{
    EXPECT_DOUBLE_EQ(-7.5, timesFive(-1.5));
    EXPECT_NEAR(-7.5001, timesFive(-1.5), 0.001);
}