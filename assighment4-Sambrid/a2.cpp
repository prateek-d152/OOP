#include <iostream>

class Counter {
private:
    static int count;  // Static data member shared across all objects
    int id;            // Non-static data member unique to each object

public:
    // Constructor increments static count and assigns to this object's id
    Counter() {
        count++;
        id = count;
    }

    // Static member function
    static void showCount() {
        std::cout << "Total objects created: " << count << std::endl;

        // Uncommenting the following line will cause a compile-time error
        // std::cout << "ID: " << id << std::endl;

        /*
        ❌ ERROR Explanation:
        Static functions do not belong to any specific object instance,
        so they do not have access to non-static (instance) members like 'id'.
        'id' exists only when an object is instantiated,
        but static methods can be called even without any object.
        */
    }
};

// Define and initialize the static member outside the class
int Counter::count = 0;

int main() {
    // Create several Counter objects
    Counter c1;
    Counter c2;
    Counter c3;

    // Call the static function to display count
    Counter::showCount();

    return 0;
}
