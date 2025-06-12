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
