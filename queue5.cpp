
#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverseFirstK(queue<int>& q, int k) {
    if (q.empty() || k <= 0 || k > q.size()) return;

    stack<int> s;

    // Step 1: Push first k elements into the stack
    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back the stack elements (they are reversed now)
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move the remaining elements to the back to maintain original order
    int size = q.size();
    for (int i = 0; i < size - k; ++i) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(3); 
    q.push(7); 
    q.push(10); 
    q.push(13); 
    q.push(8);
    q.push(5); 
    q.push(4); 

    int k = 3;
    reverseFirstK(q, k);

    // Print final queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
