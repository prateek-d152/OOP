#include <iostream>
using namespace std;


class Vehicle {
public:
    void describeVehicle() {
        cout << "This is a vehicle." << endl;
    }
};


class Car : public Vehicle {
public:
    void describeCar() {
        cout << "This is a car." << endl;
    }
};


class Bike : public Vehicle {
public:
    void describeBike() {
        cout << "This is a bike." << endl;
    }
};

int main() {
    Car myCar;
    Bike myBike;

    
    cout << "--- Car Info ---" << endl;
    myCar.describeVehicle(); 
    myCar.describeCar();     

    
    cout << "\n--- Bike Info ---" << endl;
    myBike.describeVehicle(); 
    myBike.describeBike();    

    return 0;
}
