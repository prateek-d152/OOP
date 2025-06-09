#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping" << endl;
    }
};

int main() {
    Puppy p;
    p.eat();   // From Animal
    p.bark();  // From Dog
    p.weep();  // Own method
    return 0;
}
