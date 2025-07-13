#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Creating a linked list
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Print original linked list
    cout << "Original list:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    // Convert to Circular Linked List
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;  // Move to last node
    }
    temp->next = head;  // Link last node to head (circular connection)

    // Print Circular Linked List (Limited to avoid infinite loop)
    cout << "Circular linked list (first 10 elements to avoid infinite loop):\n";
    temp = head;
    int count = 0;
    while (count < 12) {  // Limit output to avoid infinite loop
        cout << temp->data << " -> ";
        temp = temp->next;
        count++;
    }
    cout << "... (circular) \n";

    return 0;
}
