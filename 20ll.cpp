
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
    int n = sizeof arr / sizeof(arr[0]);
    Node *head = new Node(arr[0]);
    Node *temp = head;

    // Create doubly linked list
    for (int i = 1; i < n; i++) {
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->pre = temp;
        temp = newNode;
    }

    // Print original list
    cout << "Original list:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    // Insert 7 at position 3 (0-based)
    int pos = 3;
    temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp != NULL) {
        Node *newpos = new Node(7);
        Node *nextNode = temp->next;

        temp->next = newpos;
        newpos->pre = temp;

        newpos->next = nextNode;
        if (nextNode != NULL)
            nextNode->pre = newpos;
    }

    // Print updated list
    cout << "List after inserting 7 at position 3:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
