#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
    int id;

public:
    Counter() {
        count++;
        id = count;
    }

    static void showCount() {
        // cout << "ID: " << id << endl; //  Error: Cannot access non-static member from static function
        cout << "Total count: " << count << endl;
    }
};

// Initialize static variable
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::showCount();

    return 0;
}
