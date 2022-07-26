#include<iostream>
using namespace std;

int main () {
    int n;

    cin>>n;

    char array[n+1];

    cin>>array;

    bool flag = true;

    for (int i = 0; i<n; i++) {
        if (array[i] != array[n-1-i]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout<<"Palindrome"<<endl;
    } else {
        cout<<"Not a Palindrome"<<endl;
    }

    return 0;
}