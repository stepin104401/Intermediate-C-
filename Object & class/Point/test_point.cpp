#include "point.h"
#include <gtest/gtest.h>
namespace {
TEST(Point, Empty_Constructor) {
    Point P1;
    EXPECT_EQ(true, P1.isOrigin());
}

TEST(Point, Parameterized_Constructor) {
    Point P1(0,0);
    Point P2(0,1);
    Point P3(1,0);
    EXPECT_EQ(true, P1.isOrigin());
    EXPECT_EQ(true, P2.isOnXAxis());
    EXPECT_EQ(true, P3.isOnYAxis());
    EXPECT_EQ(false, P2.isOnYAxis());
    EXPECT_EQ(false, P3.isOnXAxis());
}
}