#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

class GoldenRetriever : public Dog {
public:
    void fetch() {
        cout << "Golden Retriever is fetching." << endl;
    }
};

int main() {
    GoldenRetriever gr;
    gr.eat();   // from Animal
    gr.bark();  // from Dog
    gr.fetch(); // own method

    return 0;
}
