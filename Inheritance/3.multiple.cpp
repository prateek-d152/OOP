#include <iostream>
using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

class Battery {
public:
    void chargeBattery() {
        cout << "Battery charging..." << endl;
    }
};

class ElectricCar : public Engine, public Battery {
public:
    void drive() {
        cout << "Driving electric car..." << endl;
    }
};

int main() {
    ElectricCar tesla;
    tesla.startEngine();      // From Engine
    tesla.chargeBattery();    // From Battery
    tesla.drive();            // Own method
    return 0;
}
