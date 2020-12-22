#include <iostream>
#include<string>
#include"account.h"
#include"creditaccount.h"
#include"savingsaccount.h"

using namespace std;

    AccountBase::AccountBase():
        m_accNumber(""), m_accName(""), m_balance(0) {}

    AccountBase::AccountBase(string acc_num,string acc_name,double bal):
        m_accNumber(acc_num), m_accName(acc_name), m_balance(bal) {}

    AccountBase::AccountBase(string acc_num,string acc_name):
        m_accNumber(acc_num), m_accName(acc_name), m_balance(0) {}

    AccountBase::AccountBase(const AccountBase &ref):
        m_accNumber(ref.m_accNumber), m_accName(ref.m_accName), m_balance(ref.m_balance) {}

    SavingsAccount::SavingsAccount(){}

    SavingsAccount::SavingsAccount(string acc_num,string acc_name,double bal):AccountBase(acc_num,acc_name,bal){}

    SavingsAccount::SavingsAccount(string acc_num,string acc_name):AccountBase(acc_num,acc_name){}

    CreditAccount::CreditAccount(){}

    CreditAccount::CreditAccount(string acc_num,string acc_name,double bal):AccountBase(acc_num,acc_name,bal){}

    CreditAccount::CreditAccount(string acc_num,string acc_name):AccountBase(acc_num,acc_name){}


    void AccountBase::debit(double amount)
    {
        m_balance-=amount;

    }
    void AccountBase::credit(double amount)
    {
        m_balance+=amount;

    }
    double AccountBase::getBalance()const
    {
        cout<<m_accNumber<<endl;
        cout<<m_accName<<endl;
        cout<<m_balance<<endl;
        return m_balance;
    }
    void AccountBase::display()const
    {
        cout<<m_accNumber<<endl;
        cout<<m_accName<<endl;
        cout<<m_balance<<endl;
    }


    void CreditAccount::display() const
    {
        cout<<"You have opted for Credit Account\n";
    }


    void SavingsAccount::display() const
    {
        cout<<"You have opted for Savings Account\n";
    }
