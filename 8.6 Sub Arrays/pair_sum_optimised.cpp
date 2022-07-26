#include<iostream>
using namespace std;

bool check (int n, int array[], int k) {
    int low = 0;
    int high = n-1;

    while(low < high) {
        if (array[low] + array[high] == k) {
            cout<<array[low]<<" "<<array[high]<<endl;
            return true;
        } else if ((array[low] + array[high]) < k) {
            low = low + 1;
        } else {
            high = high + 1;
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