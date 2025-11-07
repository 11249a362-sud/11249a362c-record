#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList() { head = NULL; }

    void insertEnd(int val) {
        Node* newNode = new Node{val, NULL, NULL};
        if (!head) head = newNode;
        else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyLinkedList d;
    d.insertEnd(1);
    d.insertEnd(2);
    d.insertEnd(3);
    d.display();
}
