#include <iostream>
using namespace std;
//create a Car class with: 1. Static Member: totalCars 2. Non-static: carModel, carID
class Car {
    public:
        static int totalCars;
        string carModel;
        int carId; 

    Car (string model, int id){
        carModel=model;
        carId=id;
        totalCars++;
    }

        void display() {
            cout << "CarModel: " << carModel <<", Car Id:" << carId << endl;
        }

        static void displayTotalCars(){
            cout<<"Total no of cars:"<< totalCars<<endl;
        }
    };

        int Car::totalCars = 0;

        int main(){

            Car car1("Deepal",1);
            Car car2("Tesla",2);
        

        car1.display();
        car2.display();
        Car::displayTotalCars();
        return 0;
    }


    
   