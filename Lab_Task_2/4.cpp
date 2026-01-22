#include <iostream>
using namespace std;

bool valid(string s) {
    int n = s.size(), op = 0, var = 0;

    for(int i = 0; i < n; i++){
        if(isalpha(s[i])) var++;
        if(s[i] == '+' || s[i] == '-') op++;
        else op = 0;
        if(op > 2) return false;
    }
    if(var != 1) return false;

    if(s == "++X" || s == "X++" || s == "--X" || s == "X--") return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    cout << (valid(s) ? "Valid" : "Invalid");
}

