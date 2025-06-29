#include <iostream>
using namespace std;


class Person {
public:
    void role() {
        cout << "I am a Person." << endl;
    }
};


class Employee : public Person {
public:
    void role() {
        cout << "I am an Employee." << endl;
    }
};


class Department {
public:
    void role() {
        cout << "I belong to a Department." << endl;
    }
};

class Manager : public Employee, public Department {
public:
    void role() {
        cout << "I am a Manager." << endl;
    }

    
    void showRoles() {
        Manager::role();          
        Employee::role();        
        Department::role();       
        Person::role();           
    }
};

int main() {
    Manager m;

    m.showRoles();

    return 0;
}
