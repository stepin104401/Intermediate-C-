#include "point.h"
#include "gtest/gtest.h"
#include "point.cpp"
TEST(Point,ParameterConstructor)
{
    Point <int> P1(1,2);
    Point <int> P2(-1,6);
    Point <int> P3(-1,-1);
    Point <int> P4(5,-6);
    EXPECT_EQ(Q1,P1.quadrant());
    EXPECT_EQ(Q2,P2.quadrant());
    EXPECT_EQ(Q3,P3.quadrant());
    EXPECT_EQ(Q4,P4.quadrant());
}
