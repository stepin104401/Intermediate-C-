#include <iostream>
#include"color.h"

using namespace std;

    Colour::Colour():
        m_r{0}, m_g{0}, m_b{0} 
        {
        }

    Colour::Colour(int red,int green,int blue):
        m_r{red}, m_g{green}, m_b{blue} 
        {
        }

    Colour::Colour(int red):
        m_r{red}, m_g{0},m_b{0} 
        {
        }


    void Colour::invert()
    {
        m_r=255-m_r;
        m_g=255-m_g;
        m_b=255-m_b;
    }

    void Colour::display() const
    {
        cout<<"r="<<m_r<<endl;
        cout<<"g="<<m_g<<endl;
        cout<<"b="<<m_b<<endl;
    }

