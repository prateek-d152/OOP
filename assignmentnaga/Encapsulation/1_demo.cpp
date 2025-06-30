#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setDetails("Alice", 20);
    s1.display();

    return 0;
}
