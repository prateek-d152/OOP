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
        cout << "Profile Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    
    Profile profile1;  
    Profile profile2("Alice");  
    Profile profile3("Bob", 25, "New York");  

    
    profile1.displayProfile();
    profile2.displayProfile();
    profile3.displayProfile();

    return 0;
}