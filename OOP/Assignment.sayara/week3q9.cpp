#include <iostream>
using namespace std;

class Book {
public:
    
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "----- Book Details -----" << endl;
        cout << "Title           : " << title << endl;
        cout << "Author          : " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
   
    Book book1;
    book1.title = "To Kill a Mockingbird";
    book1.author = "Harper Lee";
    book1.publicationYear = 1960;

    Book book2;
    book2.title = "1984";
    book2.author = "George Orwell";
    book2.publicationYear = 1949;

    book1.displayBookDetails();
    book2.displayBookDetails();

    return 0;
}
