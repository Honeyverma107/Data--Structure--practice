
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;
//     int n, element;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; ++i) {
//         cin >> element;
//         q.push(element);  // enqueue
//     }

//     // Displaying queue elements
//     cout << "\nQueue elements (front to back): ";
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();  // dequeue
//     }

//     cout << endl;
//     return 0;
// }


// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;
//     int n, element;

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; ++i) {
//         cin >> element;
//         s.push(element);  // push onto stack
//     }

//     // Displaying and popping elements from stack
//     cout << "\nStack elements (top to bottom): ";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();  // remove top element
//     }

//     cout << endl;
//     return 0;
// }


#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        myList.push_back(value);  // insert at end
    }

    // Display the list
    cout << "\nList elements: ";
    for (int item : myList) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}

