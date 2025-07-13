//remove two nodes
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
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof arr / sizeof arr[0];

    Node *head = new Node(arr[0]);
    Node *temp = head;

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

    // Delete last 2 nodes using fast-slow approach
    if (head == NULL || head->next == NULL) {
        delete head;
        head = NULL;
    } else if (head->next->next == NULL) {
        delete head->next;
        delete head;
        head = NULL;
    } else {
        Node *fast = head;
        Node *slow = NULL;

        while (fast->next != NULL && fast->next->next != NULL) {
            if (slow == NULL)
                slow = head;
            else
                slow = slow->next;
            fast = fast->next;
        }

        // slow now points to the node before the last 2
        Node *toDelete1 = slow->next;
        Node *toDelete2 = toDelete1->next;

        delete toDelete2;
        delete toDelete1;
        slow->next = NULL;
    }

    // Print list after deletion
    cout << "List after deleting last 2 nodes:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}
