#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float height = 5.9f;
    char grade = 'A';
    double pi = 3.14159;
    bool isStudent = true;

    cout << "int age = " << age << " (Size: " << sizeof(age) << " bytes)" << endl;
    cout << "float height = " << height << " (Size: " << sizeof(height) << " bytes)" << endl;
    cout << "char grade = " << grade << " (Size: " << sizeof(grade) << " bytes)" << endl;
    cout << "double pi = " << pi << " (Size: " << sizeof(pi) << " bytes)" << endl;
    cout << "bool isStudent = " << isStudent << " (Size: " << sizeof(isStudent) << " bytes)" << endl;

    return 0;
}
