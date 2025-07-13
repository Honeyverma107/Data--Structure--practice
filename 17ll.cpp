
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *pre;

    Node(int value) {
        data = value;
        next = NULL;
        pre = NULL;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof arr / sizeof arr[0];

    // Step 1: Create doubly linked list from array
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < n; i++) {
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->pre = temp;
        temp = newNode;
    }

    // Step 2: Insert 7 at the beginning
    Node *newStart = new Node(7);
    newStart->next = head;
    head->pre = newStart;
    head = newStart;

    // Step 3: Print the list
    cout << "Doubly linked list after inserting 7 at the start:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    

    return 0;
}
