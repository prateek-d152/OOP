#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int studentID;

    static int totalStudents;

public:
    Student(string name, int id) {
        studentName = name;
        studentID = id;
        totalStudents++;  
    }

    void displayStudentInfo() {
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "---------------------------" << endl;
    }

    static void displayTotalStudents() {
        cout << "Total Students Created: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Kribesh", 101);
    Student s2("Anisha", 102);
    Student s3("Ravi", 103);

    s1.displayStudentInfo();
    s2.displayStudentInfo();
    s3.displayStudentInfo();

    Student::displayTotalStudents();

    return 0;
}
