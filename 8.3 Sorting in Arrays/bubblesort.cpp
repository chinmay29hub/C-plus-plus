#include<iostream>
using namespace std;

void bubble (int arr[], int n) {
    int counter = 1;
    while (counter < n) {
        for (int i = 0; i < n-counter; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter = counter + 1;
    }

    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return;
}



int main () {
    int n;

    cin>>n;

    int array[n];

    for (int i= 0; i<n; i++) {
        cin>>array[i];
    }

    bubble(array, n);
    return 0;
}