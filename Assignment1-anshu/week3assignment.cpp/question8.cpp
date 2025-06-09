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
        age = 18;
        city = "Unknown";
    }

    Profile(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    void displayProfile() {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    Profile p1;
    Profile p2("Sita");
    Profile p3("Gita", 22, "Pokhara");

    p1.displayProfile();
    p2.displayProfile();
    p3.displayProfile();

    return 0;
}
