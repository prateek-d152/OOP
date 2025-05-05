#include <iostream>
using namespace std;

// Class that represents a person
class Person {
    
    // private members that will be hidden
    int socialID;
    string name;
public:

    // public members that are accessible
    Person(string n, int id) {
        name = n;
        socialID = id;
    }
    string getName() {
        return name;
    }
    bool validateID() {
        if (socialID <= 1001 && socialID >= 0)
            return true;
        else
            return false;
    }
};

int main() {
    
    Person p1("Ram", 10000);
    if (!p1.validateID()) cout << "Invalid SocialID" << endl;
    
    cout << p1.getName() <<endl ;
    return 0;
}