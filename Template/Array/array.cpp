#include"array.h"
#include<iostream>
using namespace std;

template<class T>		//template declaration
MyArray<T>::MyArray()
{
	m_arr = NULL;
	m_len = 0;
}
template <class T>		
MyArray<T>::MyArray( int len )		//Parametrized construction
{
    m_arr = new T[len];
	m_len = len;
}
template <class T>
MyArray<T>::~MyArray()			//Destructor
{
    delete []m_arr;
}

template<class T>
void MyArray<T>::append(T val)
{
    static int i=0;
    m_arr[i]=val;
    i++;
}
template<class T>
T MyArray<T>::at(int index)		//returning index of array
{
    return m_arr[index];
}
template<class T>
bool MyArray<T>::search(T key) const
{
    for(int i=0;i<m_len;i++)
    {
        if (m_arr[i]==key)
        {
            return true;
        }
        else
        {
        	return false;
        }
    }
}
template<class T>
T MyArray<T>::sum() const
{
    int add=0;
    for(int i=0;i<m_len;i++)
    {
        add=add+m_arr[i];
    }
    return add;
}
template<class T>
T MyArray<T>::min() const
{
    int n = sizeof(m_arr)/sizeof(m_arr[0]);		//minimum of the array
    sort();
    return m_arr[0];
}
template<class T>
T MyArray<T>::max() const		//max of the array
{
    int n = sizeof(m_arr)/sizeof(m_arr[0]);
    sort();
    return m_arr[m_len-1];
}
template<class T>
void MyArray<T>::reverse()		//reversing the elements
{
    int start=0;
    int end=m_len-1;
    while (start < end)
    {
        int temp = m_arr[start];
        m_arr[start] = m_arr[end];
        m_arr[end] = temp;
        start++;
        end--;
    }
}
template<class T>
void MyArray<T>::sort()
{
    int n = sizeof(m_arr)/sizeof(m_arr[0]);		//sorting the array
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (m_arr[j] < m_arr[min])
      min = j;
      temp = m_arr[i];
      m_arr[i] = m_arr[min];
      m_arr[min] = temp;
   }
}








