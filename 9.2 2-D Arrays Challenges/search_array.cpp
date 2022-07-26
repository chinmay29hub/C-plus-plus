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

    int r = 0;
    int c = m - 1;
    bool flag = false;

    while (r < n && c >= 0) {
        if (array[r][c] == k) {
            flag = true;
        }
        if (array[r][c] > k) {
            c--;
        } else {
            r++;
        }
    }

    if (flag) {
        cout<<"Found"<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }

    return 0;
}