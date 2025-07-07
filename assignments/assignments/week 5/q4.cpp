#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Department {
public:
    string deptName;

    void getDeptData() {
        cout << "Enter department name: ";
        cin.ignore(); // clear buffer
        getline(cin, deptName);
    }

    void showDeptData() {
        cout << "Department: " << deptName << endl;
    }
};

class Employee : public Person, public Department {
public:
    int empID;

    void getEmployeeData() {
        getPersonData();
        getDeptData();
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void showEmployeeData() {
        showPersonData();
        showDeptData();
        cout << "Employee ID: " << empID << endl;
    }
};

int main() {
    Employee e;
    e.getEmployeeData();
    cout << "\n--- Employee Details ---\n";
    e.showEmployeeData();

    return 0;
}
