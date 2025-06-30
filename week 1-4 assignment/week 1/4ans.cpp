#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"Enter your marks to check grade:";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"Grade A";
    }
    else if(marks>=80)
    {
        cout<<"Grade B";
    }
    else if(marks>=70)
    {
        cout<<"Grade C";
    }
    else if(marks>=60)
    {
        cout<<"Grade D";
    }
    else 
    {
        cout<<"Grade F";
    }
}
