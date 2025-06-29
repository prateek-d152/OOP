#include <iostream>
#include <string>

class Student {
private:
    std::string studentName;     
    int studentID;                
    static int totalStudents;     

public:
    
    Student(std::string name, int id) {
        studentName = name;
        studentID = id;
        totalStudents++;          
    }

    
    void displayStudentInfo() {
        std::cout << "Student Name: " << studentName << ", Student ID: " << studentID << std::endl;
    }

    
    static void displayTotalStudents() {
        std::cout << "Total Students: " << totalStudents << std::endl;
    }
};


int Student::totalStudents = 0;

int main() {
    
    Student s1("Sambrid", 101);
    Student s2("Kribesh", 102);
    Student s3("Anubhav", 103);


    s1.displayStudentInfo();
    s2.displayStudentInfo();
    s3.displayStudentInfo();


    Student::displayTotalStudents();

    return 0;
}
