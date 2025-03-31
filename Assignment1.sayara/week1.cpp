#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void makeSound() {
        cout << "Animals make sounds!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof woof!" << endl;
    }
};

// Another Derived class
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow meow!" << endl;
    }
};

int main() {
    Animal animal;
    Dog dog;
    Cat cat;

    // Calling functions
    animal.makeSound();
    dog.makeSound();
    cat.makeSound();

    return 0;
}
