#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    ofstream fout("students.txt");
    for (int i = 0; i < n; i++) {
        string name;
        int marks;
        cout << "Enter name and marks: ";
        cin >> name >> marks;
        fout << name << " " << marks << endl;
    }
    fout.close();
    ifstream fin("students.txt");
    string name;
    int marks;
    cout << "\nReading from file:\n";
    while (fin >> name >> marks) {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
    fin.close();
    return 0;
}
