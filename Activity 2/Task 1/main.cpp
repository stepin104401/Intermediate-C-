#include "library.h"
#include "book.h"
#include<iostream>
using namespace std;

int main(){
    Library lib;
    lib.addBook(0001, "Harray Potter", "JK Rowling", 2000, 850.50, 500);
    lib.addBook(0002, "Abc", "Xyz", 2002, 950.50, 800);
    lib.addBook(0003, "Data Structures", "Ryan Gosling", 2012, 850.50, 500);
    lib.addBook(0004, "C++", "Abhishek Gwala", 2015, 850.50, 500);
    lib.addBook(0005, "Java", "Akash Malhotra", 2020, 650.0, 500);

    lib.displayAll();
    cout<<lib.isBookFound(0004);
    return 0;

}