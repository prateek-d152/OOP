#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void honk() {
        cout << "Vehicle makes a sound!" << endl;
    }
};

class Car : public Vehicle {
public:
    string model;

    void displayCarInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }

    void setBrand(string b) {
        brand = b;
    }
};

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.model = "Corolla";

    myCar.honk();
    myCar.displayCarInfo();

    return 0;
}
