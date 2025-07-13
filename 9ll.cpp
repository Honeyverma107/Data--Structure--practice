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

// Function to convert linked list to array
void linkedListToArray(Node* head, int arr[], int& size) {
    Node* temp = head;
    size = 0;  // Track number of elements

    while (temp != NULL) {
        arr[size++] = temp->data;  // Store data in array
        temp = temp->next;
    }
}

// Function to find the middle element
void middle(Node *head) {
    int arr[100]; // Array to store elements
    int size = 0;

    // Convert linked list to array
    Node* temp = head;
    while (temp != NULL) {
        arr[size++] = temp->data;
        temp = temp->next;
    }

    // Find the middle index and print the element
    int mid = size / 2;
    cout << "Middle element: " << arr[mid] << endl;
}

// Function to print a linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Creating linked list
    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    
    // Print original linked list
    cout << "Original linked list:\n";
    printLinkedList(head);

    // Convert linked list to array and print it
    int arrayList[100]; // Assuming max 100 elements
    int size;
    linkedListToArray(head, arrayList, size);

    cout << "Array representation of linked list: ";
    for (int i = 0; i < size; i++) {
        cout << arrayList[i] << " ";
    }
    cout << endl;

    // Find and print the middle element
    middle(head);

    return 0;
}
