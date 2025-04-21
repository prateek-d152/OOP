#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating food " << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking " << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
    return 0;
}
