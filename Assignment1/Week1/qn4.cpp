//Write a C++ program that asks the user to enter their marks (out of 100) 
//and determines their grade based on the following criteria:
//a.	90 and above → Grade A
//b.	80 to 89 → Grade B
//c.	70 to 79 → Grade C
//d.	60 to 69 → Grade D
//e.	Below 60 → Grade F
//Use  if-else statements to implement this logic.
#include <iostream>
using namespace std;
int main(){
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(90<=marks){
        cout << "Grade A";
    } else if(80<marks<89){
        cout << "Grade B";
    } else if(70<marks<79){
        cout << "Grade C";
    } else if(60<marks<69){
        cout << "Grade D";
    } else {
        cout << "Grade F";
    }
}
