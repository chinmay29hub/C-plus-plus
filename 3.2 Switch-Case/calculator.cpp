#include<iostream>
using namespace std;

int main() {

    float a,b;
    char op;

    cin>>a>>op>>b;

    switch (op) {
        case '+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Invalid operator"<<endl;
        break;
    }


    return 0;
    
}