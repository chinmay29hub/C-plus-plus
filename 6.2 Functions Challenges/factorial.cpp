#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;

    cin>>n;

    int result = factorial(n);
    cout<<result;
    return 0;
}