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
            if (s[i] == 'a') state = 1;
            else state = 0;
        }
        else if (state == 1) {
            if (s[i] == 'a') state = 1;
            else state = 2;
        }
        else if (state == 2) {
            if (s[i] == 'a') state = 1;
            else state = 3;
        }
        else if (state == 3) {
            if (s[i] == 'a') state = 1;
            else state = 0;
        }
    }
    if (state == 3)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

