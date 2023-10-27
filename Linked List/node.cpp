#include <iostream>
using namespace std;

// Definition of Node
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int num)
    {
        this->data = num;
        this->next = nullptr;
    }
};

void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtLast(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == nullptr)
    {

        head = temp;
        return;
    }

    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->next = temp;
}

void insertAtAnyPosition(Node *&head, int position, int value)
{

    if (position < 1)
    {
        cout << "invalid position!";
        return;
    }
    else
    {

        Node *new_node = new Node(value);
        Node *curr = head;
        int count = 1;
        while (count < position - 1)
        {
            curr = curr->next;
            count++;
        }
        new_node->next = curr->next;
        curr->next = new_node;
    }
}

void deleteAtFront(Node *&head)
{
    if(head==NULL){
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void deleteAtLast(Node *&head)
{
    if(head==NULL){
        return;
    }

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp;
    ;
}

void deleteAtAnyPosition(Node *&head, int position)
{
    Node *curr = head;
    Node *temp = head;
    int count = 1;
    if (position < 1)
    {
        cout << "Invalid position!!" << endl;
        return;
    }
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    curr = temp->next;
    temp->next = curr->next;
    delete curr;
}

void deleteByValue(Node *&head, int value)
{
    Node *curr = head;
    Node *temp = head;
    int count = 1;
    while (temp->next->data != value)
    {
        temp = temp->next;
        count++;
    }
    curr = temp->next;
    temp->next = curr->next;
    delete (curr);
}

void traverseList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next != nullptr)
        {
            cout << "->";
        }
        temp = temp->next;
    }
    cout << "->NULL" << endl;
}

int main()
{
    Node *node1 = nullptr;
    insertAtHead(node1, 20);
    insertAtHead(node1, 30);
    insertAtHead(node1, 40);

    traverseList(node1);

    insertAtLast(node1, 100);
    insertAtLast(node1, 200);

    traverseList(node1);
    insertAtAnyPosition(node1, 2, 500);
    traverseList(node1);
    // deleteAtAnyPosition(node1,4);
    // traverseList(node1);
    // deleteByValue(node1,30);
    // traverseList(node1);
    // deleteAtFront(node1);
    // deleteAtLast(node1);
    // traverseList(node1);
    

    return 0;
}
