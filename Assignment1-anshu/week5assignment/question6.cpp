#include <iostream>
using namespace std;

// Base class for the hierarchy
class Person {
public:
    void showPersonRole() {
        cout << "Role: Person - Basic human entity with fundamental rights" << endl;
    }
};

// First level inheritance (Multilevel part)
class Employee : public Person {
public:
    void showEmployeeRole() {
        cout << "Role: Employee - Works for the organization and receives salary" << endl;
    }
};

// Separate base class for multiple inheritance
class Department {
public:
    void showDepartmentRole() {
        cout << "Role: Department - Organizational unit with specific functions" << endl;
    }
};

// Hybrid inheritance: Multiple + Multilevel
// Manager inherits from Employee (multilevel) and Department (multiple)
class Manager : public Employee, public Department {
public:
    void showManagerRole() {
        cout << "Role: Manager - Leads teams, makes decisions, and manages resources" << endl;
    }
    
    void showAllRoles() {
        cout << "\n=== Manager's Complete Role Hierarchy ===" << endl;
        showPersonRole();      // From Person (through Employee)
        showEmployeeRole();    // From Employee
        showDepartmentRole();  // From Department
        showManagerRole();     // From Manager
    }
};

int main() {
    cout << "=== Hybrid Inheritance Demo ===" << endl;
    
    // Create a Manager object
    Manager mgr;
    
    cout << "Calling individual role methods:" << endl;
    
    // Call method from Person class (inherited through Employee)
    mgr.showPersonRole();
    
    // Call method from Employee class
    mgr.showEmployeeRole();
    
    // Call method from Department class
    mgr.showDepartmentRole();
    
    // Call method from Manager class
    mgr.showManagerRole();
    
    // Call comprehensive method
    mgr.showAllRoles();
    
    cout << "\nInheritance Structure:" << endl;
    cout << "Person -> Employee -> Manager" << endl;
    cout << "Department -> Manager" << endl;
    cout << "This combines multilevel (Person->Employee->Manager) and multiple (Employee+Department->Manager) inheritance" << endl;
    
    return 0;
}