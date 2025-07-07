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
        cout << "Count: " << count << endl;
        // cout << "ID: " << id << endl; ❌ Error!
        // Static functions can't access non-static members like `id` because they don't belong to a specific object.
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::showCount(); // Outputs total objects created

    return 0;
}
