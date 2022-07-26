#include<iostream>
using namespace std;

int main () {
    int n, m;

    cin>>n>>m;

    int array[n][m];

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin>>array[i][j];
        }
    }

    int k;
    cin>>k;

    bool flag = false;

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if(array[i][j] == k) {
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }

    if (flag) {
        cout<<"Element Found"<<endl;
    } else {
        cout<<"Element Not Found"<<endl;
    }

    return 0;
}