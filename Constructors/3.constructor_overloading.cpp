#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor with one parameter
    Student(string n) {
        name = n;
        age = 18; // default age
    }

    // Parameterized constructor with two parameters
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                      // Calls default constructor
    Student s2("Alice");             // Calls constructor with 1 parameter
    Student s3("Bob", 21);           // Calls constructor with 2 parameters

    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    return 0;
}
