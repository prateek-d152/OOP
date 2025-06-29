#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string brand; 

public:
    
    void honk() {
        std::cout << "Vehicle makes a sound!" << std::endl;
    }

    
    void setBrand(const std::string& b) {
        brand = b;
    }
};


class Car : public Vehicle {
public:
    std::string model;  

    
    void displayCarInfo() {
        std::cout << "Brand: " << brand << ", Model: " << model << std::endl;
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
