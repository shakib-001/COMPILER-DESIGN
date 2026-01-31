#include <iostream>
using namespace std;
bool accepts(string s) {
    if (s.size() == 0) return false;
    if (s[0] != 'a') return false;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != 'b' && s[i] != 'c')
            return false;
    }
    return true;
}
int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    if (accepts(s))
        cout << "Accepted\n";
    else
        cout << "Rejected\n";
    return 0;
}
