
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int main() {
    vector<char> postfix = {'A', 'B', 'C', '+', 'D', '*', '-'};
    stack<string> st;

    for (int i = 0; i < postfix.size(); i++) {
        char current = postfix[i];

        if (!isOperator(current)) {
            // Operand: push it as a string
            string operand(1, current);  // convert char to string
            st.push(operand);
        } else {
            // Operator: pop two operands from stack
            if (st.size() < 2) {
                cout << "Invalid expression!" << endl;
                return 1;
            }
            string operand2 = st.top(); st.pop();
            string operand1 = st.top(); st.pop();
            string expression = current + operand1 + operand2;  // prefix = operator + op1 + op2
            st.push(expression);
        }
    }

    // Final result should be on top of the stack
    if (st.size() == 1) {
        cout << "Prefix Expression: " << st.top() << endl;
    } else {
        cout << "Invalid postfix expression!" << endl;
    }

    return 0;
}
