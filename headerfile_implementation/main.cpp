#include <iostream>
#include "car.h" 

int main() {
    Car myCar(100);  
    std::cout << "Car Speed: " << myCar.getSpeed() << " km/h" << std::endl;

    myCar.setSpeed(150);  
    std::cout << "New Car Speed: " << myCar.getSpeed() << " km/h" << std::endl;

    return 0;
}
