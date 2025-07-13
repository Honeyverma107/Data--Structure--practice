#include<iostream>
//using vector
#include<queue>
#include<utility>
using namespace std;

int main(){
    int n,element,i;
    cout<<"enter the size";
    cin>>n;
    queue<int>q;
    for(int i=0;i<n;i++){
        cin>>element;
        q.push(element);
    }
    vector<int>v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //reverse an vector
    int start=0;
    int end=v.size()-1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
 for (int i = 0; i < v.size(); i++) {
        q.push(v[i]);
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }

}