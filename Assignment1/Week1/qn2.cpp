//2.	Write a C++ program that declares and initializes variables of 
//different data types (int, float, char, double, bool). Print the values of these variables along 
//with their sizes using sizeof().
#include <iostream>
using namespace std;

int main() {
    int num = 20;
    float num1 = 33.98;
    char letter = 's';
    double num2 = 565.0008;
    bool word = "Shobha";
    cout << num << endl << num1 << endl << letter << endl << num2 << endl << word;
   
}