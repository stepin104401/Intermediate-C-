#include "currency.h"
#include <gtest/gtest.h>


TEST(currency,plusOperator)
{
    currency r1(15,20);
    currency r2(15,15);
    currency r3;
    r3=r1+r2;
    EXPECT_EQ(30,r3.ru());
    EXPECT_EQ(35,r3.pai());

}
TEST(currency,Plusnum)
{
    currency rup(100,20);
    rup+25;
    EXPECT_EQ(125,rup.ru());
    EXPECT_EQ(20,rup.pai());
}
TEST(currency,MinusOperator)
 {
    currency r1(100,20);
    currency r2(10,10);
    currency r3;
    r3=r1-r2;
    EXPECT_EQ(90,r3.ru());
    EXPECT_EQ(10,r3.pai());

}
TEST(currency,MinusArg)
{
    currency c1(700,75);
    c1-30;
    EXPECT_EQ(670,c1.ru());
    EXPECT_EQ(75,c1.pai());
}

TEST(currency,PLusPlusOperator)
 {
    currency c1(74,35);
    ++c1;
    EXPECT_EQ(75,c1.ru());
    EXPECT_EQ(35,c1.pai());

}
TEST(currency,PLusPlusPostIncrement)
{
    currency c1(110,70);
    c1.operator++();
    EXPECT_EQ(111,c1.ru());
    EXPECT_EQ(70,c1.pai());
}
TEST(currency,EqualsEqulasOperator) {
    currency c1(25,20);
    currency c3(151,20);
    EXPECT_EQ(1,c1==25);
    EXPECT_EQ(0,c1==35);
    EXPECT_EQ(1,c3==151);
}
TEST(currency,GreaterThanOperator) {
    currency c1(10);
    EXPECT_EQ(0,c1.operator>(15));
    EXPECT_EQ(1,c1.operator>(8));
}
