#include<iostream>
using namespace std;

int main(){

    int rows=5;
    int i,j;

    for (i=1 ; i<=rows ; i++){
        for (j=rows ; j>=i; j--){
            cout<< "*" ;
        }
        cout << endl;
    }
    

    return 0;

}


