#ifndef __COMPLEX__
#define __COMPLEX__
#include<iostream>

class complex
{
    int m_real,m_imag;
public:
    complex();
    complex(int ,int );
    complex(int);
    complex operator+(complex a);
    complex operator-(complex a);
    complex operator*(complex a);
    int operator++();
    int operator++(int);
    bool operator==(complex a);
    int rval();
    int ival();
    int display();
};
#endif // __COMPLEX__
