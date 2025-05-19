#include <iostream>
using namespace std;

class Profile{
    private:
        string name;
        int age;
        string city;
    public:
     
    Profile(){
        name = "Unknown";
        age = 0;
        city = "Not Set";
    }

    Profile(string userName){
        name = userName;
        age = 18;
        city = "Unknown";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }

    };


int main(){
    Profile p1;
    Profile p2("Alice");

    p1.display();
    p2.display();

    return 0;
}

