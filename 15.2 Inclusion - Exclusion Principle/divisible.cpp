#include<iostream>
using namespace std;

int divisible (int n, int a, int b) {
    int temp_1 = n/a;
    int temp_2 = n/b;
    int temp_3 = n/(a*b);

    return temp_1 + temp_2 - temp_3;
}

int main () {
    int n, a, b;
    cin>>n>>a>>b;

    cout<<divisible(n, a, b);

    return 0;
}