#include <iostream>
#include <sstream>
using namespace std;
bool isKeyword(string s) {
    return (s=="int" || s=="if" || s=="return" || s=="for" || s=="while");
}
bool isOperator(char c) {
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='='||c=='>'||c=='<');
}
int main() {
    string code;
    cout << "Enter code line: ";
    getline(cin, code);
    stringstream ss(code);
    string token;
    int keywords = 0, identifiers = 0, operators = 0;
    while (ss >> token) {
        if (isKeyword(token)) keywords++;
        else identifiers++;

        for(char c : token) {
            if (isOperator(c)) operators++;
        }
    }
    cout << "Keywords: " << keywords << endl;
    cout << "Identifiers: " << identifiers << endl;
    cout << "Operators: " << operators << endl;
    return 0;
}
