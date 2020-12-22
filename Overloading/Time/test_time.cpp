#include"mytime.h"
#include <gtest/gtest.h>

TEST(MyTime,plusoperator) {
    MyTime t1(14,25,23);
    MyTime t2(1,23,30);
    MyTime t3;
    t3=t1+t2;
    EXPECT_EQ(15,t3.hours());
    EXPECT_EQ(48,t3.minutes());
    EXPECT_EQ(53,t3.seconds());
}
TEST(MyTime,plus) {
    MyTime t1(15,32,40);
    MyTime t3;
    t3=t1+30;
    EXPECT_EQ(15,t3.hours());
    EXPECT_EQ(33,t3.minutes());
    EXPECT_EQ(10,t3.seconds());
}
TEST(MyTime,PreIncrement) {
    MyTime t1(20,10,47);
    ++t1;
    EXPECT_EQ(20,t1.hours());
    EXPECT_EQ(10,t1.minutes());
    EXPECT_EQ(48,t1.seconds());
}
TEST(MyTime,PostIncrement) {
    MyTime t1(10,20,30);
    MyTime t2;
    t2=t1++;
    EXPECT_EQ(10,t2.hours());
    EXPECT_EQ(20,t2.minutes());
    EXPECT_EQ(30,t2.seconds());
    EXPECT_EQ(10,t1.hours());
    EXPECT_EQ(20,t1.minutes());
    EXPECT_EQ(31,t1.seconds());
}
TEST(MyTime,Equality) {
    MyTime t1(10,20,30);
    MyTime t2(10,20,30);
    MyTime t3(20,10,47);
    EXPECT_EQ(1,t1==t2);
    EXPECT_EQ(0,t1==t3);
}
TEST(MyTime,LessThan) {
    MyTime t1(10,20,20);
    MyTime t2(10,20,55);
    MyTime t3(9,20,50);
    EXPECT_EQ(1,t1<t2);
    EXPECT_EQ(0,t1<t3);
}
TEST(MyTime,GreaterThan) {
    MyTime t1(8,25,50);
    MyTime t2(6,20,15);
    MyTime t3(14,32,11);
    EXPECT_EQ(1,t1>t2);
    EXPECT_EQ(0,t1>t3);
}
