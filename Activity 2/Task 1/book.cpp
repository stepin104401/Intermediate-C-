#include "book.h"

Book::Book():b_id(0),b_title(""),b_author(""),b_year(0),b_price(0.0),b_noOfPages(0){}

Book::Book(int isbn,string title,string author,int year, double price, int pages): b_id(isbn),b_title(title),b_author(author),b_year(year),b_price(price), b_noOfPages(pages){}

int Book::getId() const{return b_id;}

string Book::getTitle() const{
    return b_title;
}
string Book::getAuthor() const{
    return b_author;
}
int Book::getYear() const{
    return b_year;
}
double Book::getPrice() const{
    return b_price;
}
int Book::getPages() const{
    return b_noOfPages;
}
void Book::display() const{
    cout<<b_id<<endl;
    cout<<b_title<<endl;
    cout<<b_author<<endl;
    cout<<b_year<<endl;
    cout<<b_price<<endl;
    cout<<b_noOfPages<<endl;
}
