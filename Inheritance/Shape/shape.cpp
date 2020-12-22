#include <iostream>
#include<cmath>
#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"


using namespace std;




Polygon::Polygon(int n):m_sides{n}{}

Rectangle::Rectangle(int len,int breadth):Polygon(4),m_length{len},m_breadth{breadth}{}

double Rectangle::area()
{
    cout<<"Area="<<m_length*m_breadth<<endl;
    return (m_length*m_breadth);
}

double Rectangle::circumference()
{
    cout<<"Circumference="<<2*(m_length+m_breadth)<<endl;
    return 2*(m_length+m_breadth);
}


Triangle::Triangle(int base,int hypo,int height):Polygon(3),m_a{base},m_b{hypo},m_c{height}{}


double Triangle::area()
{
    int p=(m_a+m_b+m_c)/2;
    cout<<"Area="<<sqrt(p*(p-m_a)*(p-m_b)*(p-m_c))<<endl;
    return sqrt(p*(p-m_a)*(p-m_b)*(p-m_c));
}

double Triangle::circumference()
{
    cout<<"Circumference="<<m_a+m_b+m_c<<endl;
    return (m_a+m_b+m_c);
}


Circle::Circle(double radius):m_radius{radius}{}

double Circle::area()
{

    cout<<"Area="<<3.14*m_radius*m_radius<<endl;
    return 3.14*m_radius*m_radius;
}

double Circle::circumference()
{
    cout<<"Circumference="<<2*3.14*m_radius<<endl;
    return 2*3.14*m_radius;
}