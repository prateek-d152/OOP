#include <iostream>
using namespace std;

class Grandparent {
public:
    void showGrandparent() {
        cout << "I am Grandparent" << endl;
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "I am Parent" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "I am Child" << endl;
    }
};

int main() {
    Child c;
    c.showGrandparent();
    c.showParent();
    c.showChild();
    return 0;
}
