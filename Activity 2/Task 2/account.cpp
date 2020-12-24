#include "account.h"
#include<iostream>

Account::Account():customerId(0),customerName(""),balance(0),phone(""){}

Account::Account(int id,string name, double bal, string ph):customerId(id),customerName(name), balance(bal), phone(ph){}

int Account::getCustomerId() const{return customerId;}

string Account::getCustomerName() const{return customerName;}

double Account::getBalance() const {return balance;}

string Account::getCustomerPhone() const{return phone;}

void Account::display() const{
    cout<<customerId<<endl;
    cout<<customerName<<endl;
    cout<<balance<<endl;
    cout<<phone<<endl;
}