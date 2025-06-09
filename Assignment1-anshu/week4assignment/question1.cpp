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
        cout << "Name: " << studentName << ", ID: " << studentID << endl;
    }

    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

// Static variable initialize
int Student::totalStudents = 0;

int main() {
    Student s1("Ram", 1);
    Student s2("Sita", 2);
    Student s3("Hari", 3);

    s1.displayStudentInfo();
    s2.displayStudentInfo();
    s3.displayStudentInfo();

    Student::displayTotalStudents();

    return 0;
}
