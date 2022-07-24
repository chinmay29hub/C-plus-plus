#include<iostream>
using namespace std;

// efficient approach
string convert (int n) {
    string s = "";

    while(n) {
        if(n & 1) {
            s = s + "1";
        }
        else {
            s = s + "0";
        }
        n = n >> 1;
    }
    return (s);
}

void reverse(string s) {
    for (int i = s.length() - 1; i>=0; i--) {
        cout << s[i];
    }
}

// below code has limitations in the case of large numbers, refer above code
// void convert (int n) {
//     int list[100];
//     int i = 0;
//     while(n != 0) {
//         list[i] = n%2;
//         n = n/2;
//         i++;
//     }
//     for (int j = i-1; j>=0; j--) {
//         cout << list[j];
//     }
//     return;
// }

int main () {
    int n;
    cin>>n;
    
    reverse(convert(n));

    return 0;


}