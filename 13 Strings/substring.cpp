#include<iostream>
#include<string>
using namespace std;

int main () {
    string s;
    getline(cin, s);

    cout<<s.substr(2, 4);

    return 0;
}