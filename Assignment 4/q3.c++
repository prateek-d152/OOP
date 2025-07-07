#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void honk() {
        cout << "Vehicle makes a sound!" << endl;
    }

    // Add setter for brand so it can be set from main
    void setBrand(const string& b) {
        brand = b;
    }
};

class Car : public Vehicle {
public:
    string model;

    void displayCarInfo() {
        // brand is accessible here because Car inherits from Vehicle
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main() {
    Car myCar;

    // Can't do myCar.brand = "Toyota"; directly because brand is protected
    myCar.setBrand("Toyota");

    myCar.model = "Corolla";

    myCar.honk();          // Inherited from Vehicle
    myCar.displayCarInfo(); // Own method

    return 0;
}
