#include <iostream>
using namespace std;

class Student {
public:
    Student(string name) {
        cout << "Constructor called for " << name << endl;
    }

    ~Student() {
        cout << "Destructor called for Student" << endl;
    }
};

int main() {
    Student s1("Ali");  // Constructor runs here
    cout << "Inside main()" << endl;
}  // s1 goes out of scope here → Destructor runs
