#include <iostream>
using namespace std;

class Phone {
public:
    void call() {
        cout << "Calling someone..." << endl;
    }
};

class Person {
public:
    void usePhone(Phone p) {
        p.call();
    }
};

int main() {
    Phone phone;
    Person person;
    person.usePhone(phone);
    return 0;
}
