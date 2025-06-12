#include <iostream>
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
        cout << "Student Name: " << studentName << ", ID: " << studentID << endl;
    }

    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Alice", 1001);
    Student s2("Bob", 1002);
    Student s3("Charlie", 1003);

    s1.displayStudentInfo();
    s2.displayStudentInfo();
    s3.displayStudentInfo();

    Student::displayTotalStudents();

    return 0;
}

