#include <iostream>
using namespace std;

class Person {
public:
    void personRole() {
        cout << "Role: Person" << endl;
    }
};

class Employee : public Person {
public:
    void employeeRole() {
        cout << "Role: Employee" << endl;
    }
};

class Department {
public:
    void departmentRole() {
        cout << "Role: Department" << endl;
    }
};

class Manager : public Employee, public Department {
public:
    void managerRole() {
        cout << "Role: Manager" << endl;
    }
};

int main() {
    Manager m;
    m.personRole();      // from Person via Employee
    m.employeeRole();    // from Employee
    m.departmentRole();  // from Department
    m.managerRole();     // from Manager

    return 0;
}
