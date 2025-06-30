#include <iostream>
using namespace std;

//definition 
class Car {
public:
    //properties 
    string model;
    string brand;
    int year;
    string color;

    //methods
    void start() {
        cout << brand << " " << model << " is starting..." << endl;
    }

    void drive() {
        cout << brand << " " << model << " is driving..." << endl;
    }

    void stop() {
        cout << brand << " " << model << " is stopping..." << endl;
    }

    void displayInfo() {
        cout << "Model: " << model << ", Brand: " << brand
             << ", Year: " << year << ", Color: " << color << endl;
    }
};

int main() {
    //object
    Car car1;
    car1.model = "Ignis";
    car1.brand = "Maruti";
    car1.year = 2023;
    car1.color = "Blue";

    //object
    Car car2;
    car2.model = "Punch";
    car2.brand = "TATA";
    car2.year = 2024;
    car2.color = "White";

    car1.displayInfo();
    car1.start();
    car1.drive();
    car1.stop();

    cout << endl;

    car2.displayInfo();
    car2.start();
    car2.drive();
    car2.stop();

    return 0;
}
