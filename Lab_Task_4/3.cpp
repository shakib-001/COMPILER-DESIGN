#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "Enter integer: ";
    cin >> s;
    int state = 0;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (state == 0) {
            if (ch >= '0' && ch <= '9')
                state = 1;
            else {
                state = -1;
                break;
            }
        }
        else if (state == 1) {
            if (ch >= '0' && ch <= '9')
                state = 1;
            else {
                state = -1;
                break;
            }
        }
    }
    if (state == 1)
        cout << "Accepted (Valid Integer)" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}

