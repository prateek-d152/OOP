#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    Book myBook;
    myBook.title = "It ends with us";
    myBook.author = "colleen hoover";
    myBook.pages = 180;

    myBook.displayInfo();
    return 0;
}