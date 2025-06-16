#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    for (Node* temp = head; temp != nullptr; temp = temp->next)
        cout << temp->data << " ";
    return 0;
}