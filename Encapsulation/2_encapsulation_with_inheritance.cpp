#include <iostream>
using namespace std;

// Base class
class Person {
protected:  // now accessible to derived classes
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNumber;

public:
    void setRollNumber(int r) {
        rollNumber = r;
    }

    void showStudentInfo() {
        // name and age are accessible because they are protected
        cout << "Name (from base): " << name << endl;
        cout << "Age (from base): " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s;
    s.setData("Bob", 21);        // from base class
    s.setRollNumber(202);        // from derived class
    s.showStudentInfo();         // print all info

    return 0;
}
