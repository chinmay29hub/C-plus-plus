#include<iostream>
using namespace std;

void sum (int n, int array[]) {

    for (int i = 0; i<n; i++) {
        int count = 0;
        for (int j = i; j<n; j++) {
            count = count + array[j];
            cout<<count<<" ";
        }
    }
    return;
}

int main () {
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i<n; i++) {
        cin>>array[i];
    }

    sum(n, array);

    return 0;
}