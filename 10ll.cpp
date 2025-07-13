#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;

    }
};

int main(){
    int arr[]={1,2,3,4,5};
    Node *head=new Node(arr[0]);
    Node *temp=head;
     int n=sizeof(arr)/sizeof(arr[0]);

    
     for(int i=1;i<n;i++){
       temp->next=new Node(arr[i]);
        temp=temp->next;
     }
      temp=head;
     while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
     }
     cout<<"NULL";


     ///remove n element
     
   }