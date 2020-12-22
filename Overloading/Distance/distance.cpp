#include<iostream>
#include "distance.h"

    distance::distance():m_feets(0),m_inches(0){}
    distance::distance(int a,int b):m_feets(a),m_inches(b){}
    distance distance::operator+(const distance &a)
    {
        distance d3;
         if((m_inches+a.m_inches)>12)
        {
            d3.m_feets=m_feets+a.m_feets+1;
            d3.m_inches=m_inches+a.m_inches-12;
        }
        else
        {
        d3.m_feets=m_feets+a.m_feets;
        d3.m_inches=m_inches+a.m_inches;
        }

        return d3;
    }
    distance distance:: operator-(const distance &a)
    {
        distance d3;
        if (m_inches<a.m_inches)
        {
            d3.m_inches=m_inches-a.m_inches+12;
            d3.m_feets=m_feets-a.m_feets-1;
        }
        else
        {
                d3.m_inches=m_inches-a.m_inches;
                d3.m_feets=m_feets-a.m_feets;
        }
        return d3;
    }
    void distance::operator+(int a){m_feets=m_feets+a;}
    void distance::operator-(int a){if(m_feets>a){m_feets=m_feets-a;}}
    void distance::operator++(){m_feets++;}
    void distance::operator++(int a){m_feets=m_feets+a;}
    bool distance::operator== (int a)
    {
        if((m_feets==a)&&(m_inches==0)){return true;}
        else{return false;}
    }
    bool distance::operator > (int a)
    {
        if(m_feets>a){return true;}else{return false;}}
    bool distance::operator < (int a)
    {
        if(m_feets<a){return true;}else{return false;}}
    int distance::display(){return m_feets;return m_inches;;}
    int distance::feet(){return m_feets;}
    int distance::inch(){return m_inches;}



