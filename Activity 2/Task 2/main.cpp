#include<iostream>
#include"account.h"
#include"banking.h"

int main(){
    Banking bank;
    bank.addAccount(123,"Aravind",20000.0,"8016789654");
    bank.addAccount(146,"Akash",40000.25,"9016789654");
    bank.addAccount(178,"Abhishek",10000.0,"8018989654");
    bank.addAccount(189,"Srijan",5000.0,"9089789654");
    bank.addAccount(120,"Manav",20500.50,"987689654");
    bank.addAccount(138,"Naveen",13000.0,"8076544354");
    bank.displayAll();
    bank.removeAccount(189);
    return 0;
}