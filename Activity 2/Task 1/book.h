#ifndef __BOOK_H
#define __BOOK_H
#include<iostream>
#include<string>
using namespace std;
class Book{
    int b_id;
    string b_title;
    string b_author;
    int b_year;
    double b_price;
    int b_noOfPages;

    public:
    Book();
    Book(int,string,string,int,double,int);
    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    int getYear() const;
    double getPrice() const;
    int getPages() const;
    void display() const;

};
#endif