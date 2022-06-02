#include<iostream>
using namespace std;

int main() {

    char button;
    cout<<"Input a Character : ";
    cin>>button;

    switch (button) {
        case 'a':
        cout<<"Hello 1"<<endl;
        break;

        case 'b':
        cout<<"Hello 2"<<endl;
        break;

        case 'c':
        cout<<"Hello 3"<<endl;
        break;

        case 'd':
        cout<<"Hello 4"<<endl;
        break;

        case 'e':
        cout<<"Hello 5"<<endl;
        break;

        default:
        cout<<"I am still learning"<<endl;
        break;
    }


    return 0;
    
}