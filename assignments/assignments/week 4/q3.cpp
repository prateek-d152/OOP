#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void honk() {
        cout << "Vehicle makes a sound!" << endl;
    }

    void setBrand(string b) {
        brand = b;
    }
};

class Car : public Vehicle {
public:
    string model;

    void displayCarInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main() {
    Car myCar;
    myCar.setBrand("Honda");    // Now using setter instead of accessing brand directly
    myCar.model = "Civic";

    myCar.honk();
    myCar.displayCarInfo();

    return 0;
}
