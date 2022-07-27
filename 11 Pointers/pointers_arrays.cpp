#include<iostream>
using namespace std;

int main () {
    int array[50] = {10, 20, 30, 50, 60};

    cout<<*array<<endl;

    int *aptr = array;

    for (int i = 0; i<5; i++) {
        cout<<*aptr<<" ";
        aptr++;
    }
    cout<<endl;

    for (int i = 0; i<5; i++) {
        cout<<*(array + i)<<" ";
    }

    return 0;
}