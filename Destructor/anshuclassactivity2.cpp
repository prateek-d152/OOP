#include <iostream>
#include <string>
using namespace std;

// Create a class with constructor
class Profile {
public:
    string name;
    int age;
    string city;

    // Create a destructor that displays "Destructor called"
    ~Profile() {
        cout <<"Destructor called for"<<name<< endl;
    }

    // Default constructor
    Profile(){
        name = "Unknown";
        age = 0;
        city = "not set";
        cout << "Default constructor called: " << name<< ", " << age << ", " << city << endl;
    }

    // Parameterized constructor
    Profile(string n) {
        name = n;
        age = 18;
        city = "unknown";
        cout << "Parameterized constructor called: " << name << ", " << age << ", " << city << endl;
    }
};

int main() {
    // First block
    {
        Profile obj1; // Default constructor

        Profile obj2("Anshu"); // Parameterized constructor
    } // Destructor for obj2 will be called here

    return 0;
}