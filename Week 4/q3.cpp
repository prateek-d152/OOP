#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void honk() {
        cout << "Vehicle makes a sound!" << endl;
    }

    void setBrand(const string& b) {
        brand = b;
    }

    string getBrand() const {
        return brand;
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
    myCar.setBrand("Toyota");  
    myCar.model = "Corolla";   
    myCar.honk();              
    myCar.displayCarInfo();    

    return 0;
}
