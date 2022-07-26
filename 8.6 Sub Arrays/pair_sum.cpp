#include<iostream>
using namespace std;

bool check (int n, int array[], int k) {
    for (int i = 0; i<n; i++) {
        for (int j = i + 1; j<n; j++) {
            if (array[i] + array[j] == k) {
                cout<<array[i]<<" "<<array[j]<<endl;
                return true;
            }
        }
    }
    return false;
}


int main () {
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i<n; i++) {
        cin>>array[i];
    }

    int k;
    cin>>k;

    check(n, array, k);

    return 0;
}