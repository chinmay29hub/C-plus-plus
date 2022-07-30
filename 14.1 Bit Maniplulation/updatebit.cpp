#include<iostream>
using namespace std;

int updateBit (int n, int pos, int what) {
    int temp = 1<<pos;
    int mask = ~(temp);
    n = n & mask;
    int temp_2 = what<<pos;
    n = n | temp_2;
    return n;
}

int main () {
    int n, pos, what;
    cin>>n>>pos>>what;

    cout<<updateBit(n, pos, what)<<endl;

    return 0;
}