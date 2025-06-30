#include <iostream>
using namespace std;

class Room {
public:
    string type;
    Room(string t) : type(t) {}
};

class House {
    Room livingRoom;
public:
    House() : livingRoom("Living Room") {}
    void showRoom() {
        cout << "This house has a " << livingRoom.type << endl;
    }
};

int main() {
    House h;
    h.showRoom();
    return 0;
}
