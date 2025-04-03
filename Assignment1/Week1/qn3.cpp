//3.	Write a C++ program that takes two numbers as input from the user and performs the following operations. 
//Print the results of each operation.
//a.	Addition.
//b.	Subtraction.
//c.	Multiplication.
//d.	Division
//e.	Modulus
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first input: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int addition = num1 + num2;
    cout << addition << endl;

    int substraction = num1 - num2;
    cout << substraction << endl;

    int multiplication = num1 * num2;
    cout << multiplication << endl;

    float division = num1 / num2;
    cout << division << endl;
    
    float modulus = num1 % num2;
    cout << modulus;

    return 0;
}