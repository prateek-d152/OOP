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
        cout << "Total objects created: " << count << endl;


        /*
        Explanation:
        Static functions belong to the class, not to any specific object.
        Therefore, they do not have access to 'this' pointer or any non-static members like 'id',
        which are tied to specific instances of the class.
        */
    }

    void showID() {
        cout << "Object ID: " << id << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    c1.showID();
    c2.showID();
    c3.showID();

    Counter::showCount();

    return 0;
}
