//insert at bottom
#include<iostream>
#include<stack>
using namespace std;

int main(){
    int x=2; //at bottom
    stack<int>s;
    stack<int>t;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(6);
   // cout<<s.top();

    while(!s.empty()){
        t.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!t.empty()){
        s.push(t.top());
        t.pop();
    }


    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
}