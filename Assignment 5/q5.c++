#include <iostream>
using namespace std;

class Vehicle {
public:
    void vehicleInfo() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void carType() {
        cout << "This is a car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void bikeType() {
        cout << "This is a bike" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.vehicleInfo();
    c.carType();

    b.vehicleInfo();
    b.bikeType();

    return 0;
}
