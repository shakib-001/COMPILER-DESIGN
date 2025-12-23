/*
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n=5;
    int sum=0;
    for(int i = 0; i <n; i++) {
        sum=sum+arr[i];
    }
    float avg = (float)sum/n;
    cout << "Average = " << avg << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter total number: ";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i = 0; i<n; i++) {
            cin>>arr[i];
        sum=sum+arr[i];
    }
    float avg = (float)sum/n;
    cout << "Average = " << avg << endl;
    return 0;
}

