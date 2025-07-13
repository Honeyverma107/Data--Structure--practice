
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<string>v={"((()))"};
    stack<string>s;
    for(int i=0;i<v.size();i++){
      if(s.empty()){
        s.push(v[i]);
      }else if(s.top()='('){

      }
    }
}