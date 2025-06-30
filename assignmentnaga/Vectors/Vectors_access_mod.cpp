#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec = {10, 20, 30, 40, 50};

    // ----------------------
    // Accessing Elements
    // ----------------------
    // Access using indexing
    cout << "Element at index 2: " << vec[2] << endl;

    // Access using at() method (safer)
    cout << "Element at index 3 using at(): " << vec.at(3) << endl;

    // Access first and last elements
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    // Using iterator to access elements
    cout << "Using iterator: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // ----------------------
    // Modifying Elements
    // ----------------------
    // Modify using indexing
    vec[2] = 100;
    cout << "After modifying index 2: " << vec[2] << endl;

    // Modify using at() method (safer)
    vec.at(3) = 200;
    cout << "After modifying index 3 using at(): " << vec.at(3) << endl;

    // Using push_back() to add an element at the end
    vec.push_back(60);
    cout << "After pushing 60 at the end: " << vec.back() << endl;

    // Using assign() to replace all elements with new values
    vec.assign(5, 999);  // Assign five 999's to the vector
    cout << "After assigning five 999's: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // ----------------------
    // Inserting and Erasing Elements
    // ----------------------
    // Inserting an element at a specific position
    vec.insert(vec.begin() + 2, 555);  // Insert 555 at index 2
    cout << "After inserting 555 at index 2: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Erasing an element at a specific position
    vec.erase(vec.begin() + 3);  // Erase element at index 3
    cout << "After erasing element at index 3: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // Erasing a range of elements
    vec.erase(vec.begin() + 1, vec.begin() + 3);  // Erase from index 1 to 3
    cout << "After erasing elements from index 1 to 3: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // ----------------------
    // Modifying Multiple Elements
    // ----------------------
    // Loop through and double each element
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = vec[i] * 2;
    }
    cout << "After doubling each element: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
