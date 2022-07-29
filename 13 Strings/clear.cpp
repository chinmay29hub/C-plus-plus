#include<iostream>
using namespace std;

int main () {
    string s;
    getline(cin, s);
    cout<<s<<endl;
    s.clear();

    if (s.empty()) {
        cout<<"empty";
    }
    else {
        cout<<"not empty";
    }
    return 0;

}