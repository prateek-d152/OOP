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

// Initialize static member
int Student::totalStudents = 0;

int main() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);
    Student s3("Charlie", 103);

    s1.displayStudentInfo();
    s2.displayStudentInfo();
    s3.displayStudentInfo();

    Student::displayTotalStudents();

    return 0;
}
