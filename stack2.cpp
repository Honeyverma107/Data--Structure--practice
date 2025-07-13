#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Pop top element
    s.pop(); // Removes 30
   
    // Print top element after pop
    if (!s.empty()) {
        cout << "Top element: " << s.top() << endl; // Should print 20
    } else {
        cout << "Stack is empty" << endl;
    }

    return 0;
}
