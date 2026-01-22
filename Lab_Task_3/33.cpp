#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<"max numner: ";
    cout<< max({a,b,c,d,e,f})<<endl;
    cout<<"minimum number: ";
    cout<< min({a,b,c,d,e,f});
}
