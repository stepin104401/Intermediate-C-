#include "account.h"
#include"savingsaccount.h"
#include"creditaccount.h"
#include <gtest/gtest.h>

TEST(AccountBase,SavingsAccount) {
    AccountBase *disp=new SavingsAccount("12345","Akash",1810);
    disp->debit(900);
    disp->credit(190);
    EXPECT_EQ(1100,disp->getBalance());

}

TEST(AccountBase,CreditAccount) {
    AccountBase *disp2=new CreditAccount("5548","Malhotra",2000);
    disp2->debit(1100);
    disp2->credit(4000);
    EXPECT_EQ(4900,disp2->getBalance());
}


