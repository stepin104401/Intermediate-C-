#include <iostream>
#include "employee.h"
#include "manager.h"
#include "trainee.h"
#include "engineer.h"
using namespace std;

Employee::Employee(std::string id, std::string name, double salary,int exp):m_empid(id),m_name(name),m_salary(salary),m_exp(exp)
{
}

Manager::Manager(string id, string name, double salary,int exp,int code,int reprtees):Employee(id,name,salary,exp), m_projCode(code), m_reportees(reprtees)
{
}

Trainee:: Trainee(string id,string name, double salary,int exp,string track_code,double score):Employee(id,name,salary,exp),m_track(track_code),scores(score)
{
}

Engineer::Engineer(string id, string name, double salary,int exp,int code):Employee(id,name,salary,exp),m_projCode(code)
{
}

void Employee::display(){
    cout<<m_empid<<" "<<m_name<<" "<<m_salary<<" "<<m_exp<<endl;
}

int Employee::salary()
{
    return m_salary;
}

double Manager::payroll(){
    int pay = salary();
    cout<<pay<<endl;
    return pay;
}

double Manager::appraisal(){
    int pay = salary();
    int apprail = 0.15*pay;
    cout<<apprail<<endl;
    return apprail;
}

double Trainee::payroll(){
    int payTrain = salary();
    cout<<payTrain<<endl;
    return payTrain;
}

double Trainee::appraisal(){
    int payTrain = salary();
    int appTrain=0;
    if (scores>50)
        appTrain = 0.35*payTrain;
    else
        appTrain = 0;
    cout<<appTrain<<endl;
    return appTrain;
}

double Engineer::payroll(){
    int payEng = salary();
     cout<<payEng<<endl;
     return payEng;
}

double Engineer::appraisal(){
    int payEng = salary();
    int appEng = 0.20*payEng;
    cout<<appEng<<endl;
    return appEng;
}