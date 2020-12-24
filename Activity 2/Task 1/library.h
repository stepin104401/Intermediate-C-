#ifndef __LIBRARY_H
#define __LIBRARY_H
#include "book.h"
#include<iostream>
#include<list>
using namespace std;

class Library{
    list<Book> books;
    public:
    void addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages);
    void removeBookByISBN(int isbn);
    void displayAll();
    Book* findBookbyISBN(int keyIsbn);
    bool isBookFound(int keyIsbn);
    void removeBookbyISBN(int keyIsbn);
    double findAveragePrice();
    int countBooksInPriceRange(int minVal, int maxVal);
    Book& findBookwithMaxPages();
};

#endif;