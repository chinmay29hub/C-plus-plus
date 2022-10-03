#include<iostream>
using namespace std;

int first (int n, int f, int array[], int i) {
    if (i == n) {
        return -1;
    }

    if (array[i]==f) {
        return i;
    }
    return first(n, f, array, i+1);

}

int last(int n, int f, int array[], int i) {

    if (i == n) {
        return -1;
    }
    int rest = last(n, f, array, i+1);

    if (rest != -1) {
        return rest;
    }

    if (array[i] == f) {
        return i;
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
    int f;
    cin>>f;
    int i = 0;

    cout<<first(n, f, array, i)<<" ";
    cout<<last(n, f, array, i);
    return 0;
}
