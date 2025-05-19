#include <iostream>
using namespace std;

/*
class Car{
    public:
        string carModel;
        int carID;
        static int totalCars;
    
    Car(string m, int i){
        string carModel = m;
        int carID = i;
        totalCars++;
    }
    void displayInfo(){
        cout << "carModel: " << carModel << ", carID: " << carID << endl;
    }
    static void showTotalCars(){
        cout << "totalCars: " << totalCars << endl;
    }
};
int Car :: totalCars = 0;

int main(){
    Car car1("suzuki", 1);
    Car car2("mahindra", 2);

    car1.displayInfo();
    car2.displayInfo();
    Car::showTotalCars();
}
*/

//----------------- 2nd class ----------------------------

class Person{
    public:
        string name;
        int age;
    
    void getPerson(){
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "enter age: " << endl;
        cin >> age; 
    }
    void displayPerson(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Department{
    public: 
        string deprtName;

    void getDepartmentName(){
        cout << "Department name: " << endl;
        cin >> deprtName;
    }
    void displayDepart(){
        cout << "Department Name: " << deprtName << endl;
    }
};

class Employee: public Person, public Department{
    public: 
        int empId;

    void getEmployeeData(){
        cout << "Employee Id: " << endl;
        cin >> empId;
        getPerson();
        getDepartmentName();
    }
    void displayEmp(){
        cout << "Employee Id: " << empId << endl;
        displayPerson();
        displayDepart();
    }
};

int main(){
    Employee e1;
    e1.getEmployeeData();
    e1.displayEmp();

    return 0;
}