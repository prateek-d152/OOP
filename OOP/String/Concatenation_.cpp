#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char str1[20];  
    char str2[] = "Hello";
    char str3[] = " World!";

    strcpy(str1, str2);
    cout << "After strcpy: " << str1 << endl;

    strcat(str1, str3);
    cout << "After strcat: " << str1 << endl;

    return 0;
}