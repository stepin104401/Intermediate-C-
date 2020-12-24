#include "library.h"
#include "book.h"
using namespace std;
void Library::addBook(int isbn, string title, string author, 
                            int year, double price, int pages) {
    //Book temp(isbn, title, author, year, price, pages);
    //books.push_back(temp);                            
    
    books.push_back(Book(isbn, title, author, year, price, pages));
    
    //books.emplace_back(isbn, title, author, year, price, pages);
}
void Library::displayAll() {
   list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}
Book* Library::findBookbyISBN(int keyIsbn) {
   list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->getId() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return &(*iter);
   else
     return nullptr;
}
bool Library::isBookFound(int keyIsbn) {
    list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->getId() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return true;
   else
     return false;
}
void Library::removeBookbyISBN(int keyIsbn) {
    list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->getId() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     books.erase(iter);
}
double Library::findAveragePrice() {
  list<Book>::iterator iter;
  double totalPrice=0;
  for(iter=books.begin(); iter!=books.end(); ++iter)
     totalPrice += iter->getPrice();
  return totalPrice/books.size();
}
int Library::countBooksInPriceRange(int minVal, int maxVal) {
    list<Book>::iterator iter;
  for(iter=books.begin();iter!=books.end();++iter){
      if(iter->getPrice() >= minVal && iter->getPrice() <= maxVal)
      {
          return iter->getId();
      }
  }

}
Book& Library::findBookwithMaxPages() {
  list<Book>::iterator iter;
  iter = books.begin();
  auto maxIter=iter;
  double maxPrice=iter->getPrice();
  ++iter;
  for(;iter!=books.end(); ++iter)
    if(iter->getPrice() > maxPrice) {
        maxPrice = iter->getPrice();
        maxIter = iter;
    }
    return *maxIter;
}