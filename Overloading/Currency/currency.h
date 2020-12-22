#ifndef __CURRENCY__
#define __CURRENCY__
#include<iostream>
class currency
{
    int m_rupees,m_paisa;
public:
    currency();
    currency(int,int);
    currency(int);
    currency operator+(const currency &a);
    currency operator-(const currency &a);
    void operator+(int);
    int operator-(int);
    int operator++();
    int operator++(int);
    bool operator== (int a);
    bool operator > (int a);
    int display();
    int ru();
    int pai();
};
#endif

