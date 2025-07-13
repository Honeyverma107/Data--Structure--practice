
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};
    stack<int> s;
    stack<int> temp; // temporary stack to help with sorting

    // Step 1: Push all elements from vector to the stack
    for (int i = 0; i < v.size(); i++) {
        s.push(v[i]);
    }

    // Step 2: Sort the stack using a temporary stack
    while (!s.empty()) {
        int top = s.top();
        s.pop();

        // Move elements from temp to s if they're greater than current
        while (!temp.empty() && temp.top() > top) {
            s.push(temp.top());
            temp.pop();
        }

        // Insert the element in the right position in temp
        temp.push(top);
    }

    // Step 3: Copy back sorted elements into vector (optional)
    vector<int> ans;
    while (!temp.empty()) {
        ans.push_back(temp.top());
        temp.pop();
    }

    // Step 4: Print the sorted stack (top to bottom)
    cout << "Sorted stack (top to bottom): ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
