#include<iostream>
using namespace std;

void tower (int n, char source, char destination, char helper) {

    if (n == 0) {
        return;
    }

    tower(n-1, source, helper, destination);
    cout<<"Move from "<<source<<" to "<<destination<<endl;
    tower(n-1, helper, destination, source);
}

int main () {
    int n;
    cin>>n;

    tower(3, 'A', 'C', 'B');
    return 0;


}