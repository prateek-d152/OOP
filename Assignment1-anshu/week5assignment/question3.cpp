#include <iostream>
using namespace std;

// First level - Base class
class Grandparent {
public:
    void showGrandparent() {
        cout << "This is Grandparent class" << endl;
    }
};

// Second level - Inherits from Grandparent
class Parent : public Grandparent {
public:
    void showParent() {
        cout << "This is Parent class" << endl;
    }
};

// Third level - Inherits from Parent (which inherits from Grandparent)
class Child : public Parent {
public:
    void showChild() {
        cout << "This is Child class" << endl;
    }
};

int main() {
    cout << "=== Multilevel Inheritance Demo ===" << endl;
    
    // Create an object of Child class
    Child myChild;
    
    cout << "Calling methods from Child object:" << endl;
    
    // Call method from Grandparent class (2 levels up)
    myChild.showGrandparent();
    
    // Call method from Parent class (1 level up)
    myChild.showParent();
    
    // Call method from Child class (own method)
    myChild.showChild();
    
    cout << "\nInheritance chain: Grandparent -> Parent -> Child" << endl;
    cout << "Child class has access to all methods from its ancestors" << endl;
    
    return 0;
}