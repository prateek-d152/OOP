#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published: " << publicationYear << endl << endl;
    }
};

int main() {
    Book book1, book2;

    book1.title = "C++ Basics";
    book1.author = "John Doe";
    book1.publicationYear = 2020;

    book2.title = "Advanced C++";
    book2.author = "Jane Smith";
    book2.publicationYear = 2022;

    book1.displayBookDetails();
    book2.displayBookDetails();

    return 0;
}