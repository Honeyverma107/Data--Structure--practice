#include<iostream>
#include<queue>
#include<stack>
using namespace std;
//reversing an array using stack
int main(){
    queue<int>q;
    q.push(7);
    q.push(8);
    q.push(4);
    q.push(2);
    stack<int>ans;
  while(!q.empty()){
        cout<<q.front()<<endl;
      ans.push(q.front());
        q.pop();
     }
    
     while(!ans.empty()){
        q.push(ans.top());
        ans.pop();
     }
     while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
     }
}
//time and space will take 0(n)