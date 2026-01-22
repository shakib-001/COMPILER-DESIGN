#include <iostream>
#include <string>
using namespace std;
void analyze(string s) {
    cout << "Analyzing: " << s << endl;
    if (s.find("(") == string::npos) {
        cout << "Proper Variable Declaration\n";
    }
    else if (s.find("(") != string::npos && s.find(")") != string::npos && s.find("{") == string::npos) {
        cout << "Proper Function Declaration\n";
    }
    else if (s.find("{") != string::npos) {
        cout << "Proper Function Definition\n";
    }
}
int main() {
    analyze("int x;");
    analyze("float result;");
    analyze("void display();");
    analyze("int add(int a, int b){");
}

