#include <iostream>
using namespace std;
int add(int x, int y) {
    return x + y;
}
int getInput() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}
int main() {
    int a = getInput();
    int b = getInput();
    cout << "Sum = " << add(a, b) << endl;
    return 0;
}

