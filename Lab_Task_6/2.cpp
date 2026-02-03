#include <iostream>
using namespace std;
int main()
{
    char E = 'E';
    char Ep = 'P';
    char T = 'T';
    char F = 'F';
    string firstE[2]  = {"id", "("};
    string firstEp[2] = {"+", "e"};
    string firstT[2]  = {"id", "("};
    string firstF[2]  = {"id", "("};
    char followE[2]  = {'$', ')'};
    char followEp[2] = {'$', ')'};
    char followT[3]  = {'+', '$', ')'};
    char followF[3]  = {'+', '$', ')'};
    cout << "FIRST(E) = { " << firstE[0] << " " << firstE[1] << " }\n";
    cout << "FIRST(E') = { " << firstEp[0] << " " << firstEp[1] << " }\n";
    cout << "FIRST(T) = { " << firstT[0] << " " << firstT[1] << " }\n";
    cout << "FIRST(F) = { " << firstF[0] << " " << firstF[1] << " }\n\n";
    cout << "FOLLOW(E) = { " << followE[0] << " " << followE[1] << " }\n";
    cout << "FOLLOW(E') = { " << followEp[0] << " " << followEp[1] << " }\n";
    cout << "FOLLOW(T) = { ";
    for(int i = 0; i < 3; i++)
        cout << followT[i] << " ";
    cout << "}\n";
    cout << "FOLLOW(F) = { ";
    for(int i = 0; i < 3; i++)
        cout << followF[i] << " ";
    cout << "}\n";
    return 0;
}


