#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
//reverse a queue
int main(){
    queue<int>q;
    q.push(7);
    q.push(8);
    q.push(4);
    q.push(2);
    vector<int>ans;
  while(!q.empty()){
        cout<<q.front()<<endl;
        ans.push_back(q.front());
        q.pop();
     }

     reverse(ans.begin(), ans.end());

     for (int y : ans) {
         cout << y << " ";
     }

    

}
/*in this it take time complexity of O(n) and space complexity O(n)
it will never be O(1) becoz it a queue does not have a random access so we can not reverse it;
for reversing an queue in O(1)time complexity we use deque
*/
