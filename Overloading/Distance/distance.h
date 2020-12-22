#include<iostream>
#ifndef __DISTANCE__
#define __DISTANCE__

class distance
{
    int m_feets,m_inches;
public:
    distance();
    distance(int a,int b);
    distance operator+(const distance &a);
    distance operator-(const distance &a);
    void operator+(int);
    void operator-(int);
    void operator++();
    void operator++(int);
    bool operator== (int);
    bool operator > (int);
    bool operator < (int);
    int display();
    int feet();
    int inch();
};
#endif


