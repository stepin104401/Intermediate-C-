#include"complex.h"
#include <iostream>
using namespace std;
template<class T>		//template declaration
Complex<T>::Complex():m_real(0),m_image(0)		//Empty Constructor
{
}
template<class T>
Complex<T>::Complex(T a,T b):m_real(a),m_image(b)		//Parametrized Constructor
{
}
//different complex function
template <class T>
T Complex<T>::re()		
{
	return m_real;
}
template <class T>
T Complex<T>::img()
{
	return m_image;
}
template <class T>		//display of real and imaginary value
void Complex<T>::display()
{
	cout<<re()<<img();
}

