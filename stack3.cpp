#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    char arr[] = {'h', 'e', 'l', 'l', 'o'};

    // Push each character into the stack
    for (int i = 0; i < 5; i++) {
        s.push(arr[i]);
    }
 // Print the original array
 cout << "original: ";
 for (int i = 0;  i< 5; i++) {
     cout << arr[i];
 }
 cout << endl;
    // Pop from stack and overwrite original array to reverse it
    int i = 0;
    while (!s.empty()) {
        arr[i] = s.top();
        i++;
        s.pop();
    }

    // Print the reversed array
    cout << "Reversed: ";
    for (int i = 0;  i< 5; i++) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
