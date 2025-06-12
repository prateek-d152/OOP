#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "Title: " << title << ", Author: " << author
             << ", Year: " << publicationYear << endl;
    }
};

int main() {
    Book book1, book2;

    book1.title = "The Alchemist";
    book1.author = "Paulo Coelho";
    book1.publicationYear = 1988;

    book2.title = "1984";
    book2.author = "George Orwell";
    book2.publicationYear = 1949;

    book1.displayBookDetails();
    book2.displayBookDetails();

    return 0;
}
