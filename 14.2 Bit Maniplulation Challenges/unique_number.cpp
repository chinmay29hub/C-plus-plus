#include<iostream>
using namespace std;

int unique (int n, int array[]) {
    int zor = 0;

    for (int i = 0; i<n; i++) {
        zor = zor ^ array[i];
    }

    return zor;
}

int main () {
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i<n; i++) {
        cin>>array[i];
    }

    cout<<unique(n, array)<<endl;

    return 0;
}