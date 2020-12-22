#include <iostream>
#include"customer.h"
#include"prepaid.h"
#include"postpaid.h"

using namespace std;

    CustomerBase::CustomerBase():m_custId(""),m_custName(""),m_phone(""),m_balance(0)
    {
    }

    CustomerBase::CustomerBase(string custId,string custName,string phone,double balance):m_custId(custId),m_custName(custName),m_phone(phone),m_balance(balance)
    {
    }

    CustomerBase::CustomerBase(string custId,string custName,string phone):m_custId(custId),m_custName(custName),m_phone(phone)
    {
    }

    CustomerBase::CustomerBase(const CustomerBase &ref):m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance)
    {
    }
    PrepaidCustomer::PrepaidCustomer():CustomerBase(){}

    PrepaidCustomer::PrepaidCustomer(string custId,string custName,string phone,double balance):CustomerBase(custId,custName,phone,balance)
    {
    }

    PrepaidCustomer::PrepaidCustomer(string custId,string custName,string phone):CustomerBase(custId,custName,phone){}


    PostpaidCustomer::PostpaidCustomer():CustomerBase(){}

    PostpaidCustomer::PostpaidCustomer(string custId,string custName,string phone,double balance,int billdate):CustomerBase(custId,custName,phone,balance),m_billDate(billdate)
    {
    }

    PostpaidCustomer::PostpaidCustomer(string custId,string custName,string phone):CustomerBase(custId,custName,phone) {}

    void CustomerBase::display()const
    {
        cout<<m_custId<<endl;
        cout<<m_custName<<endl;
        cout<<m_phone<<endl;
        cout<<m_balance<<endl;
    }
    void PostpaidCustomer::display() const{
    cout<<"Postpaid Customer\nBill due on "<<m_billDate<<endl;}

    void PostpaidCustomer::billPay(double amount){
        postpaidbill(amount);
        cout<<"Bill Paid\n";}

    void CustomerBase::postpaidbill(double amount){
    m_balance-=amount;
    }

    void PrepaidCustomer::display() const{
    cout<<"Prepaid Customer\n";}

    double CustomerBase::getBalance() const
    {
        cout<<m_balance<<endl;
        return m_balance;
    }
   void CustomerBase::credit(double bal)
    {
         m_balance+=bal;
    }
   void CustomerBase::makeCall(double cost)
    {
        cout<<"Calling"<<"\n";
        m_balance=m_balance-(cost);
    }
