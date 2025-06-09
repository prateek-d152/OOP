#include <iostream>
using namespace std;
class Matrix {
public:
    int a;
    int b;
    int c;
    int d;
    Matrix(int  e = 0, int f = 0, int g = 8, int h =2) {
    a = e;
    b = f;
    c = g;
    d = h;
    }
    Matrix operator - (Matrix m) {
        Matrix result;
        result.a= a- m.a;
        result.b= b- m.b;
        result.c = c- m.c;
        result.d = d- m.d;
        return result;
    }
    void display() {
        cout << a << " " << b << endl;
        cout << c << " " << d << endl;
    }
};
int main() {
    Matrix m1(4, 5, 6, 7);
    Matrix m2(1, 2, 3, 4);
    Matrix result = m1 - m2;
    cout << "Result of matrix subtraction:" << endl;
    result.display();
    return 0;
}
