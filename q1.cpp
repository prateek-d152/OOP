#include <iostream>
using namespace std;

class Counter {
    static int count;
    int id;

public:
    Counter() {
        count++;
        id = count;
    }

    void display() {
        cout << "Static Count: " << count << ", Object ID: " << id << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
