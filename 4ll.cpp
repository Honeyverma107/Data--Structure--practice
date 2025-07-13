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

    // Creating the linked list
    Node* head = new Node(arr[0]);  
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);  
        temp = temp->next;
    }

    // Printing linked list before deletion
    cout << "Original list:\n";
    temp = head;  
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    // Deleting the last node
    if (head == NULL) return 0;  // If list is empty, do nothing

    if (head->next == NULL) {  // If only one node exists
        delete head;
        head = NULL;
    } else {
        Node* curr = head;
        Node* prev = NULL;

        while (curr->next != NULL) {  // Traverse to the last node
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;  // Disconnect last node
        delete curr;        // Delete last node
    }

    // Printing linked list after deleting the last node
    cout << "After deleting last node:\n";
    temp = head;  
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
