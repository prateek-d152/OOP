#include <iostream>
using namespace std;

class Student {
    private:
         int marks;
    public:

    int rollNo;
    void setMArks(int m){
        marks =m;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.rollNo = 10;
    // s1.marks = 85;
    s1.setMArks(85);
    s1.display();
    return 0;
}




