#include <iostream>
using namespace std;

class Grandparent {
public:
    void showGrandparent() {
        cout << "This is the Grandparent class." << endl;
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child c;
    c.showGrandparent();
    c.showParent();
    c.showChild();

    return 0;
}
