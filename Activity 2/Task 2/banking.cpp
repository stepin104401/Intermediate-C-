#include<iostream>
#include "account.h"
#include "banking.h"
#include<string>
using namespace std;

void Banking::addAccount(int id, string name, double bal, string phone){
    account.push_back(Account(id,name,bal,phone));
}
void Banking::removeAccount(int id){
    list<Account> :: iterator iter;
    for(iter=account.begin();iter!=account.end();++iter){
        if(iter->getCustomerId() == id)
            break;
    }
    if(iter!=account.end()){
        account.erase(iter);
    }
}

void Banking::displayAll(){
    list<Account> :: iterator iter;
    for(iter=account.begin();iter!=account.end();++iter)
    {
        iter->display();
    }
}

Account* Banking::findbyId(int id){
    list<Account> :: iterator iter;
    for(iter=account.begin();iter!=account.end();++iter){
        if(iter->getCustomerId()==id)
            break;
    }
    if(iter!=account.end())
        return &(*iter);
    else
        return nullptr;
    
}
Account* Banking:: findbyName(string name)
{
    list<Account> :: iterator iter;
    for(iter=account.begin();iter!=account.end();++iter)
    {
        if(iter->getCustomerName()==name)
        {
            break;
        }
    }
    if(iter!=account.end())
    {
        return &(*iter);
    }
    else
    {
        return nullptr;
    }
    
}
double Banking::findAvgBalance(){
    list<Account> :: iterator iter;
    double sum = 0;
    for(iter=account.begin();iter!=account.end();++iter)
    {
        sum+=iter->getBalance();
    }
    return sum/account.size();
}

int Banking::maxBalance(){
    list<Account> :: iterator iter;
    int max = 0;
    for(iter=account.begin();iter!=account.end();++iter)
    {
        if(iter->getBalance()>max)
        {
            max = iter->getBalance();
        }
    }
    return max;
}
int Banking::rangeOfBalance(int minVal, int maxVal)
{
    list<Account> :: iterator iter;
    int count=0;
    for(iter=account.begin();iter!=account.end();++iter)
    {
        if(iter->getBalance()>minVal && iter->getBalance()<maxVal)
        {
            count++;
        }
    }
    return count;
}
int Banking:: lowBalanceAccounts(double limit)
{
    list<Account> :: iterator iter;
    int count=0;
    for(iter=account.begin();iter!=account.end();++iter)
    {
        if(iter->getBalance()<limit)
        {
            count++;
        }
    }
    return count;
}

