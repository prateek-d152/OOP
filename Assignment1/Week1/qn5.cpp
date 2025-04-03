//Write a C++ program that takes an integer (1-7) as input from the user and prints the corresponding day of the week using a switch statement. For example:
//●	1 → Monday
//●	2 → Tuesday
//●	3 → Wednesday
//○	...
//●	7 → Sunday
//If the user enters a number outside this range, display an error message.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter an number (1-7): ";
    cin >> number;
    if(number == 1){
        cout << "Sunday";
    } else if(number == 2){
        cout << "Monday";
    } else if (number == 3){
        cout << "Tuesday";
    } else if (number == 4){
        cout << "Wednesday";
    } else if (number == 5){
        cout << "Thursday";
    } else if (number == 6){
        cout << "Friday";
    } else if (number == 7){
        cout << "Saturday";
    } else {
        cout << "error";
    }
}