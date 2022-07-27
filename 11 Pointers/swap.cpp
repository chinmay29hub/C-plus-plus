#include<iostream>
using namespace std;

void swapp(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main () {
    int a = 10, b = 20;
    // int *aptr, *bptr;

    // aptr = &a;
    // bptr = &b;

    swapp(&a, &b);
    cout<<a<<" "<<b;

    return 0;
}