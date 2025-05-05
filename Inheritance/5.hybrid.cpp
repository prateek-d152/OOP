#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a person." << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "I am studying." << endl;
    }
};

class Teacher : public Person {
public:
    void teach() {
        cout << "I am teaching." << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    void assist() {
        cout << "I assist in teaching and studying." << endl;
    }
};

int main() {
    TeachingAssistant ta;
    
    // Ambiguity occurs due to two 'Person' base classes
    // ta.display(); //Ambiguous!

    ta.Student::display();   // Resolving ambiguity
    ta.study();
    ta.teach();
    ta.assist();

    return 0;
}
