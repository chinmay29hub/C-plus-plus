#include<iostream>
using namespace std;

int main(){

    int a; // a is a variable of type int - declaration
    a = 12; // a is now 12 - assignment - initialisation

    cout<<"size of int is "<<sizeof(a)<<endl;

    float b;
    b = 12.5;

    cout<<"size of float is "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char is "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool is "<<sizeof(d)<<endl;

    short int e;
    long int f;

    cout<<"size of short int is "<<sizeof(e)<<endl;
    cout<<"size of long int is "<<sizeof(f)<<endl;

    return 0;
}