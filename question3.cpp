#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "Title: " << title << "\nAuthor: " << author 
             << "\nYear: " << publicationYear << endl;
    }
};

int main() {
    Book book1, book2;

    book1.title = "1984";
    book1.author = "George Orwell";
    book1.publicationYear = 1949;

    book2.title = "The Alchemist";
    book2.author = "Paulo Coelho";
    book2.publicationYear = 1988;

    book1.displayBookDetails();
    cout << endl;
    book2.displayBookDetails();

    return 0;
}
