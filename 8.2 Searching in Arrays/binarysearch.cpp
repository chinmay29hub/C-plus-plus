#include<iostream>
using namespace std;

// complexity : O(log2(n))

int binary(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start+end) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end  = mid - 1;
        }
    }
    return -1;
    
}

int main () {
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i<n; i++) {
        cin>>array[i];
    }

    int key;
    cin>>key;

    cout<<binary(array, n, key);
    return 0;
}