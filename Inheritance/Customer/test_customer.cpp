#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>

TEST(Customer,Postpaid) {
    PostpaidCustomer cust1("3129","Akash","438",434,15);
    cust1.postpaidbill(400);
    cust1.credit(300);
    cust1.makeCall(50);
    EXPECT_EQ(284,cust1.getBalance());

}

TEST(Customer,Prepaid) {
    PostpaidCustomer cust2("121","Malhotra","525");
    cust2.credit(1700);
    cust2.makeCall(250);
    EXPECT_EQ(1450,cust2.getBalance());
}


