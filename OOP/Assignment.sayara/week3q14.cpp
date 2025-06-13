#include <iostream>
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
        age = 19;
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
    }
};

int main() {
    Profile defaultProfile("Dhiraj");
    Profile singleProfile("Sayara");
    Profile fullProfile("Asim", 20, "Kathmandu");

    cout << "Default Profile:" << endl;
    defaultProfile.displayProfile();

    cout << "\nSingle Profile:" << endl;
    singleProfile.displayProfile();

    cout << "\nFull Profile:" << endl;
    fullProfile.displayProfile();

    return 0;
}
