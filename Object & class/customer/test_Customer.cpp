#include "Customer.h"
#include <gtest/gtest.h>
namespace{
TEST(Customer,Empty_Cosnstructor) {
    Customer Cust1;
    Cust1.credit(0);
    Cust1.makeCall(0);
    EXPECT_EQ(0.0,Cust1.getBalance());

}

TEST(Customer,Parameterized_Cosnstructor) {
    Customer Para1("3129","Akash","vgjbb",100);
    Para1.credit(251);
    Para1.makeCall(49);
    EXPECT_EQ(302.0,Para1.getBalance());

}

TEST(Customer,Copy_Cosnstructor) {
    Customer C1("3129","Malhotra","bhgc",0);
    Customer C2(C1);
    C2.credit(351);
    C2.makeCall(29);
    EXPECT_EQ(322.0,C2.getBalance());
}
}

