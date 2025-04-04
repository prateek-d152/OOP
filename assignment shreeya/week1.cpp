//------------------- Q.1 ------------------------
#include <iostream>
using namespace std;

/* int main() {
    cout << "Name: Shreeya" << endl;
    cout << "Age: 20" << endl;
    cout << "Favorite Hobby: Painting" << endl;

    return 0; 
}*/


//---------------------- Q.2 -----------------------

/* int main()
{
    int age = 20;
    float height = 5.4f;
    double pi = 3.14;
    char grade = 'A';
    bool student = true;

    cout << "int age = " << age << ", Size: " << sizeof(age) << " bytes" << endl;
    cout << "float height = " << height << ", Size: " << sizeof(height) << " bytes" << endl;
    cout << "double pi = " << pi << ", Size: " << sizeof(pi) << " bytes" << endl;
    cout << "char grade = '" << grade << "', Size: " << sizeof(grade) << " byte" << endl;
    cout << "bool student = " << student << ", Size: " << sizeof(student) << " byte" << endl;

    return 0;
}*/


//---------------------- Q.3 -----------------------

/* int main() {
    int a,b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b<< endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    return 0;
}*/


//---------------------- Q.4 -----------------------

/* int main(){

    float marks;
    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100." << endl;
    } else {
        if (marks >= 90) {
            cout << "Grade: A" << endl;
        } else if (marks >= 80) {
            cout << "Grade: B" << endl;
        } else if (marks >= 70) {
            cout << "Grade: C" << endl;
        } else if (marks >= 60) {
            cout << "Grade: D" << endl;
        } else {
            cout << "Grade: F" << endl;
        }
    }

    return 0;
}*/

//---------------------- Q.5 -----------------------

int main() {
    int day;

    cout << "Enter a number (1-7) to get the corresponding day: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}