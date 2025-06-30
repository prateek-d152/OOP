#include <iostream>
using namespace std;

class Matrix{
public:
    int a, b, c, d;

    Matrix (int a = 0, int b = 0, int c = 0, int d = 0) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    Matrix operator + (Matrix m) {
        Matrix result;
        result.a = a + m.a;
        result.b = b + m.b;
        result.c = c + m.c;
        result.d = d + m.d;
        return result;
    }

    void display() {
        cout << "[" << a << " " << b << "]" << endl;
        cout << "[" << c << " " << d << "]" << endl;
    }
};

int main() {
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);

    Matrix sum = m1 + m2;

    cout << "Sum of Matrices:" << endl;
    sum.display();

    return 0;
}
