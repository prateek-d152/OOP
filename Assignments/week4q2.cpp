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
        // cout << id << endl; // ❌ ERROR: Cannot access non-static member 'id' in static function
        cout << "Current count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    Counter::showCount();

    /*
      Explanation:
      Static functions can only access static members. Attempting to access a non-static member
      like 'id' causes a compile-time error because static functions do not belong to any object.
    */

    return 0;
}
