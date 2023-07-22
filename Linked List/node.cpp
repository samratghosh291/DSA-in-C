#include <iostream>
using namespace std;

// Definition of Node
class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int num) {
        this->data = num;
        this->next = nullptr;
    }
};

void insertAtHead(Node*& head, int d) {
    // create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtLast(Node*& head, int data) {
    Node* temp = new Node(data);

    if (head == nullptr) {
        // If the list is empty, set head to the new node
        head = temp;
        return;
    }

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    tail->next = temp;
}

void traverseList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << "->NULL" << endl;
}

int main() {
    Node* node1 = nullptr;
    insertAtHead(node1, 20);
    insertAtHead(node1, 30);
    insertAtHead(node1, 40);

    traverseList(node1);

    insertAtLast(node1, 100);
    insertAtLast(node1, 200);

    traverseList(node1);

    return 0;
}
