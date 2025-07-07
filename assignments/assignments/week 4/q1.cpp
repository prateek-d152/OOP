#include <iostream>
using namespace std;

class Student {
private:
    string studentName;
    int studentID;
    static int totalStudents; // static member

public:
    Student(string name, int id) {
        studentName = name;
        studentID = id;
        totalStudents++;
    }

    void displayStudentInfo() {
        cout << "Student Name: " << studentName << ", ID: " << studentID << endl;
    }

    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0; // define static member

int main() {
    Student s1("Sita", 1);
    Student s2("Ram", 2);
    Student s3("Gita", 3);

    s1.displayStudentInfo();
    s2.displayStudentInfo();
    s3.displayStudentInfo();

    Student::displayTotalStudents();

    return 0;
}
