#include <iostream>
#include "fraction.h"
using namespace std;

    fraction::fraction():m_numerator(0),m_denominator(0)
    {
    }
    fraction::fraction(int a,int b):m_numerator(a),m_denominator(b)
    {
    }
    fraction::fraction(int a):m_numerator(a),m_denominator(1)
    {
    }
    fraction fraction::operator+(const fraction &ref)
    {
        int lcm=ref.m_denominator*m_denominator;
        fraction f;
        int num1=m_denominator*ref.m_numerator;
        int num2=ref.m_denominator*m_numerator;
        f.m_numerator=num1+num2;
        f.m_denominator=lcm;
        return f;
    }
    fraction fraction::operator-(const fraction &ref)
    {
        int lcm=ref.m_denominator*m_denominator;
        fraction f;
        int num1=m_denominator*ref.m_numerator;
        int num2=ref.m_denominator*m_numerator;
        f.m_numerator=num2-num1;
        f.m_denominator=lcm;
        return f;
    }
    int fraction:: operator*(int a)
    {
       m_numerator=m_numerator*a;
    }
    void fraction:: operator+(int a)
    {
        int num1=m_denominator*a;
        m_numerator=m_numerator+num1;
    }
    void fraction::operator-(int a)
    {
        int num1=m_denominator*a;
        m_numerator=m_numerator-num1;
    }
    bool fraction::operator== (int a)
    {
        if((int(m_numerator/m_denominator))==a)
        {
            return true;
        }
    }
    bool fraction::operator > (int a)
    {
        int num=int(m_numerator/m_denominator);
        if (num>a)
        {
            return true;
        }
        else{return false;}
    }
    bool fraction::operator < (int a)
    {
        int num=int(m_numerator/m_denominator);
        if (num<a)
        {
            return true;
        }
        else{return false;}
    }
    void fraction::simplify()
    {
        int num=int(m_numerator/m_denominator);
        m_denominator=1;
        m_numerator=num;
    }
    void fraction::issimplest()
    {
        int num=int(m_numerator/m_denominator);
        m_denominator=1;
        m_numerator=num;
        }
    void fraction::display(){cout<<"this is numerator"<<m_numerator<<endl;cout<<"this is denominator"<<m_denominator<<endl;}
    int fraction:: num(){return m_numerator;}
    int fraction::den(){return m_denominator;}


