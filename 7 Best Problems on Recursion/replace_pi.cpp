#include<iostream>
#include<string>
using namespace std;

void replace_pi(string s) {
    if (s.length() == 0) {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i') {
        cout<<"3.14";
        replace_pi(s.substr(2));
    }
    else {
        cout<<s[0];
        replace_pi(s.substr(1));
    }

    return;
}

int main () {
    string s;
    getline(cin, s);

    replace_pi(s);

    return 0;
}