#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};


class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};


class GoldenRetriever : public Dog {
public:
    void fetch() {
        std::cout << "Golden Retriever is fetching." << std::endl;
    }
};

int main() {
    
    GoldenRetriever gr;

    
    gr.eat();    
    gr.bark();  
    gr.fetch();  

    return 0;
}
