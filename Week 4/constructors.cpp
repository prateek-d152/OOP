#include <iostream>
using namespace std;


class Profile{
    private:
        string name;
        int age;
        string city;
    public:

    Profile(){
        name = "unknown";
        age=0;
        city = "Not set";

        cout << "Name: " << name << ", Age: "<< age << ",City: "<< city << endl;
    };


};

int main (){
    Profile p1;
    return 0;
    
}