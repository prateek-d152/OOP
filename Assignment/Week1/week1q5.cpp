#include <iostream>
using namespace std;

int main(){
    int day;

    cout << "Enter a number between 1 and 7: " << endl;
    cin >> day;

    if (day > 7 || day <1){
        cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }

    else if (day == 1){
        cout << "Monday" << endl;
    }
    else if (day == 2){
        cout << "Tuesday" << endl;
    }
    else if (day == 3){
        cout << "Wednesday" << endl;
    }
    else if (day == 4){
        cout << "Thursday" << endl;
    }
    else if (day == 5){
        cout << "Friday" << endl;
    }
    else if (day == 6){
        cout << "Saturday" << endl;
    }
    else {
        cout << "Sunday" << endl;
    }
}