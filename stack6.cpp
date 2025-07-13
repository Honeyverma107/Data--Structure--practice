#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
   vector<string>v={"ab","ac","da","da","ac","db","ea"};
   stack<string>s;
   for(int i=0;i<v.size();i++){
    if(s.empty()){
     s.push(v[i]);   
    }
    else if(s.top()!=v[i]){
         s.push(v[i]);
    }
    else{
       s.pop();
    }
   }
   vector<string>ans(s.size());
   for(int i=0;i<ans.size();i++){
    ans[i]=s.top();
    s.pop();
    cout<<ans[i]<<" ";
  }
  cout<<endl;
  
    // After reversing the array
    reverse(ans.begin(), ans.end());
    for (const string& str : ans) {
        cout << str << " ";
    }

    cout << endl;

 
  return 0;
  
}