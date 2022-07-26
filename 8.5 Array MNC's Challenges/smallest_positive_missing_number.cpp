#include<iostream>
#include<climits>
using namespace std;

int main () {
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i<n; i++) {
        cin>>array[i];

    }

    const int N = 1e6 + 2;
    bool check_array[N];

    for (int i = 0; i<n; i++) {
        check_array[i] = false;
    }

    for (int i = 0; i<n; i++) {
        if (array[i] >= 0) {
            check_array[array[i]] = true;
        }
    }

    int ans = INT_MIN;

    for (int i = 0; i<N; i++) {
        if (check_array[i] == false) {
            ans = i;
            break;
        }
        else {
            ans = -1;
        }
    }

    cout<<ans<<endl;

}