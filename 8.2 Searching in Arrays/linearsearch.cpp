#include<iostream>
using namespace std;

// complexity : O(n)


void check(int arr[], int n, int k) {
    for (int i = 0; i<n; i++) {
        if (arr[i] == k) {
            cout<<i<<" ";
            
        }
        else {
            cout<<"-1 ";
            break;
        }
    }

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

    check(array, n, k);

    // for (int i = 0; i<n; i++) {
    //     if (array[i] == k) {
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
    return 0;

    
}