#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    Book book1;
    book1.title = "The Alchemist";
    book1.author = "Paulo Coelho";
    book1.publicationYear = 1988;

    Book book2;
    book2.title = "1984";
    book2.author = "George Orwell";
    book2.publicationYear = 1949;

    cout << "Book 1 Details:" << endl;
    book1.displayBookDetails();

    cout << "Book 2 Details:" << endl;
    book2.displayBookDetails();

    return 0;
}
