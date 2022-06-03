#include<iostream>
using namespace std;

int main() {

    int i = 1;
    int j = 2;
    int k;


    k = i + j + i++ + j++ + ++i + ++j;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;


    return 0;
    
}