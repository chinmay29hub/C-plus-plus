#include<iostream>
#include<string>
using namespace std;

string duplicate (string s) {
    if (s.length() == 0) {
        return "";
    }
    char first = s[0];
    string rest = duplicate(s.substr(1));
    if (first == rest[0]) {
        return rest;
    } else {
        return first + rest;
    }
}

int main () {
    string s;
    getline(cin, s);

    cout<<duplicate(s);
    
    return 0;
}