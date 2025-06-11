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
    Car car1;
    car1.setBrand("Toyota");
    car1.model = "Corolla";

    car1.honk();
    car1.displayCarInfo();

    return 0;
}
