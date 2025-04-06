//Write a C++ program that asks the user to enter their marks (out of 100) and determines their grade based on the following criteria:

#include<iostream>
using namespace std;

int main(){

    int m;

    cout<< "Enter your marks out of 100 in C programming: ";
    cin>> m;

    if(m>=90){
        cout<< "Grade A";
    }
    else if((m>=80) && (m<90)){
        cout<< "Grade B";
    }
    else if((m>=70) && (m<80)){
        cout<< "Grade C";
    }
    else if((m>=60) && (m<70)){
        cout<< "Grade D";
    }
    else{
        cout<<"Grade F";
    }

    return 0;
}


