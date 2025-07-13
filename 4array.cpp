#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,4,7,5,1};
    int max=INT16_MIN;
    int second_max=INT16_MAX;
   
   
    for(int i=0;i<5;i++){
        if(arr[i]>max ){
             max=arr[i];
            if(max==arr[i]){
            return -1;
           }
           else{
                if(max>arr[i]){
                second_max=arr[i];
              }
            }
         
        }
        cout<<second_max;
     }    
     
    }