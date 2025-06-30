#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int id;
    string name;
    float gpa;

public:
    Student(int studentId, string studentName) {
        id = studentId;
        name = studentName;
        gpa = 0.0;
    }

    void updateGPA(float inMarks, float &outGPA) {
        gpa = inMarks / 25.0;  
        outGPA = gpa;          
    }

    void modifyName(string &nameRef) {
        name = nameRef;        
    }

    void printInfo() {
        cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
    }
};

int main() {
    Student s1(101, "Alice");

    float marks = 85.0;
    float calculatedGPA;

    s1.updateGPA(marks, calculatedGPA);
    cout << "Calculated GPA: " << calculatedGPA << endl;

    string newName = "Alice Smith";
    s1.modifyName(newName);

    s1.printInfo();

    return 0;
}
