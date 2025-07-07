#include <iostream>
using namespace std;

class Person {
public:
    void role() {
        cout << "Role: Person" << endl;
    }
};

class Employee : public Person {
public:
    void role() {
        cout << "Role: Employee" << endl;
    }
};

class Department {
public:
    void role() {
        cout << "Role: Department" << endl;
    }
};

class Manager : public Employee, public Department {
public:
    void role() {
        cout << "Role: Manager" << endl;
    }

    void showAllRoles() {
        Person::role();      // call Person's role
        Employee::role();    // call Employee's role
        Department::role();  // call Department's role
        role();              // own role
    }
};

int main() {
    Manager m;
    m.showAllRoles();

    return 0;
}
