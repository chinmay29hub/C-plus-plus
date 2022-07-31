#include<iostream>
using namespace std;

void sievePrime (int q) {
    int temp = q + 1;
    int markk[temp] = {0};
    

    for (int i = 2; i<=q; i++) {
        if (markk[i] == 0) {
            for (int j = i * i; j<=q; j += i) {
                markk[j] = 1;
            }
        }
    }

    for (int i = 2; i<=q; i++) {
        if (markk[i] == 0) {
            cout<<i<<" ";
        }
    }
}

int main () {
    int n;
    cin>>n;

    if (n == 1) {
        cout<<"NULL"<<endl;
        return 0;
    }

    if (n == 2) {
        cout<<"2"<<endl;
        return 0;
    }

    sievePrime(n);

    return 0;
}