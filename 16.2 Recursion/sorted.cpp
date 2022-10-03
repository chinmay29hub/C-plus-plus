#include<iostream>
using namespace std;

bool check (int n, int array[]) {
    if (n == 1) {
        return true;
    }

    return (array[0] < array[1]) && check(n-1, array+1);
}

int main () {
    int n;
    cin>>n;
    int array[n];

    for (int i = 0; i<n; i++) {
        cin>>array[i];
    }

    cout<<check(n, array);
}
