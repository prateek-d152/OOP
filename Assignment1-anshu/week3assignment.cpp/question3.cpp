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
        cout << "Year: " << publicationYear << endl;
    }
};

int main() {
    Book b1, b2;

    b1.title = "C++ Basics";
    b1.author = "Ram";
    b1.publicationYear = 2020;

    b2.title = "Advanced C++";
    b2.author = "Shyam";
    b2.publicationYear = 2023;

    b1.displayBookDetails();
    b2.displayBookDetails();

    return 0;
}
