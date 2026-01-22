#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        bool found=true;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[i]+a[j]+a[k]==s) {
                        found=false;
                    }
                }
            }
        }
        if(found==false)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
