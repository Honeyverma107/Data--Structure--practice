#include<iostream>
#include<queue>
using namespace std;
//from the user
int main(){
  queue<int>q;
  int n,values;
  cout<<"enter the size";
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>(x);
    q.push(x);
  }
  vector<int>ans;
  while(!q.empty()){
    cout<<q.front();
    ans.push_back(q.front());
    q.pop();

  }
  cout<<endl;
  for(int i=0;i<ans.size();i++){
    cout<<ans[i];
  }


}