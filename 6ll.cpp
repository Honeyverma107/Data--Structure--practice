#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create the first node (head)
    Node* head = new Node(arr[0]);
    Node* temp = head;  

    // Create the rest of the linked list
    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Print original list
    cout << "Original list:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    // Insert a new node at the end
    Node* tail = new Node(6);
    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;  // Move to the last node
    }
    temp->next = tail;  // Link last node to new node

    // Print updated list
    cout << "After inserting at the end:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
