#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;  
};

class Car : public Vehicle {
public:
    string model;

    void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }

    void setBrand(string b) {
        brand = b;
    }
};

int main() {
    Car myCar;

    myCar.setBrand("Hyundai");
    myCar.model = "i20";

    myCar.showInfo();

    return 0;
}
