#include <iostream>
using namespace std;

class Vehicle {
public:
    void baseFunction() {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void showCar() {
        cout << "This is a Car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void showBike() {
        cout << "This is a Bike" << endl;
    }
};

int main() {
    Car c;
    Bike b;
    
    cout << "Car Object:\n";
    c.baseFunction();
    c.showCar();

    cout << "\nBike Object:\n";
    b.baseFunction();
    b.showBike();

    return 0;
}
