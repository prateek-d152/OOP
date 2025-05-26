#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    string name;

    Employee(string n) {
        name =n ;
    }

    virtual void calculateSalary() {
        cout << "Calculating salary in base class." << endl;
    }

    virtual ~Employee() {}
};

// Derived class 1
class FullTimeEmployee : public Employee {
public:
    int monthlySalary;

    FullTimeEmployee(string n, int salary) : Employee(n), monthlySalary(salary) {}

    void calculateSalary() override {
        cout << "Full-time salary for " << name << " is: " << monthlySalary << " INR/month" << endl;
    }
};

// Derived class 2
class PartTimeEmployee : public Employee {
public:
    int hourlyRate, hoursWorked;

    PartTimeEmployee(string n, int rate, int hours) : Employee(n), hourlyRate(rate), hoursWorked(hours) {}

    void calculateSalary() override {
        cout << "Part-time salary for " << name << " is: " << hourlyRate * hoursWorked << " INR/month" << endl;
    }
};

// Function to demonstrate runtime polymorphism using reference
void displaySalary(Employee& emp) {
    emp.calculateSalary();  // Calls the correct overridden function
}

int main() {
    FullTimeEmployee emp1("kabish", 50000);
    PartTimeEmployee emp2("Shija", 5000, 20);

    displaySalary(emp1);  // Output: Full-time salary...
    displaySalary(emp2);  // Output: Part-time salary...

    return 0;
}
