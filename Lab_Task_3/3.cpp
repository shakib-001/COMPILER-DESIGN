#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string,string> typeTable;
    typeTable["a"] = "int";
    typeTable["b"] = "float";
    cout << "Checking: a = b\n";
    if (typeTable["a"] != typeTable["b"]) {
        cout << "Type Error: a (" << typeTable["a"]
             << ") cannot be assigned b (" << typeTable["b"] << ")\n";
    } else {
        cout << "No type error.\n";
    }
}

