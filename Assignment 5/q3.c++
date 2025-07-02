#include <iostream>
using namespace std;

class Grandparent {
public:
    void grandparentMethod() {
        cout << "Grandparent method called" << endl;
    }
};

class Parent : public Grandparent {
public:
    void parentMethod() {
        cout << "Parent method called" << endl;
    }
};

class Child : public Parent {
public:
    void childMethod() {
        cout << "Child method called" << endl;
    }
};

int main() {
    Child c;
    c.grandparentMethod();
    c.parentMethod();
    c.childMethod();

    return 0;
}
