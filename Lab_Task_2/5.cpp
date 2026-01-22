#include <iostream>
using namespace std;
bool isOp(char c){
    return c=='+' || c=='-' || c=='*' || c=='/';
}
bool validExp(string s){
    int eq = 0, op = 0;
    for(char c: s){
        if(c == '=') eq++;
        if(isOp(c)) op++;
    }
    if(eq != 1 || op > 2) return false;
    int pos = s.find('=');
    if(pos != 1 || !isalpha(s[0])) return false;

    for(int i=pos+1;i<s.size();i++){
        if(isalpha(s[i]) && isalpha(s[i-1])) return false;
    }
    return true;
}
int main(){
    string s;
    getline(cin, s);
    cout << (validExp(s) ? "Valid Expression" : "Invalid Expression");
}

