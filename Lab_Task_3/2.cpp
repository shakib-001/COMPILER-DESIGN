#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> declared = {"x", "y", "z"};
bool isDeclared(string v) {
    for (string d : declared) if (d == v) return true;
    return false;
}
void check(string stmt) {
    cout << "Checking: " << stmt << endl;

    if (stmt.back() != ';') {
        cout << "Syntax Error: Missing semicolon!\n";
        return;
    }
    string a = stmt.substr(0, stmt.find("=") - 1);
    if (!isDeclared(a)) {
        cout << "Semantic Error: Undeclared variable '" << a << "'\n";
        return;
    }
    cout << "No error detected.\n";
}
int main() {
    check("a = x + y;");
    check("x = y + z");
    check("y = a + b;");
}

