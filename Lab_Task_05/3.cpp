#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter a string (a and b only): ";
    cin >> s;
    int state = 0;
    for (int i = 0; i < s.length(); i++) {
        if (state == 0) {
            if (s[i] == 'a')
                state = 1;
            else
                state = 0;
        }
        else if (state == 1) {
            if (s[i] == 'b')
                state = 2;
            else
                state = 1;
        }
        else if (state == 2) {
            state = 2;
        }
    }
    if (state == 2)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}


