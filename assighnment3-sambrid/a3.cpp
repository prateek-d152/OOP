#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    
    string title;
    string author;
    int publicationYear;

public:
  
    void setDetails(string t, string a, int year) {
        title = t;
        author = a;
        publicationYear = year;
    }

    
    void displayBookDetails() {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
 
    Book book1;
    book1.setDetails("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    
    
    Book book2;
    book2.setDetails("To Kill a Mockingbird", "Harper Lee", 1960);
    
    
    book1.displayBookDetails();
    book2.displayBookDetails();
    
    return 0;
}