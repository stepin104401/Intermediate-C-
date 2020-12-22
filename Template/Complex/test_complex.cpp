#include "complex.h"
#include "gtest/gtest.h"
#include "complex.cpp"


TEST(Complex,ParameterConstructor)
{
    Complex <int> com(3,9);
    EXPECT_EQ(3,com.re());
    EXPECT_EQ(9,com.img());
}
TEST(Complex,Parametrized)
{
    Complex <double> com(5.25,8.69);
    EXPECT_EQ(5.25,com.re());
    EXPECT_EQ(8.69,com.img());
}
TEST(Complex,DefaultConstructor)
{
    Complex <int> com2;
    EXPECT_EQ(0,com2.re());
    EXPECT_EQ(0,com2.img());
}
