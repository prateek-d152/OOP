#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal a;
    Cat c;

    a.speak();   // Output: Animal makes a sound
    c.speak();   // Output: Cat meows
}

