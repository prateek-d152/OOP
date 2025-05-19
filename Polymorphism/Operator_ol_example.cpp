#include <iostream>
using namespace std;

class Box {
public:
    int size;

    Box(int s) {
        size = s;
    }

    Box operator + (Box other) {
        return Box(size + other.size);
    }

    void display() {
        cout << "Box size: " << size << endl;
    }
};

int main() {
    Box box1(10);
    Box box2(20);

    Box result = box1 + box2;  

    cout << result.size << endl;
    result.display();          

    return 0;
}
