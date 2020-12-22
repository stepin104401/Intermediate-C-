#ifndef __FRACTION__
#define __FRACTION__
#include<iostream>
using namespace std;

class fraction
{
    int m_numerator,m_denominator;
public:
    fraction();
    fraction(int ,int );
    fraction(int );
    fraction operator+(const fraction &);
    fraction operator-(const fraction &);
    int operator*(int );
    void operator+(int );
    void operator-(int );
    bool operator== (int );
    bool operator > (int );
    bool operator < (int );
    void issimplest();
    void simplify();
    void display();
    int num();
    int den();
};
#endif


