#include<iostream>
using namespace std;

int sum (int n) {
    int temp = 0;
    for (int i = 1; i<=n; i++) {
        temp = temp + i;
    }
    return temp;
}

int main () {
    int n;
    cin>>n;

    int result = sum(n);
    cout<<result;

    return 0;
}