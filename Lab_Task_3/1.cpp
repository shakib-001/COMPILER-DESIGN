#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Symbol {
public:
    string name, type, scope;
    Symbol(string n, string t, string s) {
        name = n;
        type = t;
        scope = s;
    }
};
class SymbolTable {
private:
    vector<Symbol> table;

public:
    bool insert(string name, string type, string scope) {
        for (auto &s : table) {
            if (s.name == name) {
                cout << "Error: Redeclaration of variable '" << name << "'!\n";
                return false;
            }
        }
        table.push_back(Symbol(name, type, scope));
        cout << "Inserted: " << name << " (" << type << ", " << scope << ")\n";
        return true;
    }
    void display() {
        cout << "--- Symbol Table ---\n";
        cout << "Name\tType\tScope\n";
        for (auto &s : table) {
            cout << s.name << "\t" << s.type << "\t" << s.scope << endl;
        }
    }
};
int main() {
    SymbolTable st;
    st.insert("x", "int", "local");
    st.insert("y", "float", "global");
    st.insert("x", "int", "local");

    st.display();
    return 0;
}

