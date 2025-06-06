#include <iostream>
using namespace std;

class Car {
public:
    static int totalCars;
    string carModel;
    int carID;

    Car(string model, int id) {
        carModel = model;
        carID = id;
        totalCars++;
    }

    static void displayTotalCars() {
        cout << "Total Cars created: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main() {
    Car car1("Ora", 11);
    Car car2("BYD", 12);
    Car car3("TATA", 13);

    Car::displayTotalCars();

    return 0;
}