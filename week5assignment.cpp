// question 1 
#include <iostream>
using namespace std;

class Counter {
    static int count;
    int id;
public:
    Counter() {
        count++;
        id = count;
    }

    void display() {
        cout << "Static Count: " << count << ", Object ID: " << id << endl;
    }
};

int Counter::count = 0;



// question 2 

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};


// question 3
class Grandparent {
public:
    void showGrandparent() {
        cout << "I am Grandparent" << endl;
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "I am Parent" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "I am Child" << endl;
    }
};


// question 4
class Person {
protected:
    string name;
    int age;
public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Department {
protected:
    string deptName;
public:
    void inputDepartment() {
        cout << "Enter department: ";
        cin >> deptName;
    }
};

class Employee : public Person, public Department {
    int empId;
public:
    void input() {
        inputPerson();
        inputDepartment();
        cout << "Enter employee ID: ";
        cin >> empId;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Department: " << deptName << ", Employee ID: " << empId << endl;
    }
};


// question 5
class Vehicle {
public:
    void info() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void carType() {
        cout << "This is a car" << endl;
    }
};

class Bike : public Vehicle {
public:
    void bikeType() {
        cout << "This is a bike" << endl;
    }
};


// question 6
class Person {
public:
    void showPerson() {
        cout << "Role: Person" << endl;
    }
};

class Employee : public Person {
public:
    void showEmployee() {
        cout << "Role: Employee" << endl;
    }
};

class Department {
public:
    void showDepartment() {
        cout << "Role: Department" << endl;
    }
};

class Manager : public Employee, public Department {
public:
    void showManager() {
        cout << "Role: Manager" << endl;
    }
};

// main function 
int main() {
    // 1. Static vs Non-Static
    Counter c1, c2, c3;
    c1.display();
    c2.display();
    c3.display();

    cout << "------------------------" << endl;

    // 2. Single Inheritance
    Dog d;
    d.speak();
    d.bark();

    cout << "------------------------" << endl;

    // 3. Multilevel Inheritance
    Child ch;
    ch.showGrandparent();
    ch.showParent();
    ch.showChild();

    cout << "------------------------" << endl;

    // 4. Multiple Inheritance
    Employee emp;
    emp.input();
    emp.display();

    cout << "------------------------" << endl;

    // 5. Hierarchical Inheritance
    Car car;
    Bike bike;
    car.info();
    car.carType();
    bike.info();
    bike.bikeType();

    cout << "------------------------" << endl;

    // 6. Hybrid Inheritance
    Manager m;
    m.showPerson();
    m.showEmployee();
    m.showDepartment();
    m.showManager();

    return 0;
}
