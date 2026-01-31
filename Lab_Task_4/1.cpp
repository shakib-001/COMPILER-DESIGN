#include <iostream>
using namespace std;
int main() {
    string a;
    cout << "Enter string: ";
    cin >> a;
    if (a.length() == 0) {
        cout << "Rejected" << endl;
        return 0;
    }
    int state = 0;
    for (int i = 0; i < a.length(); i++) {
        char ch = a[i];

        if (ch == 'a' || ch == 'b') {
            state = 1;
        } else {
            state = -1;
            break;
        }
    }
    if (state == 1 && a[a.length() - 1] == 'a')
        cout << "Accepted (matches (a|b)*a)" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}

