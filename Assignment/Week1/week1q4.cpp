#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks (out of 100): " << endl;
    cin >> marks;


    if (marks >= 90){
        cout << "Grade: A" << endl;
    }
    else if (marks >=80 && marks <= 89){
        cout << "Grade: B" << endl;
    }
    else if (marks >=70 && marks <= 79){
        cout << "Grade: C" << endl;
    }
    else if (marks >=60 && marks <=69){
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F" << endl;
    }
    cout << "Thank you for using the grading system!" << endl;
}