#include <iostream>
using namespace std;

int main() {
    const int ROWS = 2;
    const int COLS = 2;
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    
    cout << "Enter elements of first matrix (2x2):" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    
    cout << "\nEnter elements of second matrix (2x2):" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    
    cout << "\nResultant matrix after addition:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl; 
    }

    return 0;
}