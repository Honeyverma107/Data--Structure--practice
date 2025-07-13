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
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof arr / sizeof(arr[0]);

    // Create doubly linked list from array
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < n; i++) {
        Node *newnode = new Node(arr[i]);
        temp->next = newnode;
        newnode->pre = temp;
        temp = newnode;  // ✅ correct this line
    }
   
    // Insert 7 at the end
    Node *newend = new Node(7);
    temp->next = newend;
    newend->pre = temp;
    newend=temp;

    // Print the list
    cout << "Doubly linked list after inserting 7 at the end:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
