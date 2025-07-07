#include <iostream>
using namespace std;

class Vehicle {
public:
    void showType() {
        cout << "This is a Vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void describe() {
        cout << "This is a Car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void describe() {
        cout << "This is a Bike." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.showType();
    c.describe();

    b.showType();
    b.describe();

    return 0;
}
