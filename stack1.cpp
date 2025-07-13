#include<iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top;

    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed\n";
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow";
        }
        else{
            cout<<arr[top]<<" ";
            top--;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        else{
            return arr[top];
            
        }
    }
    bool  IsEmpty(){
        return top==-1;
    }
    int IsSize(){
        return top+1;
    }
};
int main() {
    Stack S(5);
    S.push(8);
    S.push(7);
    S.push(6);
    S.push(5);
    S.push(4);
    S.push(3); // This will cause overflow
    S.pop();
   cout<< S.peek()<<" ";
   cout<<S.IsEmpty()<<"  ";
   cout<<S.IsSize();
    return 0;
}
