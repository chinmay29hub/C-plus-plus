#include<iostream>
#include<string>
using namespace std;

int main () {

    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    string res = s1 + s2;

    cout<<res<<endl;;

    cout<<s1.append(s2)<<endl;

    return 0;
}