#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    
    int reverse;

    while(n!=0) {
        int last = n%10;
        reverse = reverse * 10 + last;
        n = n/10;
    }
    cout<<"Reversed Number : "<<reverse<<endl;

    return 0;
}