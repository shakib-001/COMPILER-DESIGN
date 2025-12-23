#include <iostream>
#include <stack>
using namespace std;
int precedence(char c) {
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;



}
int main() {
    string infix, postfix = "";
    cout << "Enter infix expression: ";
    cin >> infix;
    stack<char> st;
    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    cout << "Postfix: " << postfix << endl;
    return 0;
}
