#include<iostream>
using namespace std;

int main () {
    int n;

    cin>>n;
    int count = 0;


    for (int i = 1; i<=n; i++) {
        count = count + 1;
        if (count % 3 == 0) {
            count = count + 1;
        }
    }
    cout<<count;
    return 0;
}