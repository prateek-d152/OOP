#include <iostream>
using namespace std;

class Parent {
protected:
    int number;

public:
    void setNumber(int n) {
        number = n;
    }
};

class Child : public Parent {
public:
    void showNumber() {
        cout << "Accessed protected number: " << number << endl;
    }
};

int main() {
    Child c;
    c.setNumber(42);    
    c.showNumber();     

    class Grandchild: public Child {
    public:
        void adddisplaynumber() {
            number += 10;
            cout << "Accessed protected number: " << number << endl;
        }
    };

    return 0;
}


