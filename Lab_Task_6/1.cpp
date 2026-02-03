#include <iostream>
using namespace std;
int main()
{
    char stateS = 'S';
    char stateA = 'A';
    char stateB = 'B';
    char firstS[2] = {'a', 'b'};
    char firstA[2] = {'a', 'e'};
    char firstB[1] = {'b'};
    char followS[1] = {'$'};
    char followA[1] = {'b'};
    char followB[1] = {'$'};
    cout << "FIRST(S) = { ";
    cout << firstS[0] << " " << firstS[1] << " }\n";
    cout << "FIRST(A) = { ";
    cout << firstA[0] << " " << firstA[1] << " }\n";
    cout << "FIRST(B) = { ";
    cout << firstB[0] << " }\n\n";
    cout << "FOLLOW(S) = { ";
    cout << followS[0] << " }\n";
    cout << "FOLLOW(A) = { ";
    cout << followA[0] << " }\n";
    cout << "FOLLOW(B) = { ";
    cout << followB[0] << " }\n";
    return 0;
}

