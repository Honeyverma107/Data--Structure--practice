#include<iostream>
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
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create linked list
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Print original list
    cout << "Original List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Insert at position 3
    int pos = 3;  // 0-based index
    int value = 99;
    Node *newnode = new Node(value);

    if (pos == 0) {
        // Insert at head
        newnode->next = head;
        head = newnode;
    } else {
        temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position out of bounds!" << endl;
            return 1;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }

    // Print updated list
    cout << "List After Insertion: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
