#include<iostream>
using namespace std;

int main () {
    int n;

    cin>>n;
    cin.ignore();

    char array[n+1];

    cin.getline(array, n);
    cin.ignore();

    // cout<<array[0];
    

    int temp = 0;
    int newlen = 0;
    int i = 0;

    // int st = 0;
    // int end = 0;
    while (array[i] != '\0') {
        if (array[i] != ' ') {
            newlen++;
        } else {
            temp = max(temp, newlen);
            newlen = 0;
        }

        i++;
    }
    int res = max(temp, newlen);
    cout<<res<<endl;

    // cout<<s<<endl;

    // for (int j = st; j<= st + res; j++) {
    //     cout<<array[j];
    // }


    return 0;
}