#include<iostream>
#include<string>
using namespace std;

void all(string s, string start) {

    if (s.length() == 0) {
        cout<<start<<endl;
        return;
    }

    char first = s[0];
    string rest = s.substr(1);

    all(rest, start);
    all(rest, start + first);
}

int main () {
    string s;
    getline(cin, s);

    all(s, "");

    
    return 0;
}