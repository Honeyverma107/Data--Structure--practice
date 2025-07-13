
#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<char> v = {'(', '(', ')'};
    stack<char> s;
    int count = 0;

    for (int i = 0; i < v.size(); i++) {
        if (s.empty()) {
            s.push(v[i]);
        } else {
            if (v[i] != s.top()) {
                s.pop();
                count++;
            } else {
                s.push(v[i]);
            }
        }
    }

    // Store remaining characters from the stack
    vector<char> ans;
    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    // Reverse to maintain order
    reverse(ans.begin(), ans.end());

    cout << "Valid pairs: " << count << endl;
    cout << "Unbalanced characters: ";
    for (char c : ans) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
