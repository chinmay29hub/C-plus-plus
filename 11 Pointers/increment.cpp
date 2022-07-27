#include<iostream>
using namespace std;

void increment (int *a) {
    (*a)++;
}

int main () {
    int a = 20;

    increment(&a);

    cout<<a<<endl;

    return 0;
}