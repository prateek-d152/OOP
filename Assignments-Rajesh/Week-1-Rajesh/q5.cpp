#include<iostream>
using namespace std;
int main()
{
    int daynum;
    cout<<"Enter a number(1-7):";
    cin>>daynum;
    switch(daynum)
    {
        case 1:
            cout<<"Sunday";
        break;
        case 2:
            cout<<"Monday";
        break;
        case 3:
            cout<<"Tuesday";
        break;
        case 4:
            cout<<"Wednesday";
        break;
        case 5:
            cout<<"Thursday";
        break;
        case 6:
            cout<<"Friday";
        break;
        case 7:
            cout<<"Saturday";
        break;
        default:
            cout<<"Number 1 to 7 ko bich ma matra halna milxa kya!!";
        break;
    }
}