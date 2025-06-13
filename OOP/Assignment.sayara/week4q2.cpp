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
        cout << "Total Count: " << count << endl;

        
    }
};

int Counter::count = 0;

int main() {
    
    Counter c1;
    Counter c2;
    Counter c3;
]
    Counter::showCount();

    return 0;
}
