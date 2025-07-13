
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<char> v = {'r', 'o', 'h', 'i', 't'};
    stack<char> s;

    // Step 1: Push all elements into stack
    for(int i = 0; i < v.size(); i++) {
        s.push(v[i]);
    }

    // Step 2: Pop from stack and overwrite vector
    for(int i = 0; i < v.size(); i++) {
        v[i] = s.top();
        s.pop();
    }

    // Step 3: Print reversed vector
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
}
