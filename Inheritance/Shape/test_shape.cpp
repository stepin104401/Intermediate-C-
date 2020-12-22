#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>

TEST(Circle,Area)
{
    Circle c1(15);
    EXPECT_EQ(706.50,c1.area());
    EXPECT_EQ(94.20,c1.circumference());
}
TEST(Triangle,Area)
{
    Triangle t1(4,3,5);
    EXPECT_EQ(6,t1.area());
    EXPECT_EQ(12,t1.circumference());
}
TEST(Rectangle,Area)
{
    Rectangle r1(7,8);
    EXPECT_EQ(56,r1.area());
    EXPECT_EQ(30,r1.circumference());
}
