#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main(){
    queue<int>q;
    q.push(3);
    q.push(7);
    q.push(10);
    q.push(13);
    q.push(8);
    q.push(4);
    q.push(5);


    stack<int>s;
    for(int i=0;i<3;i++){
        s.push(q.front());
        q.pop();
    }

    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
int n=q.size();
    for(int i=0;i<n-3;i++){
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}