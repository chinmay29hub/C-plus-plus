#include<iostream>
#include<string>

#include<algorithm>

using namespace std;

int main () {
    string s;
    getline(cin, s); // give number input

    sort(s.begin(), s.end(), greater<int>());

    cout<<s<<endl;

    return 0;



}