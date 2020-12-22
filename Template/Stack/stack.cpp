#include"stack.h"
#include<iostream>
#include<iostream>
using namespace std;
template <class T> 		//template declaration
MyStack<T>::MyStack()		//Empty constructor
{
	m_arr[max_size];
	m_maxlen = 0;
	m_top = -1;
}
template <class T>
MyStack<T>::MyStack(int s)		//Parametrized Constructor
{
	m_arr[s];
	m_maxlen = s;
	m_top = -1;
}
// different stack function
template <class T>

void MyStack<T>::push(T x)		//push by value
{
	if (isFull())
	{
		cout << "Overflow";
		exit(EXIT_FAILURE);
	}
	cout << "Inserting an element :" << x << endl;
	m_arr[++m_top] = x;
}
template <class T>		
T MyStack<T>::pop()		//pop function
{
	if (isEmpty())
	{
		cout << "Stack is Underflow";
		exit(EXIT_FAILURE);
	}
	cout << "Top of stack:" << peek() << endl;
	return m_arr[m_top--];
}
template <class T>
T MyStack<T>::peek()		//peek function for returning top element
{
	if (!isEmpty())
		return m_arr[m_top];
	else
		exit(EXIT_FAILURE);
}
template <class T>
bool MyStack<T>::isEmpty()	
{
	return m_top == -1;
}
template <class T>
bool MyStack<T>::isFull()
{
	return m_top == m_maxlen - 1;
}
