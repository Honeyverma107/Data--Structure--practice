#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size,a;
    cout<<"enter the size of array"<<" -";
   cin>>size;
     cout<<size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<sizeof(a)<<endl;
    return 0;
}