#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *pre;
    Node(int value){
        data=value;
        next=NULL;
        pre=NULL;
    }
};

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof arr/sizeof arr[0];

    Node *head=new Node (arr[0]);
    Node *temp=head;
    Node *temp2=new Node (arr[n]);

    for(int i=0;i<n;i++){
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";


}

