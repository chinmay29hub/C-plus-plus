#include<iostream>
#include<climits>
using namespace std;

void check (int arr[], int n) {
    int out[100];

    int mx = INT_MIN;

    for (int i = 0; i<n; i++) {
        mx = max(mx, arr[i]);
        out[i] = mx;
    }

    for (int i = 0; i<n; i++) {
        cout<<out[i]<<" ";
    }
}

int main () {
    int n;
    cin>>n;

    int array[n];

    for (int i=0; i<n; i++) {
        cin>>array[i];
    }

    check(array, n);

    return 0;
}