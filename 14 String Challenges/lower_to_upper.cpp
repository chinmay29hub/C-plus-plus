#include<iostream>
#include<string>

#include<algorithm>

using namespace std;

int main () {
    string s;
    getline(cin, s); // give lower case input

    // cout<<'a' - 'A'<<endl;

    for (int i = 0; i<s.size(); i++) {
        s[i] = s[i] - 32;
    }

    cout<<s<<endl;

    return 0;



}