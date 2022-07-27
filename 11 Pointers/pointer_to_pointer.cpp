#include<iostream>
using namespace std;

int main () {
    int a = 10;

    int *aptr;

    aptr = &a;

    int **qtoa;
    qtoa = &aptr;

    cout<<**qtoa<<endl;

    return 0;
}