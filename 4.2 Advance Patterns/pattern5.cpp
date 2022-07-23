#include<iostream>
using namespace std;
int main () {
    int n;

    cin>>n;

    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        int m = i;
        for (int j = 1; j<=i; j++) {
            cout<<m<<" ";
            m--;
        }
        int k = 2;
        for (int j = 2; j<=i; j++) {
            cout<<k<<" ";
            k++;

        }
        cout<<endl;
    }
    return 0;
}