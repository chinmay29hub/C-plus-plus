#include<iostream>
using namespace std;

int clearBit (int n, int pos) {
    int temp = 1<<pos;
    int mask = ~(temp);
    n = n & mask;
    return n;
}

int main () {
    int n, pos;
    cin>>n>>pos;

    cout<<clearBit(n, pos)<<endl;

    return 0;
}