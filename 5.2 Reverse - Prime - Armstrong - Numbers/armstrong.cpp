#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int n;
    cin>>n;
    int temp = n;
    int sum = 0;

    while(n!=0) {
        int last = n%10;
        sum = sum + pow(last, 3);
        n = n/10;
    }

    if (sum == temp) {
        cout<<"Armstrong Number";
    } else {
        cout<<"Not an Armstrong Number";
    }

    return 0;
}