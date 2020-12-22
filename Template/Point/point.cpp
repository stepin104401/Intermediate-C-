#include"point.h"
#include<iostream>
#include<math.h>
using namespace std;

  template<class T>		//Default Constructor
  Point<T>::Point(){m_x=0;m_y=0;}
  template<class T>		//Parametrized Constructor
  Point<T>::Point(T a,T b):m_x(a),m_y(b)
  {
  }
  template<class T>
  void Point<T>::distanceFromOrigin()		//Distance from Origin
  {
   return sqrt((pow(m_x,2))+(pow(m_y,2)));
   }
  template<class T>
  Quadrant Point<T>::quadrant()		//Which quadrant doest the point lie
  {
      if (m_x>0 &&m_y>0)
        {
            return Q1;
        }
        if (m_x<0 &&m_y<0)
        {
            return Q3;
        }
        if (m_x>0 &&m_y<0)
        {
            return Q4;
        }
        if (m_x<0 &&m_y>0)
        {
            return Q2;
        }

  }
  template<class T>
  void Point<T>::display()
  {
  cout<<m_x
  <<m_y;
  }

