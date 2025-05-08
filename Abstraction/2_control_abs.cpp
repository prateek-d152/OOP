#include <iostream>
using namespace std;

class Car {
public:
    void startCar() {
        checkEngine();
        injectFuel();
        cout << "Car started!" << endl;
    }

private:
    void checkEngine() {
        cout << "(Checking engine...)" << endl;
    }

    void injectFuel() {
        cout << "(Injecting fuel...)" << endl;
    }
};

int main() {
    Car myCar;
    myCar.startCar(); 
    return 0;
}
