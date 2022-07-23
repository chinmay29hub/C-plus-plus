#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    

    for(int i=n; i>=1; i--) {
        int m = 1;
        for (int j = 1; j<=i; j++) {
            
            cout<<m<<" ";
            m +=1;
        }
        cout<<endl;
    }
}