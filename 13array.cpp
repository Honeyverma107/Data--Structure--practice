#include<iostream>
using namespace std;
int main(){
    int size,arr[100];
    int start=0;
    int end=size-1;
    int first=-1;int last=-1;
    int key,mid;

cout<<"enter the sized of an array"<<" ";
cin>>size;

cout<<"enter the key to be searched"<<" ";
cin>>key;
  
for(int i=0;i<size;i++){
    cin>>arr[i];
}
//
start=0;end=size-1;
    while(start<=end){
        mid = start + (end - start) / 2;
        if(arr[mid]==key){
             first=mid;
             end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }

    //last
    start=0;end=size-1;
    while(start<=end){
        mid = start + (end - start) / 2;
        if(arr[mid]==key){
             last=mid;
             start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
       
    }
    
    cout<<"first occurence"<<first;
     cout<<"last occurence"<<last;
    return 0;

}