#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Department {
public:
    string deptName;
};

class Employee : public Person, public Department {
public:
    int empID;

    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // flush newline
        cout << "Enter department name: ";
        getline(cin, deptName);
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age
             << "\nDepartment: " << deptName << "\nEmployee ID: " << empID << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();

    return 0;
}
