#include "stack.h"
#include "gtest/gtest.h"
#include "stack.cpp"


TEST(MyStack,ParameterConstructor)
{
    MyStack <int> st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    EXPECT_EQ(50,st.pop());
    EXPECT_EQ(40,st.pop());
    EXPECT_EQ(30,st.pop());
    EXPECT_EQ(20,st.peek());
}


