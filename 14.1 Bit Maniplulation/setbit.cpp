#include<iostream>
using namespace std;

int setBit (int n, int pos) {
    int temp = 1<<pos;
    n = n | temp;
    return n;
}

int main () {
    int n, pos;
    cin>>n>>pos;

    cout<<setBit(n, pos)<<endl;

    return 0;
}