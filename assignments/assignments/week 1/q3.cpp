//Write a C++ program that takes two numbers as input from the user and performs the following operations. 
//Print the results of each operation.


#include<iostream>
using namespace std;

int main(){

    int a,b;
    int add,sub,mul,div,mod;

    cout<< "enter first number: ";
    cin>> a;
    cout<< "enter second number: ";
    cin>> b;

    add = a + b;
    mul = a * b;
    sub = a - b;
    div = a / b;
    mod = a % b;


    cout<< "Addition: " << add << endl;
    cout<< "Subtraction: " << sub << endl;
    cout<< "Multiplication: " << mul << endl;
    cout<< "Division: " << div << endl;
    cout<< "Modulus: " << mod <<endl;


    return 0;
}
