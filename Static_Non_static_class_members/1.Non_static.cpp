#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        void display() {
            cout << "Name: " << name << endl;
        }
    };


int main(){
    Student s1, s2;
    s1.name = "Ram";
    s2.name = "Shyam";
}
    
    
