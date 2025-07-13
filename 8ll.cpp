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

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        swap(arr[i], arr[j]); // Swap elements
        i++;
        j--;
    }
}

// Function to convert an array back to a linked list
Node* arrayToLinkedList(int arr[], int size) {
    if (size == 0) return NULL;

    Node* head = new Node(arr[0]); // Create head node
    Node* temp = head;

    for (int i = 1; i < size; i++) {
        temp->next = new Node(arr[i]); // Create and link nodes
        temp = temp->next;
    }

    return head; // Return the new head
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

    // Convert linked list to array
    int arrayList[100]; // Assuming max 100 elements
    int size;
    linkedListToArray(head, arrayList, size);

    // Print the array
    cout << "Array representation of linked list: ";
    for (int i = 0; i < size; i++) {
        cout << arrayList[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverseArray(arrayList, size);

    // Print reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arrayList[i] << " ";
    }
    cout << endl;

    // Convert reversed array back to linked list
    Node* reversedHead = arrayToLinkedList(arrayList, size);

    // Print the new reversed linked list
    cout << "Reversed Linked List:\n";
    printLinkedList(reversedHead);

    return 0;
}
 