#ifndef __ACCOUNT_H
#define __ACCOUNT_H
#include<iostream>
#include<string>
using namespace std;

class Account{
    int customerId;
    string customerName;
    double balance;
    string phone;
    public:
    Account();
    Account(int,string,double,string);
    int getCustomerId() const;
    string getCustomerName() const;
    double getBalance() const;
    string getCustomerPhone() const;
    void display() const;
};
#endif