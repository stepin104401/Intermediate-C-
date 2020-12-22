#include "array.h"
#include "gtest/gtest.h"
#include "array.cpp"

TEST(MyArray,ParameterConstructor)
{
    MyArray <int> arr(4);
    arr.append(5);
    arr.append(3);
    arr.append(3);
    EXPECT_EQ(11,arr.sum());
    EXPECT_EQ(5,arr.max());
}
