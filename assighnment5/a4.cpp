#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void displayPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Department {
protected:
    string deptName;

public:
    void getDeptData() {
        cout << "Enter department name: ";
        getline(cin, deptName);
    }

    void displayDeptData() {
        cout << "Department: " << deptName << endl;
    }
};


class Employee : public Person, public Department {
private:
    int empID;

public:
    void getEmployeeData() {
        getPersonData();
        getDeptData();
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void displayEmployeeData() {
        displayPersonData();
        displayDeptData();
        cout << "Employee ID: " << empID << endl;
    }
};

int main() {
    Employee emp;
    
    cout << "--- Enter Employee Details ---" << endl;
    emp.getEmployeeData();
    
    cout << "\n--- Employee Information ---" << endl;
    emp.displayEmployeeData();

    return 0;
}
