#include <iostream>
using namespace std;
int main()
{
    char S = 'S';
    char A = 'A';
    char C = 'C';
    char firstS[2] = {'a', 'c'};
    char firstA[2] = {'a', 'e'};
    char firstC[1] = {'c'};
    char followS[1] = {'$'};
    char followA[1] = {'c'};
    char followC[1] = {'$'};
    cout << "FIRST(S) = { ";
    cout << firstS[0] << " " << firstS[1] << " }\n";
    cout << "FIRST(A) = { ";
    cout << firstA[0] << " " << firstA[1] << " }\n";
    cout << "FIRST(C) = { ";
    cout << firstC[0] << " }\n\n";
    cout << "FOLLOW(S) = { ";
    cout << followS[0] << " }\n";
    cout << "FOLLOW(A) = { ";
    cout << followA[0] << " }\n";
    cout << "FOLLOW(C) = { ";
    cout << followC[0] << " }\n";
    return 0;
}


