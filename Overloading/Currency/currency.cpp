#include"currency.h"
#include<iostream>

    currency::currency():m_rupees(0),m_paisa(0)
    {
    }
    currency::currency(int rupee,int paisa):m_rupees(rupee),m_paisa(paisa)
    {
    }
    currency::currency(int val):m_rupees(val)
    {
    }
    currency currency:: operator+(const currency &ref)
    {
        currency c3;
        c3.m_rupees=m_rupees+ref.m_rupees;
        c3.m_paisa=m_paisa+ref.m_paisa;
        while(c3.m_paisa>100)
        {
            c3.m_rupees=c3.m_rupees+1;
            c3.m_paisa=c3.m_paisa-100;
        }
        return c3;
    }
    currency currency::operator-(const currency &ref)
    {
        currency c3;
        if(m_paisa<ref.m_paisa)
        {
            c3.m_paisa=(m_paisa-ref.m_paisa)+100;
            c3.m_rupees=m_rupees-ref.m_rupees-1;
        }
        else
        {
            c3.m_rupees=m_rupees-ref.m_rupees;
            c3.m_paisa=m_paisa-ref.m_paisa;
        }
        return c3;
    }
    void currency::operator+(int amount)
    {
        m_rupees=m_rupees+amount;
    }
    int currency::operator-(int a)
    {
        m_rupees=m_rupees-a;
    }
    int currency::operator++()
    {
        m_rupees=m_rupees+1;
    }
    int currency::operator++(int a)
    {
        m_rupees=m_rupees+a;
    }
    bool currency::operator== (int a)
    {
        if(m_rupees==a)
        {
            return true;
        }
        else{return false;}
    }
    bool currency::operator > (int a)
    {
        if(m_rupees>a)
        {
            return true;
        }
        else{return false;}
    }
    int currency::display()
    {
        return m_rupees;
        return m_paisa;
    }
    int currency::ru()
    {
        return m_rupees;
    }
    int currency::pai()
    {
        return m_paisa;
    }
