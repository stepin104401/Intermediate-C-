#include <iostream>
#include "complex.h"
using namespace std;

    complex::complex():m_real(0),m_imag(0)
    {
    }
    complex::complex(int a,int b):m_real(a),m_imag(b)
    {
    }
    complex::complex(int a):m_real(a),m_imag(0)
    {
    }
    complex complex:: operator+(complex ref)
    {
        complex comp;
        comp.m_real=m_real+ref.m_real;
        comp.m_imag=m_imag+ref.m_imag;
        return comp;
    }
    complex complex:: operator-(complex ref)
    {
        complex comp;
        comp.m_real=m_real-ref.m_real;
        comp.m_imag=m_imag-ref.m_imag;
        return comp;
    }
    complex complex:: operator*(complex ref)
    {
        complex comp;
        comp.m_real = m_real * ref.m_real  - m_imag * ref.m_imag;
        comp.m_imag = m_real * ref.m_imag + m_imag * ref.m_real;
        return comp;
    }
    int complex::operator++()
    {
        m_real=m_real+1;
    }
    int complex::operator++(int a)
    {
        m_real=m_real+a;return m_real;
        }
    bool complex::operator==(complex ref)
    {
        if((ref.m_real==m_real)&&(ref.m_imag==ref.m_imag))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int complex::rval()
    {
        return m_real;
    }
    int complex::ival()
    {
        return m_imag;
    }
    int complex::display()
    {
        cout<<rval()<<endl;
        cout<<ival()<<endl;
    }

