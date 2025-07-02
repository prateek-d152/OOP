#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nPublication Year: " << publicationYear << "\n\n";
    }
};

int main() {
    Book b1, b2;

    b1.title = "The Alchemist";
    b1.author = "Paulo Coelho";
    b1.publicationYear = 1988;

    b2.title = "1984";
    b2.author = "George Orwell";
    b2.publicationYear = 1949;

    b1.displayBookDetails();
    b2.displayBookDetails();

    return 0;
}
