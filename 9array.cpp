//bubble sort (Descending order)
#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    int arr[100];
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"enter the element of an array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=0;j<n-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);            
            }
               
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}