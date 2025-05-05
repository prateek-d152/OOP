#include <iostream>
using namespace std;


class Student {
    public:
        string name;
    
        // Default Constructor
        Student() {
            name = "Shuvam";
            cout << "Constructor Called for \n"<<name<<endl;
        }
    };

int main(){
    Student shuvam;
    return 0;
}
    