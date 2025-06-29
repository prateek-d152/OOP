#include <iostream>
using namespace std;

/* class Student {
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
} */

//--------------2nd------------------------------------------------------------------
/* class Counter {
private:
    static int count;  
    int id;            

public:
    Counter() {
        count++;
        id = count;
    }

    static void showCount() {
        cout << "Total count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::showCount();

    return 0;
} */

//--------------------------------------3rd------------------------------------------------------------------
/* class Vehicle {
protected:
    string brand;

public:
    void honk() {
        cout << "Vehicle makes a sound!" << endl;
    }
};

class Car : public Vehicle {
public:
    string model;

    void setBrand(string b) {
        brand = b;  
    }

    void displayCarInfo() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

int main() {
    Car myCar;
    myCar.setBrand ("Toyota");
    myCar.model = "Corolla";

    myCar.honk();               
    myCar.displayCarInfo();     

    return 0;
} */

//----------------------------4th------------------------------------------------------------------------
/* class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

class GoldenRetriever : public Dog {
public:
    void fetch() {
        cout << "Golden Retriever is fetching." << endl;
    }
};

int main() {
    GoldenRetriever gr;
    gr.eat();    
    gr.bark();   
    gr.fetch();  

    return 0;
} */

//--------------------------5th-----------------------------------------------------------------------
class Shape {
public:
    void getArea() {
        cout << "Calculating area..." << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void getArea() { 
        double area = length * width;
        cout << "Rectangle area: " << area << endl;
    }
};

int main() {
    Rectangle r(5.0, 3.0);

    r.getArea();              
    r.Shape::getArea();      

    return 0;
}

