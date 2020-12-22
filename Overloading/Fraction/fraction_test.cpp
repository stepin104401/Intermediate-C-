#include "fraction.h"
#include "gtest/gtest.h"

TEST(fraction,DefaultConstructor)
{
    fraction fun;
    EXPECT_EQ(0,fun.num());
    EXPECT_EQ(0,fun.den());
}
TEST(fraction,ConstructorTwoarg)
{
    fraction fun(7,4);
    EXPECT_EQ(7,fun.num());
    EXPECT_EQ(4,fun.den());
}
TEST(fraction,ConstructorOnearg)
{
    fraction fun(1);
    EXPECT_EQ(1,fun.num());
    EXPECT_EQ(1,fun.den());
}
TEST(fraction,Plusoverloading)
{
    fraction f1(1,6);
    fraction f2(1,8);
    fraction f3=f1+f2;
    EXPECT_EQ(14,f3.num());
    EXPECT_EQ(48,f3.den());
}
TEST(fraction,Minusoverloading)
{
    fraction f1(1,9);
    fraction f2(1,13);
    fraction f3=f1-f2;
    EXPECT_EQ(4,f3.num());
    EXPECT_EQ(117,f3.den());
}
TEST(fraction,staroverloading)
{
    fraction f1(1,9);
    f1*7;
    EXPECT_EQ(7,f1.num());
    EXPECT_EQ(9,f1.den());
}
TEST(fraction,Plusintargoverloading)
{
    fraction f1(1,7);
    f1+7;
    EXPECT_EQ(50,f1.num());
    EXPECT_EQ(7,f1.den());
}
TEST(fraction,Minusintargoverloading)
{
    fraction f1(1,5);
    f1-5;
    EXPECT_EQ(-24,f1.num());
    EXPECT_EQ(5,f1.den());
}
TEST(fraction,EqualsEqualsoverloading)
{
    fraction f1(21,7);
    EXPECT_EQ(true,f1.operator==(3));
}
TEST(fraction,Greaterthanoverloading)
{
    fraction f1(10,5);
    EXPECT_EQ(false,f1.operator>(3));
}
TEST(fraction,Lessthanoverloading)
{
    fraction f1(10,5);
    EXPECT_EQ(true,f1.operator<(10));
}



