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
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID  : " << studentID << endl;
        cout << "-----------------------------" << endl;
    }

    static void displayTotalStudents() {
        cout << "Total Students Created: " << totalStudents << endl;
    }
};


int Student::totalStudents = 0;

int main() {
    
    Student s1("Sayara Gautam", 101);
    Student s2("Asim Silwal", 102);
    Student s3("Dhiraj Chapagain", 103);


    s1.displayStudentInfo();
    s2.displayStudentInfo();
    s3.displayStudentInfo();

    Student::displayTotalStudents();

    return 0;
}
