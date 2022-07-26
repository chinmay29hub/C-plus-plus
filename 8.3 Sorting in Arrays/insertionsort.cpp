#include<iostream>
using namespace std;

void insertion (int array[], int n) {
    for (int i = 1; i<n; i++) {
        int temp = array[i];
        int j = i - 1;

        while (array[j] > temp && j>=0) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }

    for (int i = 0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    return;
}

int main () {
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    insertion(arr, n);

    return 0;
}