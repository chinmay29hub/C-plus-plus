#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i = 1; i<=n; i++) {
        int space = n - i;
        for (int j = 1; j<=space; j++) {
            cout<<" ";
        }
        int m = 1;
        for (int j = 1; j<=i; j++) {
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
}