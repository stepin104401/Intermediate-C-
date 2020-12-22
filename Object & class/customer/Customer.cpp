#include <iostream>
#include "Customer.h"
using namespace std;
Customer::Customer():m_custId(""), m_custName(""), m_phone(""),m_balance(0)
{
}
Customer::Customer(string id,string name, string phn, double bal):m_custId(id),m_custName(name),m_phone(phn),m_balance(bal)
{
}
Customer::Customer(string id,string name, string phn):m_custId(id),m_custName(name),m_phone(phn)
{
}
Customer::Customer(const Customer& ref):m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance)
{
}
 void Customer::credit(double amount)
    {
         m_balance+=amount;
    }
   void Customer::makeCall(double amount)
    {
        cout << "Calling " << endl;
        m_balance-=amount;
    }
    double Customer::getBalance() const
    {
       return m_balance;

    }

    void Customer::display()const
    {
        
        cout << "CustID" << m_custId
        << "Name: " << m_custName
        << "Phone no." << m_phone
        << "Balance" << m_balance;
    }