#include<iostream>
using namespace std;

int main() {
    int n;
    int m = 1;
    cin>>n;

    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout<<m<<" ";
            m = m + 1;
        }
        cout<<endl;
    }
    return 0;
}