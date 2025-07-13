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

    Node* head = new Node(arr[0]);  // Create the first node
    Node* temp = head;              // Pointer to traverse and insert nodes

    // Creating linked list
    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);  // Create and link new node
        temp = temp->next;              // Move to new node
    }

    // Printing linked list
    temp = head; // Reset temp to head
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    // Deleting the linked list properly
    if (head != NULL) {
        Node* temp = head;  // Store current head node
        head = head->next;  // Move head to next node
        delete temp;        // Delete old head node
    }

   
    // Printing list after deleting the first node
    cout << "After deleting first node:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";



    return 0;
}
