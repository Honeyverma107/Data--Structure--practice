#include<iostream>
#include<queue>
using namespace std;

int main(){
    //print all the element of queue
    queue<int>q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    q.pop();
    q.pop(); 
    q.pop();
    
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

}
