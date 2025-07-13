#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  stack<int>s;
  vector<int>v={2,3,5,-4,6,-2,-8,9};
   for(int i=0;i<v.size();i++){
    if(s.empty()){
         s.push(v[i]);
    }
    else if (v[i]>0){
        if(s.top()>0){
           s.push(v[i]);
        }else{
           s.pop();
        }
    }
    else{
        if(s.top()<0){
           s.push(v[i]);

        }else{
             s.pop();
        }
    }
   }
 vector<int>ans(s.size());
 for(int i=0;i<ans.size();i++){
   ans[i]=s.top();
   s.pop();
   cout<<ans[i]<<" ";
 }
 cout<<endl;
//after reversing an array
 reverse(ans.begin(), ans.end());
   for (int i : ans) {
      cout << i << " ";
  }
    return 0;
}