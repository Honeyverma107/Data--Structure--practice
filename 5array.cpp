#include<iostream>
using namespace std;
int main(){
    
    int arr[6]={2,7,4,11,5,8};
    int i,j;int ans=0;int array=0;
    int temp=arr[0];
     //arr[i+1]=0;
    //  for(int j=0;j<=5;j++){
    //    int ans=arr[j];
    //     cout<<arr[j]<<" ";
    //   }
    //   cout<<endl;
     
    for(int i=0;i<5;i++){
      arr[i]=arr[i+1];
      array=arr[i];
      cout<<arr[i]<<" ";
      
    }
     temp=arr[5] ;
     cout<<arr[5];
    
  
 
}