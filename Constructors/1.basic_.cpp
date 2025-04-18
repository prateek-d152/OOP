#include <iostream>
using namespace std;


class Student {
    public:
        string name;
    
        // Default Constructor
        Student() {
            name = "Unknown";
            cout << "Constructor Called\n";
        }
    };

int main(){
    Student s1;
    return 0;
}
    