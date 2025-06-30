#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 9, 1, 5, 6};
    //add elements
    numbers.push_back(10);
    numbers.push_back(15);

    //sort those elements
    sort(numbers.begin(), numbers.end());

    //display
    cout << "Sorted Vector: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    //reversing array
    reverse(numbers.begin(), numbers.end());
    cout << "Reversed Vector: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    //find element
    if (find(numbers.begin(), numbers.end(), 5) != numbers.end()) {
        cout << "5 exists in the vector";
    } else {
        cout << "5 not found";
    }

    return 0;
}
