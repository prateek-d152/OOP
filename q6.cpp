#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "I am a Person" << endl;
    }
};

class Employee : public Person {
public:
    void showEmployee() {
        cout << "I am an Employee" << endl;
    }
};

class Department {
public:
    void showDepartment() {
        cout << "I belong to a IT Department" << endl;
    }
};

class Manager : public Employee, public Department {
public:
    void showManager() {
        cout << "I am a Manager" << endl;
    }
};

int main() {
    Manager m;
    m.showPerson();
    m.showEmployee();
    m.showDepartment();
    m.showManager();
    return 0;
}
