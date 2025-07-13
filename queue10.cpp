//reverse an queue using stack
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    int n,element,i;
    cout<<"Enter the size"<<"   ";
    cin>>n;
    cout<<"enter the element";
    queue<int>q;
    for(int i=0;i<n;i++){
        cin>>element;
        q.push(element);
    }
    stack<int>s;
    while(!q.empty()){
        cout<<q.front();
        s.push(q.front());
        q.pop();
    }
    cout<<endl;

   while(!s.empty()){
    q.push(s.top());
    s.pop();
   }
   while(!q.empty()){
    cout<<q.front();
    q.pop();
   }

    
    
}