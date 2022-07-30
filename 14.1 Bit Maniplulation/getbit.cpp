#include<iostream>
using namespace std;

int getBit (int n, int pos) {
    return ((n & (1<<pos)) != 0);
}

int main () {
    int n, pos;
    cin>>n>>pos;

    cout<<getBit(n, pos)<<endl;

    return 0;
}