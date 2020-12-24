#include "account.h"
#include<iostream>
#include<list>
using namespace std;
class Banking{
    list<Account> account;
    public:
    void addAccount(int,string,double,string);
    void removeAccount(int id);
    void displayAll();
    Account* findbyId(int id);
    Account* findbyName(string name);
    double findAvgBalance();
    int maxBalance();
    int rangeOfBalance(int minVal, int maxVal);
    int lowBalanceAccounts(double);
};