#include<iostream>
using namespace std;
int main(){
    int arr[100],size;
    int min =INT16_MAX;
    int max=INT16_MIN;
    cout<<"enter the size of array";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    for(int i=0;i<size;i++){
       if(arr[i]<min){
        min=arr[i];
       }
    }    
     cout<<min;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
         max=arr[i];
        }
     }    
     cout<<max;

}