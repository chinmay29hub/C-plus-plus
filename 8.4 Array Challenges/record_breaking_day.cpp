#include<iostream>
#include<climits>
using namespace std;

void check(int n, int array[]) {
    int mx = INT_MIN;
    int ans = 0;
    for (int i = 0; i<n; i++) {
        if(array[i] > mx && array[i] > array[i + 1]) {
            ans = ans + 1;
        }

        mx = max(mx, array[i]);
    }

    cout<<ans<<endl;
    return;
}

int main () {
    int n;
    cin>>n;

    int array[n+1];
    array[n] = INT_MIN;

    for (int i = 0; i<n; i++) {
        cin>>array[i];
    }

    if (n == 1) {
        cout<<"1";
        return 0;
    }

    check(n, array);

    return 0;
}