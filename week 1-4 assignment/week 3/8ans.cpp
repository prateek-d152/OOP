#include <iostream>
#include <string>
using namespace std;

class Profile {
private:
    string name;
    int age;
    string city;

public:
    Profile() {
        name = "Unknown";
        age = 0;
        city = "Not Set";
    }

    Profile(string n) {
        name = n;
        age = 18;
        city = "Unknown";
    }

    Profile(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    void displayProfile() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    
    Profile p1;                        
    Profile p2("Shristi");               
    Profile p3("Rema", 25, "Kathmandu"); 

    cout << "Profile 1:" << endl;
    p1.displayProfile();

    cout << "Profile 2:" << endl;
    p2.displayProfile();

    cout << "Profile 3:" << endl;
    p3.displayProfile();

    return 0;
}
