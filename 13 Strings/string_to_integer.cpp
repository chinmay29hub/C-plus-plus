#include<iostream>
#include<string>
using namespace std;

int main () {
    string s;
    getline(cin, s); //give number input

    int n = stoi(s);

    cout<<n+1<<endl;

    return 0;

}