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
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof arr / sizeof arr[0];
    int k = 3; // Remove every k-th node

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Print original list
    temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Now remove every k-th node
    temp = head;
    Node *prev = NULL;
    int count = 1;

    while (temp != NULL) {
        if (count % k == 0) {
            Node* toDelete = temp;
            if (prev != NULL) {
                prev->next = temp->next;
            } else {
                // if deleting head node
                head = temp->next;
            }
            temp = temp->next;
            delete toDelete;
        } else {
            prev = temp;
            temp = temp->next;
        }
        count++;
    }

    // Print updated list
    temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
