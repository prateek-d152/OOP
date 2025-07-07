#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // shared across all objects
    int id;           // unique to each object

public:
    Counter() {
        count++;
        id = count;
    }

    void display() {
        cout << "ID: " << id << ", Total Count: " << count << endl;
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
