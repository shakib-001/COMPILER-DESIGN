#include <iostream>
using namespace std;
int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;
    cout << "Operators found: ";
    for(char c : exp) {
        if(c=='+' || c=='-' || c=='*' || c=='/')
            cout << c << " ";
    }
    return 0;
}

