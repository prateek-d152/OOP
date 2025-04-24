#include <iostream>
using namespace std;

class Person {
private:
    string ssn; // Private: only accessible within this class

protected:
    string address; // Protected: accessible in this class and derived classes

public:
    string name; // Public: accessible from anywhere

    // Method to set private and protected data
    void setData(string n, string s, string a) {
        name = n;
        ssn = s;
        address = a;
    }

    // Method to show private member
    void showSSN() {
        cout << "SSN: " << ssn << endl;
    }
};

class Employee : public Person {
private:
    string employeeID;

public:
    void setEmployeeID(string id) {
        employeeID = id;
    }

    void showEmployeeDetails() {
        cout << "Name: " << name << endl;           
        cout << "Address: " << address << endl;     
        cout << "Employee ID: " << employeeID << endl;

        // cout << "SSN: " << ssn << endl;          
    }
};


int main() {
    Employee emp;
    emp.setData("Alice", "111-22-3333", "45 Cherry Lane");
    emp.setEmployeeID("EMP001");

    emp.showEmployeeDetails();
    emp.showSSN(); // Public method of base class to access private data

    return 0;
}



