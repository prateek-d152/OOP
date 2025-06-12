#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};

int main() {
    Book myBook;
    myBook.title = "To Kill a Mockingbird";
    myBook.author = "Harper Lee";
    myBook.publicationYear = 1960;

    myBook.displayInfo();
    return 0;
}
