#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int n;
    cin>>n;

    bool flag = 0;

    if (n == 1) {
        cout<<"Not Prime";
    }

    for (int i = 2; i<=sqrt(n); i++) {
        if (n % i == 0) {
            cout<<"Not a prime number"<<endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout<<"Prime Number";
    }

    return 0;
}