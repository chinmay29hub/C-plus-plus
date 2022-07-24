#include<iostream>
using namespace std;

void convert(int n) {
    int list[100];
    int i = 0;
    while(n!=0) {
        int rem = n%8;
        list[i] = rem;
        n = n/8;
        i++;

    }
    for (int j = i-1; j>=0; j--) {
        cout << list[j];
    }
}

int main() {
    int n;
    cin>>n;

    convert(n);
    return 0;
}