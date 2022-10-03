#include<iostream>
#include<string>
using namespace std;

string move_x(string s) {
    if (s.length() == 0) {
        return "";
    }

    char first = s[0];
    string rest = move_x(s.substr(1));

    if (s[0] == 'x') {
        return rest + first;
    } else {
        return first + rest;
    }
}

int main () {
    string s;
    getline(cin, s);

    cout<<move_x(s);
    
    return 0;
}