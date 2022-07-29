#include<iostream>
#include<string>
using namespace std;

int main () {
    string s1;
    getline(cin, s1);

    s1.insert(4, "lol");

    cout<<s1<<endl;

    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    return 0;
}