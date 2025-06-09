#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Age: " << endl;
        cin >> age;
    }

    void displayPerson() {
        cout << "My name is " << name << " and my age is " << age << endl;
    }
};

class Department {
public:
    string name;

    void getDepartmentData() {
        cout << "Enter Department Name: " << endl;
        cin >> name;
    }

    void displayDepartment() {
        cout << "My Department name is " << name << endl;
    }
};

class Employee : public Person, public Department {
public:
    int employeeID;

    void getEmployeeData() {
        getPersonData();
        getDepartmentData();
        cout << "Enter Employee ID: " << endl;
        cin >> employeeID;
    }

    void displayEmployee() {
        displayPerson();
        displayDepartment();
        cout << "My Employee ID is " << employeeID << endl;
    }
};

int main() {
    Employee emp;
    emp.getEmployeeData();
    emp.displayEmployee();
    return 0;
}