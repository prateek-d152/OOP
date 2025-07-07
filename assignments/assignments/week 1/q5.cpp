//Write a C++ program that takes an integer (1-7) as input from the user and prints the corresponding day of the week using a switch statement. For example:
//If the user enters a number outside this range, display an error message.

#include<iostream>
using namespace std;

int main(){
    
    int day;
    
    cout<< " Enter an integer from 1 to 7: ";
    cin>> day;


    switch (day) {
        case 1:
          cout << "Monday";
          break;
        case 2:
          cout << "Tuesday";
          break;
        case 3:
          cout << "Wednesday";
          break;
        case 4:
          cout << "Thursday";
          break;
        case 5:
          cout << "Friday";
          break;
        case 6:
          cout << "Saturday";
          break;
        case 7:
          cout << "Sunday";
          break;
        default:
          cout << "Invalid input! Please enter a number between 1 and 7.";
      
    return 0;
}
}








