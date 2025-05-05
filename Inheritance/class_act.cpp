#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Department {
public:
    string deptName;

    void getDepartmentData() {
        cout << "Enter department: ";
        cin >> deptName;
    }

    void displayDepartmentData() {
        cout << "Department: " << deptName << endl;
    }
};

class Employee : public Person, public Department {
public:
    int empID;

    void getEmployeeData() {
        getPersonData();
        getDepartmentData();
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void displayEmployeeData() {
        displayPersonData();
        displayDepartmentData();
        cout << "Employee ID: " << empID << endl;
    }
};

int main() {
    Employee e;
    e.getEmployeeData();
    e.displayEmployeeData();
    return 0;
}
